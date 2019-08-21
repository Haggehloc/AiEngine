//
// Created by dadad on 8/21/2019.
//

#include "Log.h"
#include "../vender/spdlog/include/spdlog/sinks/stdout_color_sinks.h"

namespace AiEngine {
    std::shared_ptr<spdlog::logger> s_CoreLogger;
    std::shared_ptr<spdlog::logger> s_ClientLogger;

    void Log::init() {
        spdlog::set_pattern("%c - %@ -  %t %^%n_%l: %v");
        s_CoreLogger = spdlog::stdout_color_mt("SmartLog", null);
    }
}