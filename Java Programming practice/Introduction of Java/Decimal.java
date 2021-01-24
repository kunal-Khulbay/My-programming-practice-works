import java.util.Scanner;

/**
 * Decimal
 */
public class Decimal {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the Decimal Number:");
        double num1 = scan.nextDouble();
        System.out.format("%.4f", num1);
        System.out.println();
        scan.close();
    }
}