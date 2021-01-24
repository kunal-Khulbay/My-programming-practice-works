import java.util.Scanner;

/**
 * Check_Armstrong_or_not
 */
public class Check_Armstrong_or_not {

    public static void main(String[] args) {
        // #### Check Armstrong for 3-digit Number ####.
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Three Digit Number");
        // int num = sc.nextInt(), original_num, reminder, result = 0;
        // original_num = num;
        // while (original_num != 0) {
        // reminder = original_num % 10;
        // result += Math.pow(reminder, 3);
        // original_num /= 10;
        // }
        // if (result == num) {
        // System.out.println(num + " is a Armstrong Number");
        // } else {

        // System.out.println(num + " is not a Armstrong Number");
        // }
        // sc.close();
        // #### Check Armstrong for n-digit Number ####.
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt(), original_num, reminder, result = 0, n = 0;
        sc.close();
        original_num = num;
        for (; original_num != 0; original_num /= 10, n++)
            ;
        original_num = num;
        for (; original_num != 0; original_num /= 10) {
            reminder = original_num % 10;
            result += Math.pow(reminder, n);
        }

        if (result == num) {
            System.out.println(num + " is a Armstrong Number");
        } else {

            System.out.println(num + " is not a Armstrong Number");
        }
    }
}