import java.util.Scanner;

/**
 * Example_10
 */
public class Example_10 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt(), num1 = 1;
        sc.close();
        for (int i = 1; i <= num; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(num1 + " ");
                num1++;
            }
            System.out.println();
        }
    }
}