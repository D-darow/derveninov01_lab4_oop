#pragma once
#include "FireModel.h"
class FireModelProxy : public EmergencyModel
{
private:
	FireModel* pFireModel;
public:
	FireModelProxy(SensorCO* sensorCO, Pyrometr* pyrometr);
	long int GetFireDuration();
	bool StartModeling();
	// Метод генерации советов по ликвидации
	std::string GenerateEmergencyResponseTips();
	// Метод генерации возможных последствий
	std::string GeneratePossibleEmergencyConsequences();
	~FireModelProxy();
};