

import java.util.Arrays;

/**
 * Concatenate_two_Arrays
 */
public class Concatenate_two_Arrays {

    public static void main(String[] args) {
        // Concatenate Two Arrays using arraycopy.
        // int[] array1 = { 1, 2, 3 };
        // int[] array2 = { 4, 5, 6 };

        // int aLen = array1.length;
        // int bLen = array2.length;
        // int[] result = new int[aLen + bLen];
        // System.arraycopy(array1, 0, result, 0, aLen);
        // System.arraycopy(array2, 0, result, aLen, bLen);
        // System.out.println(Arrays.toString(result));

        // Concatenate Two Arrays without using arraycopy.
        int[] array1 = { 1, 2, 3 };
        int[] array2 = { 4, 5, 6 };
        int length = array1.length + array2.length;
        int[] result = new int[length];
        int pos = 0;
        for (int element : array1) {
            result[pos] = element;
            pos++;
        }
        for (int element : array2) {
            result[pos] = element;
            pos++;
        }
        System.out.println(Arrays.toString(result));
    }
}