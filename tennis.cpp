#ifndef TENNIS_H
#define TENNIS_H

#include "athlete.h"

class Tennis : public Athlete {
private:
    int serveSpeed;
    bool hasWonGS;

public:
    Tennis(int s = 0, bool won = false) : serveSpeed(s), hasWonGS(won) {}

    int getServeSpeed() const { return serveSpeed; }
    void setServeSpeed(int s) { serveSpeed = s; }

    bool getHasWonGS() const { return hasWonGS; }
    void setHasWonGS(bool won) { hasWonGS = won; }
};

#endif
