//
// Created by dadad on 8/21/2019.
//

#include "AiSpeaker.h"

bool AiSpeaker::isReady = false;
std::vector<float> AiSpeaker::inputValues;
AiSpeaker* AiSpeaker::aiSpeakerInstance;

AiSpeaker::AiSpeaker(){
    //use defaults
}

AiSpeaker *AiSpeaker::instance() {
    if (!aiSpeakerInstance)
        aiSpeakerInstance = new AiSpeaker;

    return aiSpeakerInstance;
}

void AiSpeaker::processInput(std::vector<float> inputs) {
    for(auto input: inputs){
        inputValues.push_back(input);
    }

    isReady = true;
}

bool AiSpeaker::getIsReady() {
    return isReady;
}

std::vector<float> AiSpeaker::getInput(){
    return inputValues;
}