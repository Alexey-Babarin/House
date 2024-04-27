#include "house.h"
#include <iostream>
#include <locale>

using namespace std;

int main() {
    // Установка русской локали
    setlocale(LC_ALL, "Russian");

    // Создание объектов класса Человек
    Person person1("Иванов Иван Иванович");
    Person person2("Петров Петр Петрович");

    // Создание объекта класса Квартира и добавление в неё людей
    Apartment apartment;
    apartment.addPerson(person1);
    apartment.addPerson(person2);

    // Создание объекта класса Дом и добавление в него квартиры
    House house;
    house.addApartment(apartment);

    // Вывод информации о доме
    house.printInfo();

    return 0;
}
