import java.util.Arrays;
import java.util.Scanner;

/**
 * Bubble_Sort
 */
public class Bubble_Sort {

    Scanner input = new Scanner(System.in);

    void bubbleSort(int array[]) {
        int size = array.length;
        System.out.println("Choose Sorting order:");
        System.out.println("1 For Ascending\n2 For Descending");
        int sortOrder = input.nextInt();

        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (sortOrder == 1) {
                    if (array[j] > array[j + 1]) {
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                } else {
                    if (array[j] < array[j + 1]) {
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] data = { -2, 45, 0, 11, -9 };
        Bubble_Sort bs = new Bubble_Sort();
        bs.bubbleSort(data);
        System.out.println("Sorted Array:");
        System.out.println(Arrays.toString(data));
    }
}