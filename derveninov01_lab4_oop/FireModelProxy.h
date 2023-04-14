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
	// ����� ��������� ������� �� ����������
	std::string GenerateEmergencyResponseTips();
	// ����� ��������� ��������� �����������
	std::string GeneratePossibleEmergencyConsequences();
	~FireModelProxy();
};