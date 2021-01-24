import java.util.Scanner;

/**
 * Largest
 */
public class Largest {

    public static void main(String[] args) {
        int n1, n2, n3;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter n1;");
        n1 = scanner.nextInt();
        System.out.println("Enter n2;");
        n2 = scanner.nextInt();
        System.out.println("Enter n3;");
        n3 = scanner.nextInt();

        if (n1 >= n2 && n1 >= n3) {
            System.out.println(n1 + "is the Largest Number");
        } else if (n2 >= n1 && n2 >= n3) {
            System.out.println(n2 + "is the Largest Number");
        } else {
            System.out.println(n3 + " is the Largest Number");
        }
        scanner.close();
    }
}