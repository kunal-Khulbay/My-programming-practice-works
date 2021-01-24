/**
 * Iterate_through_each_characters_of_the_string
 */
public class Iterate_through_each_characters_of_the_string {

    public static void main(String[] args) {
        // create a string.
        // String name = "Programiz";
        // System.out.println("Characters in " + name + " are:");

        // // loop through each element.
        // for (int i = 0; i < name.length(); i++) {
        // // Access each character.
        // char a = name.charAt(i);
        // System.out.print(a + ", ");
        // }
        // System.out.println();

        // Loop through each character of the string using for-each loop.
        // create a string.
        String name = "Programiz";
        System.out.println("Characters in the String \"" + name + "\":");

        // loop through each element using for-each loop.
        for (char c : name.toCharArray()) {
            // Access each character.
            System.out.print(c + ", ");
        }
        System.out.println();
    }
}