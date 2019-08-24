#include <iostream>
#include <thread>
#include "AiLogger/Log.h"
#include "../AiEngine/AiEngine/Engine.h"

int main() {
    float initialActivationWeight = 10;
    float maxWeight = 30;
    float initialWeight = 10;
    int layers = 10;
    std::vector<int> layerSize = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    Log* logger = Log::instance();

    logger->getCoreLogger(LogLevel::info, "Starting the engine.");
    std::thread engineThread(Engine, initialActivationWeight, maxWeight, initialWeight, layers, layerSize);




    engineThread.join();
    return 0;
}