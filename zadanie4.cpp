#include <iostream>
#include <regex>
#include <string>

// Проверка корректности email
bool validateEmail(const std::string& email) {
    std::regex pattern(R"(^[\w.+-]+@[\w-]+\.[\w.-]+$)");
    return std::regex_match(email, pattern);
}

// Проверка российского телефона
bool validatePhone(const std::string& phone) {
    std::regex pattern(R"(^\+?7[\s-]?\(?\d{3}\)?[\s-]?\d{3}[\s-]?\d{2}[\s-]?\d{2}$)");
    return std::regex_match(phone, pattern);
}

// Проверка URL
bool validateUrl(const std::string& url) {
    std::regex pattern(R"(^https?://[\w.-]+\.[a-z]{2,}(/[\w./-]*)?$)");
    return std::regex_match(url, pattern);
}

// Вывод true/false вместо 1/0
int main() {
    std::cout << std::boolalpha;

    std::cout << "Email valid: " << validateEmail("ivan@example.com") << "\n";
    std::cout << "Email invalid: " << validateEmail("invalid@") << "\n";
    std::cout << "Phone valid: " << validatePhone("+7 (999) 123-45-67") << "\n";
    std::cout << "URL valid: " << validateUrl("https://example.com") << "\n";

    return 0;
}