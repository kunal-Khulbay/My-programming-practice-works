import java.util.Random;

/**
 * Create_random_strings
 */
public class Create_random_strings {

    public static void main(String[] args) {
        // Create a string of all character.
        // String alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

        // // create random string builder.
        // StringBuilder sb = new StringBuilder();

        // // create an object of Random class.
        // Random random = new Random();

        // // Specify length of random string.
        // int length = 7;
        // for (int i = 0; i < length; i++) {
        // // generate random index number.
        // int index = random.nextInt(alphabet.length());

        // // get cgaracter specified by index.
        // // form the string.
        // char randomChar = alphabet.charAt(index);
        // // append the character to string builder.
        // sb.append(randomChar);
        // }
        // String randomString = sb.toString();
        // System.out.println("Random String is: " + randomString);

        String upperAlphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String lowerAlphabet = "abcdefghijklmnopqrstuvwxyz";
        String numbers = "0123456789";

        // contiunue all strings.
        String alphaNumeric = upperAlphabet + lowerAlphabet + numbers;
        // create random string builder.
        StringBuilder sb = new StringBuilder();

        // create an object of Random class.
        Random random = new Random();

        // Specify length of random string.
        int length = 10;
        for (int i = 0; i < length; i++) {
            // generate random index number.
            int index = random.nextInt(alphaNumeric.length());

            // get cgaracter specified by index.
            // form the string.
            char randomChar = alphaNumeric.charAt(index);
            // append the character to string builder.
            sb.append(randomChar);
        }
        String randomString = sb.toString();
        System.out.println("Random String is: " + randomString);
    }
}
