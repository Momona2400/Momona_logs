// Program 4: Palindrome Check
import java.util.Scanner;

public class PalindromeCheck {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string/number: ");
        String input = sc.next();

        String reversed = new StringBuilder(input).reverse().toString();
        if (input.equals(reversed))
            System.out.println(input + " is a Palindrome");
        else
            System.out.println(input + " is Not a Palindrome");
    }
}