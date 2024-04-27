#include <vector>
#include <string>

// ����� �������
class Person {
private:
    char* fullName; // ��� ��������
public:
    Person(const std::string& name); // �����������
    Person(const Person& other); // ����������� �����������
    ~Person(); // ����������
    void printName() const; // ������� ��� ������ ���
};

// ����� ��������
class Apartment {
private:
    std::vector<Person> residents; // ������ ��������
public:
    Apartment(); // �����������
    Apartment(const Apartment& other); // ����������� �����������
    ~Apartment(); // ����������
    void addPerson(const Person& person); // ���������� ������
    void printResidents() const; // ����� ���������� � �������
};

// ����� ���
class House {
private:
    std::vector<Apartment> apartments; // �������� � ����
public:
    House(); // �����������
    House(const House& other); // ����������� �����������
    ~House(); // ����������
    void addApartment(const Apartment& apartment); // ���������� ��������
    void printInfo() const; // ����� ���������� � ����
};
