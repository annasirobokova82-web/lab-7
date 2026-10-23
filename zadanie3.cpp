#include <iostream>
#include <string>

// Функция шифрования текста шифром Цезаря
std::string caesarCipher(const std::string& text, int shift) {
    std::string result = text;
    for (char& c: result) {
        if (std::isalpha(static_cast<unsigned char>(c))) {

            // Определяем базу: 'A' для заглавных, 'a' для строчных
            char base = std::isupper(static_cast<unsigned char>(c)) ? 'A' : 'a';
            
            // Применяем сдвиг с учетом цикличности алфавита (26 букв)
            // (c - base + shift) % 26 вычисляет новую позицию в алфавите
            c = (c - base +shift % 26+26) % 26 + base;
        }
    }
    return result;
}

int main() {
    std::string original = "Hello Word!";
    std::string encrypted = caesarCipher(original, 3);
    std::string decrypted = caesarCipher(encrypted, -3);

    std::cout << "Оригинал: " << original << "\n";
    std::cout << "Зашифровано: " << encrypted << "\n";
    std::cout << "Расшифровано: " << decrypted << "\n";

    return 0;
}