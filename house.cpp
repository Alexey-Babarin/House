#include "house.h"
#include <iostream>
#include <cstring> // Для функции strcpy_s

// Реализация методов класса Человек
Person::Person(const std::string& name) {
    // Выделение памяти под ФИО
    fullName = new char[name.length() + 1];
    // Использование strcpy_s вместо strcpy
    strcpy_s(fullName, name.length() + 1, name.c_str());
}

Person::Person(const Person& other) {
    // Конструктор копирования
    fullName = new char[strlen(other.fullName) + 1];
    strcpy_s(fullName, strlen(other.fullName) + 1, other.fullName);
}

Person::~Person() {
    // Освобождение памяти
    delete[] fullName;
}

void Person::printName() const {
    // Вывод ФИО
    std::cout << fullName << std::endl;
}

// Реализация методов класса Квартира
Apartment::Apartment() {
    // Конструктор
}

Apartment::Apartment(const Apartment& other) : residents(other.residents) {
    // Конструктор копирования
}

Apartment::~Apartment() {
    // Деструктор
}

void Apartment::addPerson(const Person& person) {
    // Добавление жителя
    residents.push_back(person);
}

void Apartment::printResidents() const {
    // Вывод информации о жителях
    for (const auto& person : residents) {
        person.printName();
    }
}

// Реализация методов класса Дом
House::House() {
    // Конструктор
}

House::House(const House& other) : apartments(other.apartments) {
    // Конструктор копирования
}

House::~House() {
    // Деструктор
}

void House::addApartment(const Apartment& apartment) {
    // Добавление квартиры
    apartments.push_back(apartment);
}

void House::printInfo() const {
    // Вывод информации о доме
    for (const auto& apartment : apartments) {
        apartment.printResidents();
    }
}
