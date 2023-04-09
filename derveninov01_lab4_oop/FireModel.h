#pragma once
#include "EmergencyModel.h"
#include "Pyrometr.h"
#include "SensorCO.h"
class FireModel : public EmergencyModel
{
private:
	long int FireDuration; // Вероятная длительность пожара
	SensorCO* pSensorCO;
	Pyrometr* pPyrometr;
public:
	long int GetFireDuration();
	FireModel(SensorCO* sensorCO, Pyrometr* pyrometr);
	void StartModeling();
	~FireModel();
};

