import java.util.Scanner;

/**
 * Swap_number_2 Swap two numbers without uisng temporary variables
 * 
 */
public class Swap_number_2 {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter the First Number:");
        float first = scan.nextFloat();
        System.out.print("Enter the Second Number:");
        float second = scan.nextFloat();
        System.out.println("Before Swap");
        System.out.println("First Number is:" + first);
        System.out.println("Second Number is:" + second);
        first = first - second;
        second = first + second;
        first = second - first;
        System.out.println("After Swap");
        System.out.println("First Number is:" + first);
        System.out.println("Second Number is:" + second);
        scan.close();
    }

}