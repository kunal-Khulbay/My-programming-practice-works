

import java.util.Scanner;

/**
 * GCD_of_two_Numbers
 */
public class GCD_of_two_Numbers {

    public static void main(String[] args) {
        // #### GCD of two Numbers using Recursion
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the First Number");
        int n1 = sc.nextInt();
        System.out.println("Enter the Second Number");
        int n2 = sc.nextInt();
        int hcf = hcf(n1, n2);
        System.out.printf("G.C.D of %d and %d is %d.\n ", n1, n2, hcf);
        sc.close();

    }

    public static int hcf(int n1, int n2) {
        if (n2 != 0) {
            return hcf(n2, n1 % n2);
        } else {
            return n1;
        }
    }
}