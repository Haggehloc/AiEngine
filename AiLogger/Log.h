//
// Created by dadad on 8/21/2019.
//

#ifndef UNTITLED2_LOG_H
#define UNTITLED2_LOG_H

#include <memory.h>

#include "../vender/spdlog/include/spdlog/spdlog.h"
#include "../vender/spdlog/include/spdlog/logger.h"


namespace AiEngine {
    class Log {
    public:
        static void init();

        inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() {return s_CoreLogger;}
        inline static std::shared_ptr<spdlog::logger>& GetClientLogger() {return s_ClientLogger;}

    private:
        static std::shared_ptr<spdlog::logger>& s_CoreLogger;
        static std::shared_ptr<spdlog::logger>& s_ClientLogger;

    };
}

#endif //UNTITLED2_LOG_H
