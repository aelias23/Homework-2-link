#ifndef VOLLEYBALL_H
#define VOLLEYBALL_H

#include "athlete.h"
#include <string>

class VolleyBall : public Athlete {
private:
    std::string position;
    double spikeHeight;

public:
    VolleyBall(std::string pos = "", double spike = 0.0) : position(pos), spikeHeight(spike) {}

    std::string getPosition() const { return position; }
    void setPosition(std::string pos) { position = pos; }

    double getSpikeHeight() const { return spikeHeight; }
    void setSpikeHeight(double spike) { spikeHeight = spike; }
};

#endif
