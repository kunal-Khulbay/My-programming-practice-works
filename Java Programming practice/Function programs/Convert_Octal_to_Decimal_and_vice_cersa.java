

import java.util.Scanner;

/**
 * Convert_Octal_to_Decimal_and_vice_cersa
 */
public class Convert_Octal_to_Decimal_and_vice_cersa {

    public static void main(String[] args) {
        // #### Convert Decimal t Octal.####
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Decimal Number");
        // int decimal = sc.nextInt();
        // int octal = convertDecimalToOctal(decimal);
        // System.out.printf("%d in Deciaml = %d in Octal.\n", decimal, octal);
        // sc.close();
        // }

        // public static int convertDecimalToOctal(int decimal) {
        // int octalNumber = 0, i = 1;
        // while (decimal != 0) {
        // octalNumber += (decimal % 8) * i;
        // decimal /= 8;
        // i *= 10;
        // }
        // return octalNumber;

        // #### Convert Octal t Octal.####
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the  Octal Number");
        int octal = sc.nextInt();
        int decimal = convertOctalToDecimal(octal);
        System.out.printf("%d in Octal = %d in Decimal.\n", octal, decimal);
        sc.close();
    }

    public static int convertOctalToDecimal(int octal) {
        int decimalNumber = 0, i = 0;
        while (octal != 0) {
            decimalNumber += (octal % 10) * Math.pow(8, i);
            i++;
            octal /= 10;
        }
        return decimalNumber;
    }
}