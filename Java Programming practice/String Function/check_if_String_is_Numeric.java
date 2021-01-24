/**
 * check_if_String_is_Numeric
 */
public class check_if_String_is_Numeric {

    public static void main(String[] args) {
        // Check if a string is numeric.
        // String string = "12345.15";
        // boolean numeric = true;
        // try {
        // Double num = Double.parseDouble(string);
        // System.out.println(num + " is");
        // } catch (NumberFormatException e) {
        // numeric = false;
        // }
        // if (numeric) {
        // System.out.println(string + " is a number");
        // } else {
        // System.out.println(string + " is not a number");
        // }

        // Check if a String s numeric or not using regular experssions (regex).
        String string = "-12345.15";
        boolean numeric = true;

        if (numeric) {
            System.out.println(string + " is a number");
        } else {
            System.out.println(string + " is not a number");
        }
    }
}