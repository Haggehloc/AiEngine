//
// Created by messenger on 8/21/2019.
//

#ifndef AISPEAKER_H
#define AISPEAKER_H


class AiSpeaker {
public:
    static AiSpeaker* instance();
    static void processInput(float[]);
    static bool getIsReady();
    static float* getInput();

private:
    AiSpeaker();
    static bool isReady;

    static AiSpeaker* aiSpeakerInstance;
    static float inputValues[];

};


#endif //AISPEAKER_H
