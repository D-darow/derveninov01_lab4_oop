#pragma once
#include <string>
// ����������� ����� ������ ��
class EmergencyModel
{
private:
	double EmergencyProbability; // ����������� ������������� ��
	std::string EmergencyScale; // ������� ��
	int PossibleVictims; // ��������� ���������� ������������
	bool EmergencyHappened; // �� ��������� ��� ���
public:
	void SetEmergencyProbability(double emergencyProbability);
	void SetEmergencyScale(std::string emergencyScale);
	void SetPossibleVictims(int possibleVictims);
	void SetEmergencyHappened(bool emergencyHappened);
	double GetEmergencyProbability();
	std::string GetEmergencyScale();
	int GetPossibleVictims();
	bool GetEmergencyHappened();
	// ����� ������� ������������� ��
	virtual bool StartModeling() = 0;
	// ����� ��������� ������� �� ����������
	virtual std::string GenerateEmergencyResponseTips() = 0;
	// ����� ��������� ��������� �����������
	virtual std::string GeneratePossibleEmergencyConsequences() = 0;
	virtual ~EmergencyModel() {};
};
