#include <iostream>
#include <string>
#include <sstream>

// Функция для подсчета слов в строке
int countWords(const std::string& text) {
    std::istringstream iss(text);   // Создаем поток для чтения из строки
    std::string word;
    int count = 0;

    // Читаем слова, разделенные пробелами, пока поток не закончится
    while (iss >> word) {
        ++count;
    }
    return count;
}

int main () {
    std::string text;
    std::cout << "Введите текст: ";
    std::getline(std::cin, text);  // Считываем всю строку, включая пробелы

    std::cout << "Количество слов: " << countWords(text) << "\n";
    return 0;
}
