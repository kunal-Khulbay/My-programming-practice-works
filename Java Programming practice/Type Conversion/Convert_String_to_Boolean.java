/**
 * Convert_String_to_Boolean
 */
public class Convert_String_to_Boolean {

    public static void main(String[] args) {
        // #### Convert string to Boolean using parseBoolean()####
        // String str1 = "true";
        // String str2 = "false";

        // boolean b1 = Boolean.parseBoolean(str1);
        // boolean b2 = Boolean.parseBoolean(str2);

        // System.out.println(b1);
        // System.out.println(b2);

        // $$$$ Convert string to Boolean using valueOf()$$$$
        String str1 = "true";
        String str2 = "false";

        boolean b1 = Boolean.valueOf(str1);
        boolean b2 = Boolean.valueOf(str2);

        System.out.println(b1);
        System.out.println(b2);
    }
}