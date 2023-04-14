#pragma once
#include "EmergencyModel.h"
#include "Pyrometr.h"
#include "SensorCO.h"
class FireModel : public EmergencyModel
{
private:
	long int FireDuration; // ��������� ������������ ������
	SensorCO* pSensorCO;
	Pyrometr* pPyrometr;
public:
	long int GetFireDuration();
	FireModel(SensorCO* sensorCO, Pyrometr* pyrometr);
	bool StartModeling();
	// ����� ��������� ������� �� ����������
	std::string GenerateEmergencyResponseTips();
	// ����� ��������� ��������� �����������
	std::string GeneratePossibleEmergencyConsequences();
	~FireModel();
};

