#include <iostream>;
#include <clocale>;

int main()
{
    setlocale(LC_ALL, "Russian"); // Для корректного отображения кириллицы  
    int num_1;
    int num_2;
    int num_3;

    std::cout << "Введите первое число: \n";
    std::cin >> num_1;
    std::cout << "Введите второе число: \n";
    std::cin >> num_2;
    std::cout << "Введите третье число: \n";
    std::cin >> num_3;

    int firstNum = (num_1 > num_2) ? 
        ((num_1 > num_3) ? num_1 : num_3) : ((num_2 > num_3) ?
            num_2 : num_3);

    int thirdNum = (num_1 < num_2) ?
        ((num_1 < num_3) ? num_1 : num_3) : ((num_2 < num_3) ?
            num_2 : num_3);

    int secondNum = num_1 + num_2 + num_3 - firstNum - thirdNum;

        std::cout << firstNum << " " << secondNum << " " << thirdNum;
}
