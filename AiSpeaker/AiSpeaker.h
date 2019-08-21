//
// Created by messenger on 8/21/2019.
//

#ifndef AISPEAKER_H
#define AISPEAKER_H


#include <vector>

class AiSpeaker {
public:
    static AiSpeaker* instance();
    static void processInput(std::vector<float>);
    static bool getIsReady();
    static std::vector<float> getInput();

private:
    AiSpeaker();
    static bool isReady;

    static AiSpeaker* aiSpeakerInstance;
    static std::vector<float> inputValues;

};


#endif //AISPEAKER_H
