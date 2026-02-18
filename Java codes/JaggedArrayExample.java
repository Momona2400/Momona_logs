// Program 2: Jagged Array Example
import java.util.Scanner;

public class JaggedArrayExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int rows = sc.nextInt();
        int[][] jagged = new int[rows][];

        for (int i = 0; i < rows; i++) {
            System.out.print("Enter number of elements in row " + (i+1) + ": ");
            int cols = sc.nextInt();
            jagged[i] = new int[cols];
            System.out.println("Enter elements:");
            for (int j = 0; j < cols; j++) {
                jagged[i][j] = sc.nextInt();
            }
        }

        System.out.println("Jagged Array:");
        for (int[] row : jagged) {
            for (int val : row) System.out.print(val + " ");
            System.out.println();
        }
    }
}