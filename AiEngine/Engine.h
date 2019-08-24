//
// Created by messenger on 8/19/2019.
//

#ifndef ENGINE_H
#define ENGINE_H

#include <thread>


#include "../Layers/Layer/Layer.h"
#include "EngineState.h"
#include "../Processors/InitializationProcessor.h"
#include "InputProcessor.h"
#include "../AiLogger/Log.h"

/**
 * This is the main engine for the ai, call this to start the ai up.
 */
void Engine(float initialActivationWeight, float maxWeight, float initialWeight, int layers, std::vector<int> layerSize) {
    bool isRunning = true;
    EngineState state = INIT;
    Brain* brain;
    Log* logger = Log::instance();

    while (isRunning) {
        switch (state) {
            case INIT: {
                //initializes the brain of the Ai then sets the state to start listening for input
                logger->getCoreLogger(LogLevel::info, "initializing the brain");
                brain = initializationProcessor(initialActivationWeight, maxWeight, initialWeight, layers, layerSize);
                state = SHUTDOWN;
            }
            case LISTEN: {
//                inputProcessor();
            }

            case SHUTDOWN: break;

        }

        isRunning = false;
    }

}
#endif //ENGINE_H
