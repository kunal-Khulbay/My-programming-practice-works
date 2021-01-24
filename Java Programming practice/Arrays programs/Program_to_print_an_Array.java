

import java.util.Arrays;

/**
 * Program to_print_an_Array
 */
public class Program_to_print_an_Array {

    public static void main(String[] args) {
        // Print an array using for loop.
        // int[] array = { 1, 2, 3, 4, 5 };
        // for (int element : array) {
        // System.out.println(element);
        // }

        // Print an Array using standard library Arrays.
        // int[] array = { 1, 2, 3, 4, 5 };
        // System.out.println(Arrays.toString(array));

        // Print a Multi-Dimensional Array.
        int[][] array = { { 1, 2 }, { 3, 4 }, { 5, 6, 7 } };
        System.out.println(Arrays.deepToString(array));
    }
}