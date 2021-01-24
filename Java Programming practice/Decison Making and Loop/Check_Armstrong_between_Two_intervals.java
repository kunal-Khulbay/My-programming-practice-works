import java.util.Scanner;

/**
 * Check_Armstrong_between_Two_intervals
 */
public class Check_Armstrong_between_Two_intervals {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Lower Limit");
        int Lower = sc.nextInt();
        System.out.println("Enter the Upper Limit");
        int Upper = sc.nextInt();
        System.out.printf("Armstrong Numbers b/w %d and %d are:", Lower, Upper);
        for (int number = Lower + 1; number < Upper; number++) {
            int digits = 0, result = 0, originalNumber = number;
            while (originalNumber != 0) {
                originalNumber /= 10;
                digits++;
            }
            originalNumber = number;
            while (originalNumber != 0) {
                int reminder = originalNumber % 10;
                result += Math.pow(reminder, digits);
                originalNumber /= 10;
            }
            if (result == number) {
                System.out.println(number + " ");
            }
        }
        sc.close();
    }
}