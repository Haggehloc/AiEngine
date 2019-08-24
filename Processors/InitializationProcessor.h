//
// Created by messenger on 8/19/2019.
//

#include <string.h>
#include <sstream>

#include "../Layers/AiBrain/Brain.h"
#include "../Layers/Nodes/NodeUtils.h"
#include "../AiLogger/Log.h"

using namespace AiEngine;

#ifndef INITIALIZATIONPROCESSOR_H
#define INITIALIZATIONPROCESSOR_H

void initializationBaseLogger(Log* logger, float initialActivationWeight, float maxWeight, float initialWeight, int layers,
                              std::vector<int> layerSize){
    std::stringstream logStringStream;
    logStringStream << "The number of layers in the ai is: " << layers;
    logger->getCoreLogger(trace, logStringStream.str());

    logStringStream.str(std::string());
    logStringStream << "The maximum weight of the nodes in the ai is: " << maxWeight;
    logger->getCoreLogger(trace, logStringStream.str());

    logStringStream.str(std::string());
    logStringStream << "The initial activation weight of the nodes in the ai is: " << initialActivationWeight;
    logger->getCoreLogger(trace, logStringStream.str());

    logStringStream.str(std::string());
    logStringStream << "The initial weight of the nodes in the ai is: " << initialWeight;
    logger->getCoreLogger(trace, logStringStream.str());

    int i=1;
    for(std::vector<int> :: iterator it = layerSize.begin(); it != layerSize.end(); ++it) {
        logStringStream.str(std::string());
        logStringStream << "The size of the layer numbered " << i << " is: " << *it;
        logger->getCoreLogger(trace, logStringStream.str());
        i++;
    }
}

Brain* initializationProcessor(float initialActivationWeight, float maxWeight, float initialWeight, int layers,
                              std::vector<int> layerSize) {
    Brain newBrain;
    Brain *newBrainPointer = &newBrain;
    Layer layer = Layer();
    Node node;
    Log* logger = Log::instance();

    initializationBaseLogger(logger, initialActivationWeight, maxWeight, initialWeight, layers, layerSize);

    std::stringstream logStringStream;


    for (int i = 0; i < layers; i++) {
        logger->getCoreLogger(LogLevel::trace, std::string("Creating layer..."));
        for (int j = 0; j < layerSize[i]; j++) {
            node = createNode(initialActivationWeight, maxWeight, initialWeight);
            logStringStream << "The node being created is: " << toString(node) << "\n";
            logger->getCoreLogger(trace, logStringStream.str());
            addNode(layer, node);
        }
        addLayer(newBrainPointer);
    }
    return newBrainPointer;
}

#endif //INITIALIZATIONPROCESSOR_H
