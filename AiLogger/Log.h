//
// Created by dadad on 8/21/2019.
//

#ifndef UNTITLED2_LOG_H
#define UNTITLED2_LOG_H

#include <memory.h>

#include "../vender/spdlog/include/spdlog/spdlog.h"
#include "../vender/spdlog/include/spdlog/logger.h"


namespace AiEngine {
    enum LogLevel {
        trace,
        debug,
        info,
        warn,
        err,
        critical,
        off
    };

    class Log {
    public:
        static Log* instance();


        void getCoreLogger(LogLevel, std::string);

        void getClientLogger(LogLevel, std::string);

        static std::shared_ptr<spdlog::logger> s_CoreLogger;
        static std::shared_ptr<spdlog::logger> s_ClientLogger;

    private:
        void init();



        static Log* logger;

    };


}

extern AiEngine::Log logger;


#endif //UNTITLED2_LOG_H
