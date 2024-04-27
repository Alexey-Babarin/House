#include "house.h"
#include <iostream>
#include <cstring> // ��� ������� strcpy_s

// ���������� ������� ������ �������
Person::Person(const std::string& name) {
    // ��������� ������ ��� ���
    fullName = new char[name.length() + 1];
    // ������������� strcpy_s ������ strcpy
    strcpy_s(fullName, name.length() + 1, name.c_str());
}

Person::Person(const Person& other) {
    // ����������� �����������
    fullName = new char[strlen(other.fullName) + 1];
    strcpy_s(fullName, strlen(other.fullName) + 1, other.fullName);
}

Person::~Person() {
    // ������������ ������
    delete[] fullName;
}

void Person::printName() const {
    // ����� ���
    std::cout << fullName << std::endl;
}

// ���������� ������� ������ ��������
Apartment::Apartment() {
    // �����������
}

Apartment::Apartment(const Apartment& other) : residents(other.residents) {
    // ����������� �����������
}

Apartment::~Apartment() {
    // ����������
}

void Apartment::addPerson(const Person& person) {
    // ���������� ������
    residents.push_back(person);
}

void Apartment::printResidents() const {
    // ����� ���������� � �������
    for (const auto& person : residents) {
        person.printName();
    }
}

// ���������� ������� ������ ���
House::House() {
    // �����������
}

House::House(const House& other) : apartments(other.apartments) {
    // ����������� �����������
}

House::~House() {
    // ����������
}

void House::addApartment(const Apartment& apartment) {
    // ���������� ��������
    apartments.push_back(apartment);
}

void House::printInfo() const {
    // ����� ���������� � ����
    for (const auto& apartment : apartments) {
        apartment.printResidents();
    }
}
