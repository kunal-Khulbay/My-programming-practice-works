

import java.util.Scanner;

/**
 * Sum_of_two_primes_representation
 */
public class Sum_of_two_primes_representation {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int number = sc.nextInt();
        sc.close();
        boolean flag = false;
        for (int i = 2; i <= number / 2; i++) {
            if (checkPrime(i)) {
                if (checkPrime(number - i)) {
                    System.out.printf("%d = %d + %d\n", number, i, number - i);
                    flag = true;
                }
            }
        }
        if (!flag) {
            System.out.println(number + " cannot be expressed as the sum of two prime number");
        }
    }

    static boolean checkPrime(int num) {
        boolean is_Prime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_Prime = false;
                break;
            }
        }
        return is_Prime;
    }
}