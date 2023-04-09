#pragma once
#include <array>
// Абстрактный класс датчика
class Sensor
{
private:
	std::array<double, 2> Coordinates; // Координаты датчика
public:
	std::array<double, 2> GetCoordinates();
	void SetCoordinates(double latitude, double longitude);
	virtual void CollectReadings() = 0;
	virtual ~Sensor() {};
};
