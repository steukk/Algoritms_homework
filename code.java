//Пример бинарной кучи на java

import java.util.PriorityQueue;

public class Main {
    public static void main(String[] args) {
        PriorityQueue<Integer> heap = new PriorityQueue<>(); // min-куча
        heap.add(3);
        heap.add(1);
        heap.add(2);
        System.out.println(heap.poll());  // Выведет 1 (минимум)
    }
}



//пример hash таблицы на java

import java.util.HashMap;

public class Main {
    public static void main(String[] args) {
        HashMap<String, Integer> map = new HashMap<>();
        map.put("one", 1);
        map.put("two", 2);
        System.out.println(map.get("one"));  // Выведет 1
    }
}
