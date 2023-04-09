#include <iostream>
#include <locale.h>
#include "FireForecastingStationProxy.h"

int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "Rus");
    // Создаем объекты классов "Датчик CO", "Пирометр"
    SensorCO* pSensorCO = new SensorCO(43.534, 25.123);
    Pyrometr* pPyrometr = new Pyrometr(24.657, 101.121);
    // Создаем объект класса "Модель пожара"
    FireModel* pFM = new FireModel(pSensorCO, pPyrometr);

    // Создаем прокси-объект класса FireForecastingStation
    FireForecastingStationProxy* pProxy = new FireForecastingStationProxy(pFM);

    // Начинаем моделирование пожара
    pProxy->StartModeling();
    
    // Получаем данные из модели
    double probability = pFM->GetEmergencyProbability();
    std::string scale = pFM->GetEmergencyScale();
    int victims = pFM->GetPossibleVictims();
    int duration = pFM->GetFireDuration();

    // Вывод информации о построенной модели ЧС
    std::cout << "Вероятность возникновения пожара: " << probability << " %" << std::endl;
    std::cout << "Вероятный масштаб пожара: " << scale << std::endl;
    std::cout << "Возможное число жертв: " << victims << " человек" << std::endl;
    std::cout << "Вероятная продолжительность пожара (без применения мер по ликвидации): " << duration << " дней" << std::endl;
    std::cout << std::endl;

    std::string tips = pProxy->GenerateEmergencyResponseTips();
    std::string consequences = pProxy->GeneratePossibleEmergencyConsequences();

    std::cout << "Рекомендации по ликвидации пожара:" << std::endl;
    std::cout << tips << std::endl << std::endl;
    std::cout << "Возможные последствия: " << consequences << std::endl;

    // Удаляем объекты
    delete pProxy;
    delete pFM;
    delete pSensorCO;
    delete pPyrometr;

    return 0;
}