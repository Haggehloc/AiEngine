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

/**
 * This is the main engine for the ai, call this to start the ai up.
 */
void Engine(float initialActivationWeight, float maxWeight, float initialWeight, int layers, int layerSize[]) {
    bool isRunning = true;
    EngineState state = INIT;

    while (isRunning) {
        switch (state) {
            case INIT: {
                initializationProcessor(initialActivationWeight, maxWeight, initialWeight, layers, layerSize);
                state = LISTEN;
            }
            case LISTEN: {
                inputProcessor();
            }

        }

    }

}
#endif //ENGINE_H
