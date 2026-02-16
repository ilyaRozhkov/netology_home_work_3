#include <iostream>;
#include <clocale>;

int main()
{
    setlocale(LC_ALL, "Russian"); // Для корректного отображения кириллицы  
    bool a = true;
    bool b = false;

    std::cout << "Оператор ||\n";
    std::cout << std::boolalpha;
    std::cout << a << " " << a << " " << (a || a) << "\n";
    std::cout << b << " " << a << " " << (b || a) << "\n";
    std::cout << a << " " << b << " " << (a || b) << "\n";
    std::cout << b << " " << b << " " << (b || b) << "\n";

    std::cout << "Оператор &&\n";
    std::cout << std::boolalpha;
    std::cout << a << " " << a << " " << (a && a) << "\n";
    std::cout << b << " " << a << " " << (b && a) << "\n";
    std::cout << a << " " << b << " " << (a && b) << "\n";
    std::cout << b << " " << b << " " << (b && b) << "\n";
}
