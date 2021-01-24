import java.util.Scanner;

/**
 * Example_3
             Output:-
                        A
                        B B
                        C C C
                        D D D D
                        E E E E E
 */
public class Example_3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Starting Alphabet");
        char alphabet = sc.next().charAt(0);
        System.out.println("Enter the Last Alphabet");
        char last = sc.next().charAt(0);
        sc.close();
        System.out.println("Pyramid using Alphabet");
        for (int i = 1; i <= (last - 'A' + 1); i++) {
            for (int j = 1; j <= i; j++) {
                System.out.print(alphabet + " ");
            }
            ++alphabet;
            System.out.println();
        }
    }
}