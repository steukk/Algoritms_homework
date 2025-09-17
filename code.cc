#include <iostream>
#include <vector>
#include <any>
#include <string>
#include <tuple>
#include <set>
#include <map>

int main() {
    std::vector<std::any> m; //список, содержащие разные типы данных
    m.push_back(1); // int-целое число
    m.push_back(3.21); // double-число с плавающей точкой
    m.push_back(std::string("Привет!")); // string- строка
    m.push_back(true); // bool-логический тип
    m.push_back(std::vector<int>{7, 8, 9}); // vector<int>-список, изменяемая последовательность
    m.push_back(std::make_tuple(7, 8, 9)); // tuple(int, int, int)-кортеж, неизменяемая последовательность
    m.push_back(std::set<int>{7, 8, 9}); // set<int>-множество элементов, неупорядоченное


    
int main() {
    std::vector<char> stack; // создаём пустой вектор, который будем использовать как стек

    stack.push_back('a');  // добавляем 'a' в стек
    stack.push_back('b');  // добавляем 'b' в стек
    stack.push_back('c');  // добавляем 'c' в стек

    // выводим элементы стека
    for (char c : stack) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}
