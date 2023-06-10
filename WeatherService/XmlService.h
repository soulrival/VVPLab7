#include "Service.h"
#include "pugixml.hpp"
#include <vector>
using namespace pugi;

class XmlService :public Service
{
public:
    virtual Weather getWeather(string s) override;
    virtual ~XmlService() {};
};