// addition of matrix

import java.util.Scanner;

public class addmatrix {
    public static void main(String[] args) {
        int r1, c1, r2, c2;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of rows in matrix 1: ");
        r1 = sc.nextInt();
        System.out.print("Enter number of columns in matrix 1: ");
        c1 = sc.nextInt();
        System.out.print("Enter number of rows in matrix 2: ");
        r2 = sc.nextInt();
        System.out.print("Enter number of columns in matrix 2: ");
        c2 = sc.nextInt();
        int[][] mat1 = new int[r1][c1];
        int[][] mat2 = new int[r2][c2];
        System.out.println("Enter matrix 1:");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                mat1[i][j] = sc.nextInt();
            }
        }
        System.out.println("Enter matrix 2:");
        for(int i = 0; i < r2; i++) {
            for(int j = 0; j < c2; j++) {
                mat2[i][j] = sc.nextInt();
            }
        }
        if(r1 != r2 || c1 != c2) {
            System.out.println("Wrong input.");
            sc.close();
            return;
        }
        int[][] mat3 = new int[r1][c1];
        System.out.println("Sum of the marices is: ");
        for(int i = 0; i < r1; i++) {
            for(int j = 0; j < c1; j++) {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
                System.out.print(mat3[i][j] + " ");
            }
            System.out.println();
        }
        sc.close();
    }
}