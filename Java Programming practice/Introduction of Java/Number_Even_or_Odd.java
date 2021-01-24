import java.util.Scanner;

public class Number_Even_or_Odd {
    public static void main(String[] args) {
        Scanner reader = new Scanner(System.in);
        System.out.println("Enter the Number:");
        int num = reader.nextInt();
        if (num % 2 == 0) {
            System.out.println(num + " is Even");
        } else {
            System.out.println(num + " is Odd");
        }
        reader.close();
    }
}