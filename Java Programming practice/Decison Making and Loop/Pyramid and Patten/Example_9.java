import java.util.Scanner;

/**
 * Example_9
 */
public class Example_9 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt(), coef = 1;
        for (int i = 0; i < num; i++) {
            for (int space = 1; space < num - i; space++) {
                System.out.print("  ");
            }
            for (int j = 0; j <= i; j++) {
                if (j == 0 || i == 0) {
                    coef = 1;
                } else {
                    coef = coef * (i - j + 1) / j;
                }
                System.out.printf("%4d", coef);

            }
            System.out.println();
        }
        sc.close();
    }
}