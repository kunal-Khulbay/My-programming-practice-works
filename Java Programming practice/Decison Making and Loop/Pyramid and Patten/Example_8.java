import java.util.Scanner;

/**
 * Example_8
 */
public class Example_8 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt();
        sc.close();
        for (int i = num; i >= 1; --i) {
            for (int space = 1; space <= num - i; space++) {
                System.out.print("  ");
            }
            for (int j = i; j <= 2 * i - 1; ++j) {
                System.out.print("* ");
            }
            for (int j = 0; j < i - 1; ++j) {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}