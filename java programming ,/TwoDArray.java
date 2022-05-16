import java.util.*;
public class TwoDArray {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
        int rows = sc.nextInt();
        int cols = sc.nextInt();
        
        int [][] arr = new int [rows][cols];
        //input 
        for(int i = 0; i<rows; i++){
            for(int j = 0 ; j<cols; j++){
             arr[i][j] = sc.nextInt();

            }
        }
         System.out.println(" found element");
         int x = sc.nextInt();
        //output
        for(int i = 0; i<rows; i++){
            for(int j = 0 ; j<cols; j++){
          if(arr[i][i] == x){
              System.out.println(" element found in :"+arr[i] [j]+" ");
          }

            }
            System.out.println();
        }
       

    }
}
