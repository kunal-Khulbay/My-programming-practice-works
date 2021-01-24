/**
 * Check_if_a_String_contains_a_substring
 */
public class Check_if_a_String_contains_a_substring {

    public static void main(String[] args) {
        // Create a string.
        // String txt = "This is Programiz.";
        // String str1 = "Prgramiz";
        // String str2 = "Programming";

        // // Check if name is present in txt.
        // // using contains.
        // boolean result = txt.contains(str1);
        // if (result) {
        // System.out.println(str1 + " is present in the string.");
        // } else {
        // System.out.println(str1 + " is not present in the string.");
        // }
        // result = txt.contains(str2);
        // if (result) {
        // System.out.println(str2 + " is present in thr string.");
        // } else {
        // System.out.println(str2 + " is not present in thr string.");
        // }

        // Check if a string contains a substring using indexof().
        // Create a string.
        String txt = "This is Programiz.";
        String str1 = "Prgramiz";
        String str2 = "Programming";

        // Check if name is present in txt.
        // using contains.
        int result = txt.indexOf(str1);
        if (result == -1) {
            System.out.println(str1 + " is not present in the string.");
        } else {
            System.out.println(str1 + " is present in the string.");
        }
        // Check if str2 is present in txt.
        // Using indexOf().
        result = txt.indexOf(str2);
        if (result == -1) {
            System.out.println(str2 + " is not present in thr string.");
        } else {
            System.out.println(str2 + " is present in thr string.");
        }
    }
}