//
// Created by messenger on 8/19/2019.
//

#include <vector>
#include "../Layer/Layer.h"

#ifndef BRAIN_H
#define BRAIN_H

struct Brain{
    std::vector<Layer*> layer;
};

void addLayer(Brain *brain){
    brain->layer.push_back(new Layer());
}
#endif //BRAIN_H
