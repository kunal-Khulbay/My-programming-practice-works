import java.util.Scanner;

/**
 * GCD_of_teo_Numbers
 */
public class GCD_of_teo_Numbers {

    public static void main(String[] args) {
        // #### Find GCD of two Numbers using for loop and if statement.####
        // Scanner sc = new Scanner(System.in);
        // System.out.print("Enter the First Number:");
        // int num1 = sc.nextInt(), gcd = 1;
        // System.out.print("Enter the Second Number:");
        // int num2 = sc.nextInt();
        // for (int i = 1; i <= num1 && i <= num2; i++) {
        // if (num1 % i == 0 && num2 % i == 0) {
        // gcd = i;
        // }
        // }
        // System.out.printf("GCD of %d and %d is %d\n", num1, num2, gcd);
        // sc.close();
        // #### Find GCD of two Numbers using while loop and if-else statement.####
        // Scanner sc = new Scanner(System.in);
        // System.out.print("Enter the First Number:");
        // int num1 = sc.nextInt();
        // System.out.print("Enter the Second Number:");
        // int num2 = sc.nextInt();
        // while (num1 != num2) {
        // if (num1 > num2) {
        // num1 -= num2;
        // } else {
        // num2 -= num1;
        // }
        // }
        // System.out.printf("GCD of %d and %d is %d\n", num1, num2, num1);
        // sc.close();
        // #### Find GCD for psitive and negative numbers.####
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the First Number:");
        int num1 = sc.nextInt();
        System.out.print("Enter the Second Number:");
        int num2 = sc.nextInt();
        num1=(num1>0)?num1:-num1;
        num2=(num2>0)?num2:-num2;

        while (num1 != num2) {
            if (num1 > num2) {
                num1 -= num2;
            } else {
                num2 -= num1;
            }
        }
        System.out.printf("GCD of %d and %d is %d\n", num1, num2, num1);
        sc.close();
    }
}