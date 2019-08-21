//
// Created by messenger on 8/20/2019.
//

#ifndef INPUTPROCESSOR_H
#define INPUTPROCESSOR_H

#include <zconf.h>
#include "../AiSpeaker/AiSpeaker.h"

float* inputProcessor(){

    while(!AiSpeaker::getIsReady()){
        //doNothing, wait for input
        sleep(50);
    }

    return AiSpeaker::getInput();
}

#endif //INPUTPROCESSOR_H
