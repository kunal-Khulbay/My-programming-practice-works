import java.util.Scanner;

/**
 * Even_odd_2
 */
public class Even_odd_2 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = scan.nextInt();
        String Even_odd = (num % 2 == 0 ? "Even" : "Odd");
        System.out.println(num + " is " + Even_odd);
        scan.close();
    }
}