import java.util.Scanner;

/**
 * Largesrt_of_Three _numbers
 */
public class Largesrt_of_Three_numbers {

    public static void main(String[] args) {
        int n1, n2, n3;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter n1;");
        n1 = scanner.nextInt();
        System.out.println("Enter n2;");
        n2 = scanner.nextInt();
        System.out.println("Enter n3;");
        n3 = scanner.nextInt();

        if (n1 >= n2) {
            if (n1 >= n3) {
                System.out.println(n1 + "is the Largest Number");

            } else {
                System.out.println(n3 + " is the Largest Number");
            }
        } else {
            if (n2 >= n3) {
                System.out.println(n3 + " is the Largest Number");
            } else {
                System.out.println(n2 + "is the Largest Number");
            }
        }
        scanner.close();
    }
}
