import java.util.Scanner;

/**
 * Power_of_a_Number
 */
public class Power_of_a_Number {

    public static void main(String[] args) {
        // #### Calculate power of a number using a while loop.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Base");
        // int base = sc.nextInt();
        // System.out.println("Enter the Exponent");
        // int exponent = sc.nextInt();
        // long result = 1;
        // while (exponent != 0) {
        // result *= base;
        // --exponent;
        // }
        // System.out.println("Amswer = " + result);
        // sc.close();
        // // #### Calculate power of a number using a for loop.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Base");
        // int base = sc.nextInt();
        // System.out.println("Enter the Exponent");
        // int exponent = sc.nextInt();
        // long result = 1;
        // for (; exponent != 0; exponent--) {
        // result *= base;
        // }
        // System.out.println("Amswer = " + result);
        // sc.close();
        // **** Calculate the power of the Number using pow()function.
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Base");
        int base = sc.nextInt();
        System.out.println("Enter the Exponent");
        int exponent = sc.nextInt();
        double result = Math.pow(base, exponent);
        System.out.println("Amswer = " + result);
        sc.close();

    }
}