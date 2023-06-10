#include "JsonService.h"

Weather JsonService::getWeather(string s)
{
    ifstream fin(s);
    if (!fin) throw exception("error");

    json j;
    j = json::parse(fin);

    string city = j["name"].get<string>(); //  Киров

    double lon = j["coord"]["lon"].get<double>(); // 49.6601
    double lat = j["coord"]["lat"].get<double>(); // 58.5966  
    double temperature = j["main"]["temp"].get<double>(); // 5.69

    string weather = j["weather"].get<vector<json>>()[0]["main"].get<string>(); // дождь

    double windSpeed = j["wind"]["speed"].get<double>(); // 4.27
    int clouds = j["clouds"]["all"].get<int>(); // 100

    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}