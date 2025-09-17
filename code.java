import java.util.*;
public class Main {
    public static void main(String[] args) {
        List<Object> m = new Arraylist<>(); // список, содержащий разные типы данных
        m.add(1); // int-целое число
        m.add(3.21); // double-число с плавающей точкой
        m.add("Привет!"); // String-строка
        m.add(true); // boolean-логический тип
        m.add(Arrays.asList(7, 8, 9)); // List<Integer>-список, изменяемая последовательность
        m.add(new int[]{7, 8, 9}); // int[]-массив, аналог кортежа, но изменемый
        m.add(new HashSet<>(Arrays.asList))); // Set<Integer>-множество эдементов, неупорядоченное



        
import java.util.Stack;
public class Main {
    public static void main(String[] args) {
        // создаём список, используемый как стек
        Stack<Character> stack = new Stack<>(); //создание стек символов

        m.push('a');  // добавляем 'a' в стек
        m.push('b');  // добавляем 'b' в стек
        m.push('c');  // добавляем 'c' в стек

        System.out.println(m); // выводим стек
    }
}
