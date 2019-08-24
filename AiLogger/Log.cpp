//
// Created by messenger on 8/21/2019.
//

#include "Log.h"
#include "../vender/spdlog/include/spdlog/sinks/stdout_color_sinks.h"



namespace AiEngine {

    Log* Log::logger = NULL;

    std::shared_ptr<spdlog::logger> Log::s_CoreLogger = spdlog::stdout_color_mt("SmartLog");
    std::shared_ptr<spdlog::logger> Log::s_ClientLogger = spdlog::stdout_color_mt("ClientLog");

    spdlog::level::level_enum getSpdLogLevelEnum(LogLevel level) {
        switch (level) {
            case trace:
                return spdlog::level::trace;
            case info:
                return spdlog::level::info;
            case warn:
                return spdlog::level::warn;
            case err:
                return spdlog::level::err;
            case critical:
                return spdlog::level::critical;
            case off:
                return spdlog::level::off;

        }

        throw std::invalid_argument("A non spdlog level was entered into the method");

    }



    Log* Log::instance() {
        if(logger == NULL) {
            logger = new Log;
            spdlog::set_pattern("%n - %c%@ - Thread id:%t %^ %l: %v%$");
        }

        return logger;
    }


    void Log::getCoreLogger(LogLevel level, std::string message) {
        s_CoreLogger->log(AiEngine::getSpdLogLevelEnum(level), message);
    }

    void Log::getClientLogger(LogLevel level, std::string message) {
        s_ClientLogger->log(getSpdLogLevelEnum(level), message);
    }
}