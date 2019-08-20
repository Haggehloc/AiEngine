//
// Created by messenger on 8/16/2019.
//

#ifndef NODE_H
#define NODE_H

/**
 * This represents a single node in the Ai
 */
struct Node {

    //Tells whether or not the node has been activated in the current run
    bool isActivated;

    //Tells whether or not the node has been touched in the current run
    bool isTouched;

    //Tells at what strength of signal the node should be activated
    float activationWeight;

    //Tells the maximum activation weight the node is allowed to have
    float maxWeight;

    //tells the current weight against the signal the node currently has
    float weight;
};

#endif //NODE_H
