

import java.util.Scanner;

/**
 * Factorial_of_a_Number
 */
public class Factorial_of_a_Number {

    // #### Factorial of a Number Using Recursion.####
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt();
        long factorial = multiplyNumbers(num);
        System.out.println("Factorial of " + num + " = " + factorial);
        sc.close();
    }

    public static long multiplyNumbers(int num) {
        if (num > 1) {
            return num * multiplyNumbers(num - 1);
        } else {
            return 1;
        }
    }
}