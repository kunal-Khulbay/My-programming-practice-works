import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

/**
 * Get_all_Permutations_of_a_string
 */
class Get_all_Permutations_of_a_string {

    public static Set<String> getPermutations(String str) {
        // Crete a set to avoid duplicate pemutation.
        Set<String> permutations = new HashSet<String>();
        // check if string is null.
        if (str == null) {
            return null;
        } else if (str.length() == 0) {
            // terminating condition for recursion.
            permutations.add("");
            return permutations;
        }
        // get the first character.
        char first = str.charAt(0);

        // get the remaining substring.
        String sub = str.substring(1);

        // make recursive call to getPermutations().
        Set<String> words = getPermutations(sub);

        // Access each element from words.
        for (String strNew : words) {
            for (int i = 0; i <= strNew.length(); i++) {
                // insert the pemutations to the set.
                permutations.add(strNew.substring(0, i) + first + strNew.substring(i));
            }
        }
        return permutations;
    }

    public static void main(String[] args) {
        // Create an object of Scanner class.
        Scanner input = new Scanner(System.in);
        // Take input from users
        System.out.print("Enter the string: ");
        String data = input.nextLine();
        System.out.println("Permutations of " + data + ": \n" + getPermutations(data));
        input.close();
    }
}