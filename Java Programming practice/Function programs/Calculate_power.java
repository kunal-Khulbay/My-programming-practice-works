import java.util.Scanner;

/**
 * Calculate_power
 */
public class Calculate_power {

    public static void main(String[] args) {
        // #### Calculate Power using Recursion.####
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Base");
        int base = sc.nextInt();
        System.out.println("Enter the Power Raised");
        int powerRaised = sc.nextInt();
        long result = power(base, powerRaised);
        System.out.printf("%d Raised to the Power %d = %d\n", base, powerRaised, result);
        sc.close();
    }

    public static long power(int base, int powerRaised) {
        if (powerRaised != 0) {
            return (base * power(base, powerRaised - 1));
        } else {
            return 1;
        }
    }
}