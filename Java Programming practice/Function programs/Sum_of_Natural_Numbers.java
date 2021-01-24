

import java.util.Scanner;

/**
 * Sum_of_Natural_Numbers
 */
public class Sum_of_Natural_Numbers {

    // #### Sum of Natural Numbers Using Recursion. ###
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int number = sc.nextInt();
        int sum = addNumbers(number);
        sc.close();
        System.out.println("Sum = " + sum);
    }

    public static int addNumbers(int num) {
        if (num != 0) {
            return num + addNumbers(num - 1);
        } else {
            return num;
        }
    }
}