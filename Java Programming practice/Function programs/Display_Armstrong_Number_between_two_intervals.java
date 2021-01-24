

import java.util.Scanner;

/**
 * Display_Armstrong_Number_between_two_intervals
 */
public class Display_Armstrong_Number_between_two_intervals {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Lower Limit");
        int Lower = sc.nextInt();
        System.out.println("Enter the Upper Limit");
        int Upper = sc.nextInt();
        sc.close();
        System.out.printf("Armstrong Numbers b/w %d and %d are:", Lower, Upper);
        for (int number = Lower + 1; number < Upper; number++) {

            if (checkArmstrong(number)) {
                System.out.println(number + " ");
            }
        }
    }

    public static boolean checkArmstrong(int num) {
        int digits = 0, result = 0, originalNumber = num;
        while (originalNumber != 0) {
            originalNumber /= 10;
            ++digits;
        }
        originalNumber = num;

        while (originalNumber != 0) {
            int remainder = originalNumber % 10;
            result += Math.pow(remainder, digits);
            originalNumber /= 10;
        }
        if (result == num) {

            return true;
        }
        return false;
    }
}
