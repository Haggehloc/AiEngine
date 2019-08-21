//
// Created by dadad on 8/21/2019.
//

#include "AiSpeaker.h"

bool isReady = false;


AiSpeaker *AiSpeaker::instance() {
    if (!aiSpeakerInstance)
        aiSpeakerInstance = new AiSpeaker;

    return aiSpeakerInstance;
}

void AiSpeaker::processInput(float input[]) {
    for(int i=0; i<sizeof(input); i++ ){
        inputValues[i] = input[i];
    }

    isReady = true;
}

bool AiSpeaker::getIsReady() {
    return isReady;
}

float* AiSpeaker::getInput(){
    return inputValues;
}