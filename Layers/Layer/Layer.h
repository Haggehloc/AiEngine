//
// Created by messenger on 8/19/2019.
//

#include "../Nodes/Node.h"

#ifndef LAYER_H
#define LAYER_H

struct Layer{
    Node node[];
};

void addNode(Layer* layer, Node node, int i){
    layer->node[i] = node;
}

#endif //LAYER_H