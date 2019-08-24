//
// Created by messenger on 8/19/2019.
//

#ifndef UNTITLED2_NODEUTILS_H
#define UNTITLED2_NODEUTILS_H

#include "Node.h"
#include "../../AiLogger/Log.h"

/**
 * Creates a node and returns it for use
 *
 * @param initialActivationWeight The {@link Node::activationWeight} of the node.
 * @param maxWeight The {@link Node::maxWeight} of the node.
 * @param initialWeight The {@link Node::weight} of the node.
 * @return The created {@link Node} with the given parameters.
 */
Node createNode(float initialActivationWeight, float maxWeight, float initialWeight){
    Node node;

    node.activationWeight = initialActivationWeight;
    node.maxWeight = maxWeight;
    node.weight = initialWeight;

    return node;
};

std::string toString(Node node){
    std::stringstream stringStream;
    stringStream << "Node{\"isTouched\":\"" << node.isTouched << "\",\"weight\":\""
    << node.weight << "\",\"maxWeight\":\"" << node.maxWeight << "\",\"activationWeight\":\""
    << node.activationWeight << "\",\"isActivated\":\"" << node.isActivated << "\"}";

    return stringStream.str();
}

void processNode(Node* node, bool success){

    if(node->isTouched){
        if(node->isActivated){
            if(!success){
                node->activationWeight *= 1.1;
                if(node->activationWeight > node->maxWeight){
                    node->activationWeight = node->maxWeight;
                }

                node->weight *= 1.1;
            }
        }else{
            if(!success){
                node->activationWeight *= .9;
                if(node->activationWeight > node->maxWeight){
                    node->activationWeight = node->maxWeight;
                }

                node->weight *= .5;
            }
        }
    }

    node->isActivated = false;
    node->isTouched = false;
};

#endif //UNTITLED2_NODEUTILS_H
