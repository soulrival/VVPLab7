#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Weather.h"
#include "Service.h"
#include "../include/nlohmann/json.hpp"
using nlohmann::json;
using namespace std;
class JsonService :
    public Service
{
private:


public:
    virtual Weather getWeather(string s) override;
    virtual ~JsonService() {};

};