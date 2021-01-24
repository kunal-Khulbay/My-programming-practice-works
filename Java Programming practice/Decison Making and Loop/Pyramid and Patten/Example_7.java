import java.util.Scanner;

/**
 * Example_7
 */
public class Example_7 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt(), k = 0, count = 0, count1 = 0;
        for (int i = 1; i <= num; i++) {
            for (int space = 1; space <= num - i; space++) {
                System.out.print("  ");
                count++;
            }

            while (k != 2 * i - 1) {
                if (count <= num - 1) {
                    System.out.print((i + k) + " ");
                    count++;
                } else {
                    count1++;
                    System.out.print((i + k - 2 * count1) + " ");
                }
                k++;
            }
            count1 = count = k = 0;
            System.out.println();
        }
        sc.close();
    }
}