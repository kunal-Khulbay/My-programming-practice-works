import java.util.Scanner;

/**
 * Display_prime_between_Two_Numbers
 */
public class Display_prime_between_Two_Numbers {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the lower limit");
        int low = sc.nextInt();
        System.out.println("Enter the upper limit");
        int high = sc.nextInt();
        boolean flag;
        sc.close();

        System.out.println("Prime Number are:- ");
        while (low < high) {
            flag = false;
            for (int i = 2; i <= low / 2; i++) {
                if (low % i == 0) {
                    flag = true;
                    break;
                }
            }
            if (!flag && low != 0 && low != 1) {
                System.out.println(low + " ");
            }
            low++;
        }
    }
}