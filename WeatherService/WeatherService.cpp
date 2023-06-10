#include "XmlService.h"
#include "JsonService.h"

int main()
{
    setlocale(LC_ALL, "RU");
    cout << "Json-файл:" << endl;
    JsonService js;
    Weather w1 = js.getWeather("weather.json");
    cout << w1 << endl << endl;
    cout << "Xml-файл:" << endl;
    XmlService xs;
    Weather w2 = xs.getWeather("weather.xml");
    cout << w2;
}