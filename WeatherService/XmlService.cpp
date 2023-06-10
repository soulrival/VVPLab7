#include "XmlService.h"

Weather XmlService::getWeather(string s)
{
    xml_document doc;
    xml_parse_result result = doc.load_file(s.c_str());

    if (!result) throw exception("error");

    xml_node node = doc.child("current");
    string city = node.child("city").
        attribute("name").
        as_string(); //  �����

    double lon = node.child("city").child("coord").
        attribute("lon").
        as_double(); // 49.6601

    double lat = node.child("city").child("coord"). // 58.5966
        attribute("lat").
        as_double();

    double temperature = node.child("temperature").
        attribute("value").
        as_double(); // 5.69

    string weather = node.child("weather"). // �����
        attribute("value").
        as_string();

    double windSpeed = node.child("wind").child("speed"). // 4.27
        attribute("value").
        as_double();

    int clouds = node.child("clouds"). // 100
        attribute("value").
        as_int();

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}