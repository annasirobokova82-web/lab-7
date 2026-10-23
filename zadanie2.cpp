#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

// Функция проверки, является ли строка палиндромом
bool isPolindrome (const std::string& text){
    //Очистка: только буквы и цифры нижний регистр
    std::string cleaned;

        // Очищаем строку: оставляем только буквы и цифры, приводим к нижнему регистру
    for(char c : text) {
        if (std::isalnum(static_cast<unsigned char>(c))) {
            cleaned += std::tolower(static_cast<unsigned char>(c));
        }
    }

    // Создаем копию очищенной строки и переворачиваем её
    std::string reversed = cleaned;
    std::reverse(reversed.begin(), reversed.end());

    // Сравниваем очищенную строку с перевернутой
    return cleaned == reversed;
}

int main() {
   std::string tests[] = {
    "А роза упала на лапу Азора",
    "Madam, I'm Adam",
    "Hello World!",
    "123456789",
    "racecar"
   };

   for (const auto& text : tests) {
    std::cout << "'" << text << "' _" << (isPolindrome(text) ? "полиндром" : "не полиндром") << "\n";
   }

    return 0;    
}