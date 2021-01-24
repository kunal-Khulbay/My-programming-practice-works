import java.util.Scanner;

/**
 * Fibonacci_series
 */
public class Fibonacci_series {

    public static void main(String[] args) {
        // #### Using for loop.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number till you want to print Fibonacci
        // Series");
        // int n = sc.nextInt(), t1 = 0, t2 = 1;
        // System.out.println("First " + n + " terms: ");
        // for (int i = 1; i < n + 1; i++) {
        // System.out.print(t1 + " + ");
        // int sum = t1 + t2;
        // t1 = t2;
        // t2 = sum;
        // }
        // sc.close();
        // #### Using for loop.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Number till you want to print Fibonacci
        // Series");
        // int n = sc.nextInt(), t1 = 0, t2 = 1, i = 1;
        // System.out.println("First " + n + " terms: ");
        // while (i < n + 1) {
        // System.out.print(t1 + " + ");
        // int sum = t1 + t2;
        // t1 = t2;
        // t2 = sum;
        // i++;
        // }
        // sc.close();
        // **** Using Instead of terms.****
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number till you want to print Fibonacci Series");
        int n = sc.nextInt(), t1 = 0, t2 = 1;
        System.out.println("Upto " + n + " terms: ");
        while (t1 <= n) {
            System.out.print(t1 + " + ");
            int sum = t1 + t2;
            t1 = t2;
            t2 = sum;
        }
        sc.close();
    }
}