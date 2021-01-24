

import java.util.Scanner;

/**
 * Covert_Binary_to_Octal_and_vice_versa
 */
public class Covert_Binary_to_Octal_and_vice_versa {

    public static void main(String[] args) {
        // #### Convert Binary to Octal.
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the Binary Number");
        // long binary = sc.nextInt();
        // int octal = convertBinarytoOctal(binary);
        // System.out.printf("%d in Binary = %d in Octal.\n", binary, octal);
        // sc.close();
        // }

        // public static int convertBinarytoOctal(Long binaryNumber) {
        // int octalNumber = 0, decimalNumber = 0, i = 0;
        // while (binaryNumber != 0) {
        // decimalNumber += (binaryNumber % 10) * Math.pow(2, i);
        // ++i;
        // binaryNumber /= 10;
        // }
        // i = 1;
        // while (decimalNumber != 0) {
        // octalNumber += (decimalNumber % 8) * i;
        // decimalNumber /= 8;
        // i *= 10;
        // }
        // return octalNumber;
        // #### Convert Octal to Binary.
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the Ocatl Number");
        int octal = sc.nextInt();
        long binary = convertOctaltoBinary(octal);
        System.out.printf("%d in Octal = %d in Binary.\n", octal, binary);
        sc.close();
    }

    public static int convertOctaltoBinary(int octalNumber) {
        int binaryNumber = 0, decimalNumber = 0, i = 0;
        while (octalNumber != 0) {
            decimalNumber += (octalNumber % 10) * Math.pow(8, i);
            ++i;
            octalNumber /= 10;
        }
        i = 1;
        while (decimalNumber != 0) {
            binaryNumber += (decimalNumber % 2) * i;
            decimalNumber /= 2;
            i *= 10;
        }
        return binaryNumber;
    }
}