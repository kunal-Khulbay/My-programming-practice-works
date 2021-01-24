import java.util.Arrays;

/**
 * Implement_Quick_Sort
 */
public class Implement_Quick_Sort {

    // divide the array on the basis of pivot
    int partition(int array[], int low, int high) {
        // select last element as pivot
        int pivot = array[high];
        // initialize the second pointer
        int i = (low - 1);
        // put the eements smaller than pivot on the left and
        // greater than pivot on thr right of pivot.
        for (int j = low; j < high; j++) {
            // Compare all elements with pivot.
            // Swap the element greater than pivot
            // Wit element smaller than pivot
            // to sort in decending order.
            // if(array[j]>=pivot)
            if (array[j] <= pivot) {
                // Increase the second pointer if
                // smaller element is swapped with greater
                i++;
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        // Put pivot in position
        // so that element on left are smaller
        // element on right are greater than pivot
        int temp = array[i + 1];
        array[i + 1] = array[high];
        array[high] = temp;
        return (i + 1);
    }

    void quickSort(int array[], int low, int high) {
        if (low < high) {
            // Select pivot position an put all the element smaller
            // then pivot on the left and greater than pivot o right
            int pi = partition(array, low, high);
            // Sort the elements on the left of the pivot.
            quickSort(array, low, pi - 1);
            // Sort the elements on the right of pivot.
            quickSort(array, pi + 1, high);
        }
    }

    public static void main(String[] args) {
        int[] data = { 8, 7, 2, 1, 0, 9, 6 };
        int size = data.length;
        // Create an object of the Implement_Quick_Sort() class.
        Implement_Quick_Sort qs = new Implement_Quick_Sort();
        // pass the arraywith the first andlast index
        System.out.println("Unsorted Array: ");
        System.out.println(Arrays.toString(data));
        qs.quickSort(data, 0, size - 1);
        System.out.println("Sorted Array: ");
        System.out.println(Arrays.toString(data));
    }
}