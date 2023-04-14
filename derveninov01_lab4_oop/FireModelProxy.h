#pragma once
#include "FireModel.h"
class FireModelProxy
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
	// ������� � ������� ������ EmergencyModel
	void SetEmergencyProbability(double emergencyProbability);
	void SetEmergencyScale(std::string emergencyScale);
	void SetPossibleVictims(int possibleVictims);
	void SetEmergencyHappened(bool emergencyHappened);
	double GetEmergencyProbability();
	std::string GetEmergencyScale();
	int GetPossibleVictims();
	bool GetEmergencyHappened();
	~FireModelProxy();
};