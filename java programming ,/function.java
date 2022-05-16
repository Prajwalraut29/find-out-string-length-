import java.util.*;
 public class function{
     public static int subtractionOfTwo(int a, int b){
         int sub = a-b;
         return sub;
     }
     public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int a = sc.nextInt();
         int b = sc.nextInt();
         int sub = subtractionOfTwo(a,b);
         System.out.println(" subtraction of two number is :"+ sub);

     }
 }