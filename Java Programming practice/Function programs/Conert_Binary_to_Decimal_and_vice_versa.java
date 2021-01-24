

import java.util.Scanner;

/**
 * Conert_Binary_to_Decimal_and_vice_versa
 */
public class Conert_Binary_to_Decimal_and_vice_versa {

    public static void main(String[] args) {
        // // #### Convert Binary to Decimal Number.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Binary Number");
        // long num = sc.nextInt();
        // int decimal = convertBinaryToDecimal(num);
        // System.out.printf("%d in Binary=%d in Decimal.\n", num, decimal);
        // sc.close();
        // }

        // public static int convertBinaryToDecimal(long num) {
        // int decimalNumber = 0, i = 0;
        // long reminder;
        // while (num != 0) {
        // reminder = num % 10;
        // num /= 10;
        // decimalNumber += reminder * Math.pow(2, i);
        // i++;
        // }
        // return decimalNumber;

        // #### Convert Decimal to Decimal Number.####
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Decimal Number");
        int num = sc.nextInt();
        long binary = convertDecimalToBinary(num);
        System.out.printf("%d in Decimal=%d in Binary.\n", num, binary);
        sc.close();
    }

    public static long convertDecimalToBinary(int num) {
        long binaryNumber = 0;
        int reminder, i = 1, step = 1;
        while (num != 0) {
            reminder = num % 2;
            System.out.printf("Step %d: %d/2, Reminder = %d,Quotient = %d.\n", step++, num, reminder, num / 2);
            num /= 2;
            binaryNumber += reminder * i;
            i *= 10;
            ;
        }
        return binaryNumber;
    }
}
