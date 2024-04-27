#include "house.h"
#include <iostream>
#include <locale>

using namespace std;

int main() {
    // ��������� ������� ������
    setlocale(LC_ALL, "Russian");

    // �������� �������� ������ �������
    Person person1("������ ���� ��������");
    Person person2("������ ���� ��������");

    // �������� ������� ������ �������� � ���������� � �� �����
    Apartment apartment;
    apartment.addPerson(person1);
    apartment.addPerson(person2);

    // �������� ������� ������ ��� � ���������� � ���� ��������
    House house;
    house.addApartment(apartment);

    // ����� ���������� � ����
    house.printInfo();

    return 0;
}
