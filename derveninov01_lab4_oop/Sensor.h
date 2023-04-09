#pragma once
#include <array>
// ����������� ����� �������
class Sensor
{
private:
	std::array<double, 2> Coordinates; // ���������� �������
public:
	std::array<double, 2> GetCoordinates();
	void SetCoordinates(double latitude, double longitude);
	virtual void CollectReadings() = 0;
	virtual ~Sensor() {};
};
