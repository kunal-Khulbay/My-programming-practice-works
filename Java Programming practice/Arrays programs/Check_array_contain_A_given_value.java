

import java.util.Arrays;

// import java.util.stream.IntStream;

/**
 * Check_array_contain_A_given_value
 */
public class Check_array_contain_A_given_value {

    public static void main(String[] args) {
        // Check if Int Array contains a given value.
        // int[] num = { 1, 2, 3, 4, 5 };
        // int toFind = 3;
        // boolean found = false;
        // for (int n : num) {
        // if (n == toFind) {
        // found = true;
        // break;
        // }
        // }
        // if (found) {
        // System.out.println(toFind + " is found.");
        // } else {
        // System.out.println(toFind + " is not found");
        // }

        // Check if an array contains given value using stream.

        // int[] num = { 1, 2, 3, 4, 5 };
        // int toFind = 7;
        // boolean found = IntStream.of(num).anyMatch(n -> n == toFind);
        // if (found) {
        // System.out.println(toFind + " is found.");
        // } else {
        // System.out.println(toFind + " is not found.");
        // }

        String[] strings = { "One", "Two", "Three", "Four", "Fve" };
        String toFind = "Four";
        boolean found = Arrays.stream(strings).anyMatch(t -> t.equals(toFind));
        if (found) {
            System.out.println(toFind + " is found");
        } else {
            System.out.println(toFind + " is not found");
        }
    }
}