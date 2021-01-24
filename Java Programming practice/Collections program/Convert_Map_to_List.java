import java.util.*;
import java.util.stream.Collectors;

/**
 * Convert_Map_to_List
 */
public class Convert_Map_to_List {

    public static void main(String[] args) {

        // Convert Map to List.
        // Map<Integer, String> map = new HashMap<>();
        // map.put(1, "a");
        // map.put(2, "b");
        // map.put(3, "c");
        // map.put(4, "d");
        // map.put(5, "e");

        // List<Integer> keyList = new ArrayList(map.keySet());
        // List<String> valueList = new ArrayList(map.values());
        // System.out.println("KeyList: " + keyList);
        // System.out.println("ValueList: " + valueList);
        // Map<Integer, String> map = new HashMap<>();

        // Convert map to list.
        Map<Integer, String> map = new HashMap<>();
        map.put(1, "a");
        map.put(2, "b");
        map.put(3, "c");
        map.put(4, "d");
        map.put(5, "e");

        List<Integer> keyList = map.keySet().stream().collect(Collectors.toList());
        List<String> valueList = map.values().stream().collect(Collectors.toList());
        System.out.println("KeyList: " + keyList);
        System.out.println("ValueList: " + valueList);
    }
}