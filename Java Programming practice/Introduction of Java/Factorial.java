import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a Number:");
        int num = scanner.nextInt();
        int Factorial = fact(num);
        System.out.println("Factorial of entered Number is:" + Factorial);
        scanner.close();
    }

    static int fact(int n) {
        int output;
        if (n == 1) {
            return 1;
        }
        output = fact(n - 1) * n;
        return output;
    }
}