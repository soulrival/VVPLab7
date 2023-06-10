#pragma once
#include <iostream>
#include <string>
#include "Weather.h"
using namespace std;
class Service
{
private:


public:
    virtual Weather getWeather(string s) = 0;
    virtual ~Service() {}
};