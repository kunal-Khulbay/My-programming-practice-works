import java.util.Scanner;

/**
 * Reverse_a_Number
 */
public class Reverse_a_Number {
    public static void main(String[] args) {
        // #### Reverse the Number using while loop.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number:");
        // int num = sc.nextInt(), reversed = 0;
        // while (num != 0) {
        // int digit = num % 10;
        // reversed = reversed * 10 + digit;
        // num /= 10;
        // }
        // System.out.println("Reversed Number: " + reversed);
        // sc.close();
        // #### Reverse the Number using for loop.####
        Scanner sc = new Scanner(System.in);
        sc.close();
        System.out.println("Enter the Number:");
        int num = sc.nextInt();
        int reversed = 0;
        for (; num != 0; num /= 10) {
            int digit = num % 10;
            reversed = reversed * 10 + digit;
        }
        System.out.println("Reversed Number: " + reversed);
    }
}