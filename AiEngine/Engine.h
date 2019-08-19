//
// Created by dadad on 8/19/2019.
//

#ifndef ENGINE_H
#define ENGINE_H

#include "../Layers/Layer/Layer.h"
#include "/EngineState.h"

/**
 * This is the main engine for the ai, call this to start the ai up.
 */
void Engine()
{
    bool isRunning = true;
    EngineState state = INIT;


    while(isRunning)
    {
        switch(state){
            case INIT:{

            }

        }

    }

}

Layer* buildLayer(int size){
    return new Layer;
}

Layer* initializationProcessor(){




}



#endif //ENGINE_H
