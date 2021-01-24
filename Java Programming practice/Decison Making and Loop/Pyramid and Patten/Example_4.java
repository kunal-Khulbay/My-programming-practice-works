import java.util.Scanner;

/**
 * Example_4
             Output:-
                        * * * * *
                        * * * *
                        * * *
                        * *
                        *
 */
public class Example_4 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Number");
        int num = sc.nextInt();
        System.out.println("Inverted Pyramid:");
        for (int i = num; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}