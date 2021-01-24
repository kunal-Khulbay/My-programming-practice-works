import java.util.Scanner;

/**
 * Example_6
 */
public class Example_6 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt(), k = 0;
        System.out.println("Full Pyramid:");
        for (int i = 1; i <= num; i++) {
            k = 0;
            for (int space = 1; space <= num - i; space++) {
                System.out.print("  ");
            }
            while (k != 2 * i - 1) {
                System.out.print("* ");
                ++k;
            }
            System.out.println();
        }
        sc.close();
    }
}