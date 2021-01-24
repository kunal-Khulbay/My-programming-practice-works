/**
 * String_is_valid
 */
public class String_is_valid {

    // Check if rseult string is valid shuffle og string first and second.
    static boolean shuffleCheck(String first, String second, String result) {

        // check length of result is same as.
        // sum of result of first and second.
        if (first.length() + second.length() != result.length()) {
            return false;
        }
        // Variables to track each character of 3 strings
        int i = 0, j = 0, k = 0;
        // Iterate to track each character of result
        while (k != result.length()) {
            // Check if the first cahracter of the result matches with first charater of
            // first string.
            if (i < first.length() && first.charAt(i) == result.charAt(k)) {
                i++;
            }
            // check if frst character of result matches the first character of second
            // string
            else if (j < second.length() && second.charAt(j) == result.charAt(k)) {
                j++;
            } else {
                return false;
            }
            // Access next character of result.
            k++;
        }
        // After accessing all characters of result.
        // if either first or second has some characters left
        if (i < first.length() || j < second.length()) {
            return false;
        } else {
            return true;
        }
    }

    public static void main(String[] args) {
        String first = "XY";
        String second = "12";
        String[] results = { "1XY2", "Y12X" };

        // Call the method to check if result string is
        // Shuffle of the string first and second.
        for (String resultString : results) {
            if (shuffleCheck(first, second, resultString) == true) {
                System.out.println(resultString + " is a valid shuffle of " + first + " and " + second);
            } else {
                System.out.println(resultString + " is not a valid shuffle of " + first + " and " + second);
            }
        }
    }
}