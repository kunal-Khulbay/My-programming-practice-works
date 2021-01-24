import java.util.Scanner;

/**
 * Check_Palindrome
 */
public class Check_Palindrome {

    public static void main(String[] args) {
        // #### Check palindomine using while loop.####
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number");
        // int num = sc.nextInt(), original_number, reversed_number = 0, reminder;
        // original_number = num;
        // while (num != 0) {
        // reminder = num % 10;
        // reversed_number = reversed_number * 10 + reminder;
        // num /= 10;
        // }
        // if (original_number == reversed_number) {
        // System.out.println(original_number + " is a palindomine.");
        // } else {

        // System.out.println(original_number + " is a not a palindomine.");
        // }

        // #### Check palindomine using for loop.####

        System.out.println("Enter the Number");
        int num = sc.nextInt(), original_number, reversed_number = 0, reminder;
        original_number = num;
        sc.close();
        for (; num != 0; num /= 10) {
            reminder = num % 10;
            reversed_number = reversed_number * 10 + reminder;
        }
        if (original_number == reversed_number) {
            System.out.println(original_number + " is a palindomine.");
        } else {

            System.out.println(original_number + " is a not a palindomine.");
        }
    }
}