import java.util.*;
// import java.util.stream.Collectors;

/**
 * Convert_Array_to_Set
 */
public class Convert_Array_to_Set {

    public static void main(String[] args) {
        // Convert array to Set.
        // String[] array = { "a", "b", "c" };
        // Set<String> set = new HashSet<>(Arrays.asList(array));
        // System.out.println("Set: " + set);

        // Convert Array to Set using stream.
        // String[] array = { "a", "b", "c" };
        // Set<String> set = new
        // HashSet<>(Arrays.stream(array).collect(Collectors.toSet()));
        // System.out.println("Set: " + set);

        // Convert Set to Array.
        Set<String> set = new HashSet<>();
        set.add("a");
        set.add("b");
        set.add("c");

        String[] array = new String[set.size()];
        set.toArray(array);
        System.out.println("Array: " + Arrays.toString(array));
    }
}