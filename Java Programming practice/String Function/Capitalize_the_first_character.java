/**
 * Capitalize_the_first_character
 */
public class Capitalize_the_first_character {

    public static void main(String[] args) {
        // Create a string
        // String name = "progmiz";

        // // Create two substrings from name.
        // // first substring contains first letter of name.
        // // second substring contains remaining letters.
        // String firstLetter = name.substring(0, 1);
        // String remainingLetters = name.substring(1, name.length());

        // // change the first letter to upperCase.
        // firstLetter = firstLetter.toUpperCase();
        // // Join the two sunstrings.
        // name = firstLetter + remainingLetters;
        // System.out.println("Name: " + name);

        // Convert every word of the string to uppercase.
        // create a string.
        String message = "everyone loves java";

        // stores each characters to a char array.
        char[] charArray = message.toCharArray();
        boolean foundSpace = true;

        for (int i = 0; i < charArray.length; i++) {
            // if the array element is a letter.
            if (Character.isLetter(charArray[i])) {
                // check spaceis present before the letter.
                if (foundSpace) {
                    // change the letter into uppercase.
                    charArray[i] = Character.toUpperCase(charArray[i]);
                    foundSpace = false;
                }
            } else {
                // if the new character is not character.
                foundSpace = false;
            }
        }
        // convert the char array to the string.
        message = String.valueOf(charArray);
        System.out.println("Message: " + message);
    }
}