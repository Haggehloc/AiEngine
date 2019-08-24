//
// Created by messenger on 8/19/2019.
//

#include <vector>
#include "../Nodes/Node.h"

#ifndef LAYER_H
#define LAYER_H

struct Layer{
    std::vector<Node> node;
};

void addNode(Layer &layer, Node node){
    layer.node.push_back(node);
}

#endif //LAYER_H