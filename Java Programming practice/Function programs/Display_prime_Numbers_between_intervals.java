

import java.util.Scanner;

/**
 * Display_prime_Numbers_between_intervals
 */
public class Display_prime_Numbers_between_intervals {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the lower limit");
        int low = sc.nextInt();
        System.out.println("Enter the upper limit");
        int high = sc.nextInt();
        sc.close();
        System.out.println("Prime Number are:- ");
        while (low < high) {
            if (checkPrimeNumber(low)) {
                System.out.println(low + " ");
            }
            low++;
        }
    }

    public static boolean checkPrimeNumber(int num) {
        boolean flag = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                flag = false;
                break;
            }
        }
        return flag;
    }
}
