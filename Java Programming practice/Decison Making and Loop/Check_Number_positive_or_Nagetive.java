import java.util.Scanner;

/**
 * Chexk_Number_positive_or_Nagetive
 */
public class Check_Number_positive_or_Nagetive {

    public static void main(String[] args) {
        double number;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        number = sc.nextDouble();
        if (number < 0.0) {
            System.out.println(number + " is a Negative Number.");
        } else if (number > 0.0) {
            System.out.println(number + " is a Positive Number.");
        } else {
            System.out.println(number + " is 0");
        }
        sc.close();
    }
}