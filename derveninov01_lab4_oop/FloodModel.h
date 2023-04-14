#pragma once
#include "EmergencyModel.h"
#include "WaterLevelSensor.h"
class FloodModel : public EmergencyModel
{
private:
	WaterLevelSensor* pWaterLevelSensor;
public:
	FloodModel(WaterLevelSensor* waterLevelSensor);
	bool StartModeling();
	// ����� ��������� ������� �� ����������
	std::string GenerateEmergencyResponseTips();
	// ����� ��������� ��������� �����������
	std::string GeneratePossibleEmergencyConsequences();
	~FloodModel() {};
};
