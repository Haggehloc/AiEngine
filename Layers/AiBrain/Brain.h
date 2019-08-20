//
// Created by messenger on 8/19/2019.
//

#include "../Layer/Layer.h"

#ifndef BRAIN_H
#define BRAIN_H

struct Brain{
    Layer layer[];
};

void addLayer(Brain* brain, Layer layer, int i){
    brain->layer[i] = layer;
}
#endif //BRAIN_H
