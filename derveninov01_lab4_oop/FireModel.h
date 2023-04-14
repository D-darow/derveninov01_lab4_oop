#pragma once
#include "EmergencyModel.h"
#include "Pyrometr.h"
#include "SensorCO.h"
class FireModel : public EmergencyModel
{
private:
	long int FireDuration; // ¬еро€тна€ длительность пожара
	SensorCO* pSensorCO;
	Pyrometr* pPyrometr;
public:
	long int GetFireDuration();
	FireModel(SensorCO* sensorCO, Pyrometr* pyrometr);
	bool StartModeling();
	// ћетод генерации советов по ликвидации
	std::string GenerateEmergencyResponseTips();
	// ћетод генерации возможных последствий
	std::string GeneratePossibleEmergencyConsequences();
	~FireModel();
};

