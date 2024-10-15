#ifndef ATHLETE_H
#define ATHLETE_H

class Athlete {
private:
    int height;
    int weight;
    char gender;

public:
    Athlete(int h = 0, int w = 0, char g = 'U') : height(h), weight(w), gender(g) {}

    int getHeight() const { return height; }
    int getWeight() const { return weight; }
    char getGender() const { return gender; }

    void setHeight(int h) { height = h; }
    void setWeight(int w) { weight = w; }
    void setGender(char g) { gender = g; }
};

#endif
