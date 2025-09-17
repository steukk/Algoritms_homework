#include <iostream>
#include <vector>


int main() {
    std::vector<char> m; // создаём пустой вектор, который будем использовать как стек

    m.push_back('a');  // добавляем 'a' в стек
    m.push_back('b');  // добавляем 'b' в стек
    m.push_back('c');  // добавляем 'c' в стек

    // выводим элементы стека
    for (char c : m) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}
