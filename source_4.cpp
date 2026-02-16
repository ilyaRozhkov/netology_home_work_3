#include <iostream>
#include <string>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string units[] = { "", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять" };

    std::string tens[] = { "", "десять", "двадцать", "тридцать", "сорок", "пятьдесят",
                         "шестьдесят", "семьдесят", "восемьдесят", "девяносто" };

    std::string unitsTens[] = { "десять", "одиннадцать", "двенадцать", "тринадцать", "четырнадцать",
                      "пятнадцать", "шестнадцать", "семнадцать", "восемнадцать", "девятнадцать" };

    std::string resultFirst;
    std::string resultSecond;

    int num1, num2, absNum1, absNum2;

    std::cout << "Введите целое число: ";
    std::cin >> num1;

    std::cout << "Введите целое число: ";
    std::cin >> num2;

    if(num1 < -99 || num1 > 99 || num2 < -99 || num2 > 99)

    absNum1 = abs(num1);
    absNum2 = abs(num2);


    if (absNum1 == 0) {
        resultFirst = "ноль";
    } else if (absNum1 < 10) {
        resultFirst = units[absNum1];
    }
    else if (absNum1 < 20) {
        resultFirst = unitsTens[absNum1 - 10];
    }
    else {
        resultFirst = tens[absNum1 / 10];
        if (absNum1 % 10 != 0) {
            resultFirst += " " + units[absNum1 % 10];
        }
    }
    resultFirst = num1 < 0 ? "минус " + resultFirst : resultFirst;

    if (absNum2 == 0) {
        resultSecond = "ноль";
    } else if (absNum2 < 10) {
        resultSecond = units[absNum2];
    }
    else if (absNum2 < 20) {
        resultSecond = unitsTens[absNum2 - 10];
    }
    else {
        resultSecond = tens[absNum2 / 10];
        if (absNum2 % 10 != 0) {
            resultSecond += " " + units[absNum2 % 10];
        }
    }

    resultSecond = num2 < 0 ? "минус " + resultSecond : resultSecond;

    if (num1 > num2) {
        std::cout << resultFirst << " больше чем " << resultSecond;
    }
    else {
        std::cout << resultSecond<< " больше чем " << resultFirst;
    }
    

}

