#pragma once
#include <string>
// ����������� ����� ������ ��
class EmergencyModel
{
private:
	double EmergencyProbability; // ����������� ������������� ��
	std::string EmergencyScale; // ������� ��
	int PossibleVictims; // ��������� ���������� ������������
public:
	void SetEmergencyProbability(double emergencyProbability);
	void SetEmergencyScale(std::string emergencyScale);
	void SetPossibleVictims(int possibleVictims);
	double GetEmergencyProbability();
	std::string GetEmergencyScale();
	int GetPossibleVictims();
	// ����� ������� ������������� ��
	virtual void StartModeling() = 0;
	virtual ~EmergencyModel() {};
};
