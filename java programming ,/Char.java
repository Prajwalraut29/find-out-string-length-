import java.util.*;
public class Char {
public static void main(String[] args) {
    StringBuilder sb = new StringBuilder("prajwal");
    System.out.println(sb);
    sb.setCharAt(0, 'g');
    System.out.println(sb);
    sb.insert(0,'v');
    System.out.println(sb);
    sb.delete(0, 3);
    System.out.println(sb);
}
}
