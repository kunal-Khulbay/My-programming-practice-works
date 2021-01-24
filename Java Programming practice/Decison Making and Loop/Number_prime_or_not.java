import java.util.Scanner;

/**
 * Number_prime_or_not
 */
public class Number_prime_or_not {

    public static void main(String[] args) {
        // #### Check wheather prime or not using for loop ####.
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number");
        // int num = sc.nextInt();
        // Boolean flag = false;
        // for (int i = 2; i <= num / 2; i++) {
        // if (num % i == 0) {
        // flag = true;
        // break;
        // }
        // }
        // if (!flag) {
        // System.out.println(num + " is a Prime Number");
        // } else {
        // System.out.println(num + " is not a Prime Number");

        // }
        // sc.close();
        // #### Check wheather prime or not using while loop ####.
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt(), i = 2;
        Boolean flag = false;
        while (i <= num / 2) {
            if (num % i == 0) {
                flag = true;
                break;
            }
            i++;
        }
        if (!flag) {
            System.out.println(num + " is a Prime Number");
        } else {
            System.out.println(num + " is not a Prime Number");

        }
        sc.close();

    }
}
