#include "Weather.h"

Weather::Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds)
{
    this->city = city;
    this->lon = lon;
    this->lat = lat;
    this->temperature = temperature;
    this->weather = weather;
    this->windSpeed = windSpeed;
    this->clouds = clouds;
}

ostream& operator<<(ostream& os, Weather& f)
{
    os << "City name: " << f.city << endl << "Coord(lon): " << f.lon << endl << "Coord(lat): " << f.lat << endl << "Main temp: " << f.temperature << endl << "Weather name: " << f.weather << endl << "Wind speed: " << f.windSpeed << endl << "All clouds: " << f.clouds;
    return os;
}