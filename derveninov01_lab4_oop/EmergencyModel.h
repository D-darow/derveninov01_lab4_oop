#pragma once
#include <string>
// Абстрактный класс модели ЧС
class EmergencyModel
{
private:
	double EmergencyProbability; // Вероятность возникновения ЧС
	std::string EmergencyScale; // Масштаб ЧС
	int PossibleVictims; // Возможное количество пострадавших
public:
	void SetEmergencyProbability(double emergencyProbability);
	void SetEmergencyScale(std::string emergencyScale);
	void SetPossibleVictims(int possibleVictims);
	double GetEmergencyProbability();
	std::string GetEmergencyScale();
	int GetPossibleVictims();
	// Метод запуска моделеривания ЧС
	virtual void StartModeling() = 0;
	virtual ~EmergencyModel() {};
};
