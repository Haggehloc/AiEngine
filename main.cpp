#include <iostream>
#include <thread>


#include "../AiEngine/AiEngine/Engine.h"

int main() {
    float initialActivationWeight = 10;
    float maxWeight = 30;
    float initialWeight = 10;
    int layers = 10;
    int layerSize[10] = {10, 11, 11, 11, 11, 11, 11, 11, 11, 10};


    std::thread engineThread(Engine, initialActivationWeight, maxWeight, initialWeight, layers, layerSize);




    engineThread.join();
    return 0;
}