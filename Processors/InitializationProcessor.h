//
// Created by messenger on 8/19/2019.
//

#include "../Layers/AiBrain/Brain.h"
#include "../Layers/Nodes/NodeUtils.h"

#ifndef INITIALIZATIONPROCESSOR_H
#define INITIALIZATIONPROCESSOR_H

Brain initializationProcessor(float initialActivationWeight, float maxWeight, float initialWeight, int layers,
                              int layerSize[]) {
    Brain newBrain;
    Layer layer;
    Node node;

    for (int i = 0; i < layers; i++) {
        for (int j = 0; j < layerSize[i]; j++) {
            node = createNode(initialActivationWeight, maxWeight, initialWeight);
            layer.node[j] = node;
        }
        newBrain.layer[i] = layer;
    }

    return newBrain;
}

#endif //INITIALIZATIONPROCESSOR_H
