import java.util.Scanner;

/**
 * Multiplication_table
 */
public class Multiplication_table {

    public static void main(String[] args) {
        // #### Using for loop.
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number whose table you want to print");
        // int num = sc.nextInt();
        // for (int i = 1; i < 11; i++) {
        // System.out.printf("%d * %d = %d\n", num, i, num * i);
        // }
        // sc.close();
        // #### Using while loop.
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number whose table you want to print");
        int num = sc.nextInt();
        int i = 1;
        while (i < 11) {
            System.out.printf("%d * %d = %d\n", num, i, num * i);
            i++;
        }
        sc.close();
    }
}