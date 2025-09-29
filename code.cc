//пример бинарной кучи на с++
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> heap = {3, 1, 2};
    make_heap(heap.begin(), heap.end()); // Создание кучи
    pop_heap(heap.begin(), heap.end());  // Извлечение максимума
    heap.pop_back();
    cout << heap.front() << endl;  // Теперь максимальным элементом будет 2
    return 0;
}

//пример биноминальной кучи
struct BinomialNode {
    int key;
    std::vector<BinomialNode*> children;
    BinomialNode(int k) : key(k) {}
};
BinomialNode* n = new BinomialNode(5);

//Фибоначчиева куча
struct FibNode {
    int key;
    std::vector<FibNode*> children;
    FibNode(int k) : key(k) {}
};
FibNode* node = new FibNode(7);


//Пример hash таблицы
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> map;
    map["one"] = 1;
    map["two"] = 2;
    cout << map["one"] << endl;  // Выведет 1
    return 0;
}
