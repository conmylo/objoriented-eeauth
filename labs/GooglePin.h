#ifndef GOOGLEPIN_H
#define GOOGLEPIN_H

#include <string>

using namespace std;

class GooglePin{
protected:
    string label;
    float x;
    float y;

public:
    GooglePin();
    GooglePin(string s1, float num1, float num2);
    ~GooglePin();

    void setLabel(string value);
    void setX(float value);
    void setY(float value);

    string getLabel();
    float getX();
    float getY();

    void status();
    float estimateDistance(float x2 = 0, float y2 = 0);
    float estimateDistance(GooglePin p);
};

#endif // GOOGLEPIN_H
