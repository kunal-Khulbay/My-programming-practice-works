import java.util.ArrayList;
import java.util.Arrays;

/**
 * Convert_ArrayList_to_an_array
 */
public class Convert_ArrayList_to_an_array {

    public static void main(String[] args) {

        // Convert the ArrayListinto Array.
        // ArrayList<String> languages = new ArrayList<>();
        // // Add elements in the arrayList.
        // languages.add("Java");
        // languages.add("JavaScript");
        // languages.add("Python");
        // System.out.println("Arraylist: " + languages);
        // // Create a new arrayof String type.
        // String[] arr = new String[languages.size()];
        // // onvert ArrayList into the string array.
        // languages.toArray(arr);
        // System.out.print("Array: ");
        // for (String item : arr) {
        // System.out.print(item + ", ");
        // }
        // System.out.println();

        // Convert Array to ArrayList.

        // cretae an array.
        String[] array = { "Java", "Pyhon", "c" };
        System.out.println("Array: " + Arrays.toString(array));

        // Convert Array to array ArrayList
        ArrayList<String> languages = new ArrayList<>(Arrays.asList(array));
        System.out.println("ArrayList: " + languages);
    }
}