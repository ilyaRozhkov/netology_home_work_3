#include <iostream>
#include <string>
#include <windows.h>

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string male;
    std::string zodiacSing;
    int age;

    std::cout << "Введите пол: \n";
    std::cin >> male;

    std::cout << "Введите знак зодиака: \n";
    std::cin >> zodiacSing;

    std::cout << "Введите возраст: \n";
    std::cin >> age;

    if (male == "м"
        && (zodiacSing=="рак" || zodiacSing == "скорпион" || zodiacSing == "рыбы") 
        && age < 40) {

        std::cout << "Сегодня очень плодотворный день. Можно добиться того, что прежде казалось почти невозможным.";
        return 0;

    }
    if (male == "ж"
        && (zodiacSing == "телец" || zodiacSing == "дева" || zodiacSing == "козерог")
        && (age >= 15 && age <= 30)) {

        std::cout << "Сегодняшний вечер подходит для общения с друзьями, проведения домашних праздников и импровизированных вечеринок.\n";
        std::cout << "Будет не только весело, но и интересно : найдётся дело, которое увлечёт всех.";
        return 0;

    }
    std::cout << "Гороскоп для вас находится в разработке. Приходите чуточку позже ;)";

}

