import java.util.Scanner;

/**
 * Binary_Search
 */
public class Binary_Search {

    int binarySearch(int array[], int element, int low, int high) {

        // Repeat until the pointers low to high meet each other
        while (low <= high) {

            // get index of mid element
            int mid = (low + high) / 2;
            // if element to be seasrched is the mid element
            if (array[mid] == element) {
                return mid;
            }
            // if element is less than the mid element
            // Search only the left side of the mid
            if (array[mid] < element) {
                low = mid + 1;
                ;
            }
            // If element is greater than the mid element
            // Search only the right side of the miid
            else {
                high = mid - 1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        // Craete the object of Binary_Search class
        Binary_Search obj = new Binary_Search();
        // Craete the sorted array
        int[] array = { 3, 4, 5, 6, 7, 8, 9 };
        int n = array.length;

        Scanner input = new Scanner(System.in);
        System.out.println("Enter element to be searched:");
        // Element to be searched
        int element = input.nextInt();
        input.close();
        // Call the bianrySearch method
        // pass arguments :array,element,index of first and last element
        int result = obj.binarySearch(array, element, 0, n - 1);
        if (result == -1) {
            System.out.println("Not found");
        } else {
            System.out.println("Element found at index " + result);
        }
    }
}