import java.util.Scanner;

/**
 * Check_Factors_of_a_Number
 */
public class Check_Factors_of_a_Number {

    public static void main(String[] args) {
        // #### Foctors of a Positive Number.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number");
        // int num = sc.nextInt();
        // System.out.println("Factors of " + num + " are: ");
        // for (int i = 1; i <= num; i++) {
        // if (num % i == 0) {
        // System.out.print(i + " ");
        // }
        // }
        // System.out.println();
        // sc.close();
        // #### Foctors of a Negitive Number.####
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Negitive Number");
        int num = sc.nextInt();
        System.out.println("Factors of " + num + " are: ");
        for (int i = num; i <= Math.abs(num); i++) {
            if (i == 0) {
                continue;
            } else {
                if (num % i == 0) {
                    System.out.print(i + " ");
                }
            }
        }
        System.out.println();
        sc.close();
    }
}