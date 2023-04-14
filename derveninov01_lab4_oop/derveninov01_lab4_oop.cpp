#include <iostream>
#include <locale.h>
#include "FireModel.h"
#include "FireModelProxy.h"
#include "FloodModel.h"

int main()
{
    srand(time(nullptr));
    setlocale(LC_ALL, "Rus");
    // Создаем объекты датчиков
    SensorCO* pSensorCO = new SensorCO(43.534, 25.123, 500.0);
    Pyrometr* pPyrometr = new Pyrometr(24.657, 101.121, 50);
    WaterLevelSensor* pWaterLevelSensor = new WaterLevelSensor(12.342, 56.132, 10);
    // Создаем объект модел
    FloodModel* pFloodModel = new FloodModel(pWaterLevelSensor);

    // Создаем прокси-объект класса FireModelProxy
    FireModelProxy* pProxy = new FireModelProxy(pSensorCO, pPyrometr);

    // Начинаем моделирование
    if (pProxy->StartModeling())
        std::cout << "Пожар произошел!" << std::endl;
    
    // Получаем данные из модели пожара
    double probability = pProxy->GetEmergencyProbability();
    std::string scale = pProxy->GetEmergencyScale();
    int victims = pProxy->GetPossibleVictims();
    int duration = pProxy->GetFireDuration();

    // Вывод информации о построенной модели пожара
    std::cout << "Вероятность возникновения пожара: " << probability << " %" << std::endl;
    std::cout << "Вероятный масштаб пожара: " << scale << std::endl;
    std::cout << "Возможное число жертв: " << victims << " человек" << std::endl;
    std::cout << "Вероятная продолжительность пожара (без применения мер по ликвидации): " << duration << " дней" << std::endl;
    std::cout << std::endl;

    std::string tips = pProxy->GenerateEmergencyResponseTips();
    std::string consequences = pProxy->GeneratePossibleEmergencyConsequences();

    std::cout << "Рекомендации по ликвидации пожара:" << std::endl;
    std::cout << tips << std::endl << std::endl;
    std::cout << "Возможные последствия: " << consequences << std::endl << std::endl;

    if (pFloodModel->StartModeling())
        std::cout << "Наводнение произошло!" << std::endl;
    // Получаем данные из модели наводнения
    probability = pFloodModel->GetEmergencyProbability();
    scale = pFloodModel->GetEmergencyScale();
    victims = pFloodModel->GetPossibleVictims();

    // Вывод информации о построенной модели наводнения
    std::cout << "Вероятность возникновения наводнения: " << probability << " %" << std::endl;
    std::cout << "Вероятный масштаб наводнения: " << scale << std::endl;
    std::cout << "Возможное число жертв: " << victims << " человек" << std::endl;
    std::cout << std::endl;

    tips = pFloodModel->GenerateEmergencyResponseTips();
    consequences = pFloodModel->GeneratePossibleEmergencyConsequences();

    std::cout << "Рекомендации по ликвидации наводнения:" << std::endl;
    std::cout << tips << std::endl << std::endl;
    std::cout << "Возможные последствия: " << consequences << std::endl;
    // Удаляем объекты
    delete pFloodModel;
    delete pProxy;
    delete pSensorCO;
    delete pPyrometr;

    return 0;
}