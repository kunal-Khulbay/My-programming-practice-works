import java.util.Scanner;

/**
 * LCM_of_two_numbers
 */
public class LCM_of_two_numbers {

    public static void main(String[] args) {
        // #### Find LCM of two numbers using while loop and if statement.####
        // Scanner sc = new Scanner(System.in);
        // System.out.print("Enter the First Number:");
        // int n1 = sc.nextInt();
        // System.out.print("Enter the Second Number:");
        // int n2 = sc.nextInt(), lcm;
        // lcm = (n1 > n2) ? n1 : n2;
        // while (true) {
        // if (lcm % n1 == 0 && lcm % n2 == 0) {
        // System.out.printf("The LCM of %d nadd %d is %d\n", n1, n2, lcm);
        // break;
        // }
        // lcm++;
        // }
        // sc.close();
        // **** Calculate LCM using GCD.****
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the First Number:");
        int num1 = sc.nextInt(), gcd = 1;
        System.out.print("Enter the Second Number:");
        int num2 = sc.nextInt();
        for (int i = 1; i <= num1 && i <= num2; i++) {
            if (num1 % i == 0 && num2 % i == 0) {
                gcd = i;
            }
        }
        int lcm = (num1 * num2) / gcd;
        System.out.printf("The LCM of %d and %d is %d\n", num1, num2, lcm);
        sc.close();
    }
}