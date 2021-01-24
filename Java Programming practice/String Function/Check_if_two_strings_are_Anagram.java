import java.util.Arrays;
import java.util.Scanner;

/**
 * Check_if_two_strings_are_Anagram
 */
public class Check_if_two_strings_are_Anagram {

    public static void main(String[] args) {
        // Program to check if two strings are anagrams.
        // String str1 = "java";
        // String str2 = "vaaj";
        // // check if length is same;
        // if (str1.length() == str2.length()) {
        // // Convert strings to char array.
        // char[] charArray1 = str1.toCharArray();
        // char[] charArray2 = str2.toCharArray();

        // // sort the char array.
        // Arrays.sort(charArray1);
        // Arrays.sort(charArray2);

        // // if sorted char arrays are same.
        // // then the strings is anagram.
        // boolean result = Arrays.equals(charArray1, charArray2);
        // if (result) {
        // System.out.println(str1 + " and " + str2 + " are Anagram.");
        // } else {
        // System.out.println(str1 + " and " + str2 + " are Anagram.");

        // }
        // }

        // Take string inputs from users and check if the strings are Anagram.

        // create an object of Scanner class.
        Scanner input = new Scanner(System.in);
        System.out.println("Enter first String: ");
        String str1 = input.nextLine();
        System.out.println("Enter second String: ");
        String str2 = input.nextLine();
        // check if length is same;
        if (str1.length() == str2.length()) {
            // Convert strings to char array.
            char[] charArray1 = str1.toCharArray();
            char[] charArray2 = str2.toCharArray();

            // sort the char array.
            Arrays.sort(charArray1);
            Arrays.sort(charArray2);

            // if sorted char arrays are same.
            // then the strings is anagram.
            boolean result = Arrays.equals(charArray1, charArray2);
            if (result) {
                System.out.println(str1 + " and " + str2 + " are Anagram.");
            } else {
                System.out.println(str1 + " and " + str2 + " are Anagram.");
            }
        }
        input.close();
    }
}