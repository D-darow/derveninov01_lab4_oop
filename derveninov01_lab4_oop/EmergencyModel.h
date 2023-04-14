#pragma once
#include <string>
// Абстрактный класс модели ЧС
class EmergencyModel
{
private:
	double EmergencyProbability; // Вероятность возникновения ЧС
	std::string EmergencyScale; // Масштаб ЧС
	int PossibleVictims; // Возможное количество пострадавших
	bool EmergencyHappened; // ЧС произошла или нет
public:
	void SetEmergencyProbability(double emergencyProbability);
	void SetEmergencyScale(std::string emergencyScale);
	void SetPossibleVictims(int possibleVictims);
	void SetEmergencyHappened(bool emergencyHappened);
	double GetEmergencyProbability();
	std::string GetEmergencyScale();
	int GetPossibleVictims();
	bool GetEmergencyHappened();
	// Метод запуска моделеривания ЧС
	virtual bool StartModeling() = 0;
	// Метод генерации советов по ликвидации
	virtual std::string GenerateEmergencyResponseTips() = 0;
	// Метод генерации возможных последствий
	virtual std::string GeneratePossibleEmergencyConsequences() = 0;
	virtual ~EmergencyModel() {};
};
