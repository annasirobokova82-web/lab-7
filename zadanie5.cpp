#include <iostream>
#include <vector>
#include <tuple>
#include <iomanip>
#include <string>
#include <numeric>

int main() {
    std::vector<std::tuple<std::string, int, double>> students = {
        {"Иван", 25, 4.5},
        {"Мария", 22, 4.85},
        {"Пётр", 30, 4.2},
        {"Анна", 20, 4.95},
    };

    //Заголовок
    std::cout << std::left << std::setw(10) << "Имя" << std::right << std::setw(8) << "Возраст" << std::setw(8) << "Балл" << "\n";
    std::cout << std::string(28, '-') << "\n";

    //Данные
    std::cout << std::fixed << std::setprecision(2);
    double totalGpa = 0;

    for (const auto& [name, age, gpa] : students) {
        std::cout << std::left << std::setw(10) << name << std::right << std::setw(8) << age << std::setw(8) << gpa << "\n";
        totalGpa += gpa;
    }

    //Итог
    std::cout << std::string(28, '-') << "\n";
    double avGpa = totalGpa / students.size();
    std::cout << std::left << std::setw(10) << "Средний балл" << std::right << std::setw(8) << "" << std::setw(8) << avGpa << "\n";
    return 0;
}