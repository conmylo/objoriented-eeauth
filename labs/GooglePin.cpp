#include <iostream>
#include <string>
#include <cmath>
#include "GooglePin.h"

using namespace std;

GooglePin::GooglePin(){
    label = "";
    x = 0;
    y = 0;
}

GooglePin::GooglePin(string s1, float num1, float num2){
    label = s1;
    x = num1;
    y = num2;
}

GooglePin::~GooglePin(){
    cout << "GooglePin object with label " << label <<
            " is destroyed" << endl;
}

void GooglePin::setLabel(string value){
    label = value;
}

void GooglePin::setX(float value){
    x = value;
}

void GooglePin::setY(float value){
    y = value;
}

string GooglePin::getLabel(){
    return label;
}

float GooglePin::getX(){
    return x;
}

float GooglePin::getY(){
    return y;
}

void GooglePin::status(){
    cout << "GooglePin object" << endl;
    cout << "Label: " << label << endl;
    cout << "Longitude: " << x << endl;
    cout << "Latitude: " << y << endl;
}

float GooglePin::estimateDistance(float x2, float y2){
    float result = (x - x2) * (x - x2) + (y - y2) * (y - y2);
    return sqrt(result);
}

float GooglePin::estimateDistance(GooglePin p){
    float result = (x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY());
    return sqrt(result);
}
