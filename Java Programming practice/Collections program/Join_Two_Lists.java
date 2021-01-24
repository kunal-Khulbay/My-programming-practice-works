
import java.util.ArrayList;
import java.util.List;
import org.apache.commons.collections4.ListUtils;
// // import java.util.stream.Collectors;
// import java.util.stream.Stream;

/**
 * Join_Two_Lists
 */
public class Join_Two_Lists {

    public static void main(String[] args) {
        // Join two lists using addAll().
        // List<String> list1 = new ArrayList<String>();
        // list1.add("a");

        // List<String> list2 = new ArrayList<String>();
        // list2.add("b");

        // List<String> joined = new ArrayList<String>();
        // joined.addAll(list1);
        // joined.addAll(list2);

        // System.out.println("list1: " + list1);
        // System.out.println("list2: " + list2);
        // System.out.println("joined: " + joined);

        // Join two lists using union().

        List<String> list1 = new ArrayList<String>();
        list1.add("a");

        List<String> list2 = new ArrayList<String>();

        list2.add("b");

        List<String> joined = ListUtils.union(list1, list2);
        System.out.println("list1: " + list1);
        System.out.println("list2: " + list2);
        System.out.println("joined: " + joined);

        // join two Listsusing Stream.
        // List<String> list1 = new ArrayList<String>();
        // list1.add("a");

        // List<String> list2 = new ArrayList<String>();
        // list2.add("b");

        // List<String> joined = Stream.concat(list1.stream(),
        // list2.stream()).collect(Collectors.toList());

        // System.out.println("list1: " + list1);
        // System.out.println("list2: " + list2);
        // System.out.println("joined: " + joined);

    }
}