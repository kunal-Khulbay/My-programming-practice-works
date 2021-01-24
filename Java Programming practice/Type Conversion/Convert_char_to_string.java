import java.util.Arrays;

/**
 * Convert_char_to_string
 */
public class Convert_char_to_string {

    public static void main(String[] args) {
        // #### Convert char to string.####
        // char ch = 'c';
        // String st = Character.toString(ch);
        // System.out.println("The String is :" + st);

        // $$$$ Convert char array to string.$$$$$
        // char[] ch = { 'a', 'l', 'o', 'k' };
        // String st = String.valueOf(ch);
        // String st2 = new String(ch);
        // System.out.println(st);
        // System.out.println(st2);

        // #### Convert string to char array.####
        String st = "This is great";
        char[] chars = st.toCharArray();
        System.out.println(Arrays.toString(chars));
    }
}