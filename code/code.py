#Пример бинарой кучи на Python:
import heapq
heap = []
heapq.heappush(heap, 3)
heapq.heappush(heap, 1)
heapq.heappush(heap, 2)
print(heapq.heappop(heap))  # Выведет 1 (минимум)

#Биномиальная куча:
class BinomialNode:
    def __init__(self, key):
        self.key = key
        self.children = []
node = BinomialNode(5)

#Фибоначчиева куча
class FibNode:
    def __init__(self, key):
        self.key = key
        self.child = []
node = FibNode(7)


#Пример hash таблицы:
map = {"one": 1, "two": 2}
print(map["one"])  # Выведет 1
