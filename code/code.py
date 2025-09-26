#Пример бинарой кучи на Python:
import heapq
heap = []
heapq.heappush(heap, 3)
heapq.heappush(heap, 1)
heapq.heappush(heap, 2)
print(heapq.heappop(heap))  # Выведет 1 (минимум)


#Пример hash таблицы:
map = {"one": 1, "two": 2}
print(map["one"])  # Выведет 1
