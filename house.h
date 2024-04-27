#include <vector>
#include <string>

// Класс Человек
class Person {
private:
    char* fullName; // ФИО человека
public:
    Person(const std::string& name); // Конструктор
    Person(const Person& other); // Конструктор копирования
    ~Person(); // Деструктор
    void printName() const; // Функция для вывода ФИО
};

// Класс Квартира
class Apartment {
private:
    std::vector<Person> residents; // Жители квартиры
public:
    Apartment(); // Конструктор
    Apartment(const Apartment& other); // Конструктор копирования
    ~Apartment(); // Деструктор
    void addPerson(const Person& person); // Добавление жителя
    void printResidents() const; // Вывод информации о жителях
};

// Класс Дом
class House {
private:
    std::vector<Apartment> apartments; // Квартиры в доме
public:
    House(); // Конструктор
    House(const House& other); // Конструктор копирования
    ~House(); // Деструктор
    void addApartment(const Apartment& apartment); // Добавление квартиры
    void printInfo() const; // Вывод информации о доме
};
