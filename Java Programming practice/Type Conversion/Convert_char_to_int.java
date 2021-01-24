/**
 * Convert_char_to_int
 */
public class Convert_char_to_int {

    public static void main(String[] args) {
        // Convert char to int Program.
        // char a = '5';
        // char b = 'c';
        // int num1 = a;
        // int num2 = b;
        // System.out.println(num1);
        // System.out.println(num2);

        // ##### Convert char to int using getNumeriValue() method.#####//####
        // char a = '5';
        // char b = '9';
        // int num1 = Character.getNumericValue(a);
        // int num2 = Character.getNumericValue(b);
        // System.out.println(num1);
        // System.out.println(num2);

        // ****** Convert char to int using parseint()mathod. ******
        // char a = '5';
        // char b = '9';
        // int num1 = Integer.parseInt(String.valueOf(a));
        // int num2 = Integer.parseInt(String.valueOf(b));
        // System.out.println(num1);
        // System.out.println(num2);

        // $$$$$ Convert char to int by Subtractiong '0'. $$$$$$
        char a = '9';
        char b = '3';
        int num1 = a - '0';
        int num2 = b - '0';
        System.out.println(num1);
        System.out.println(num2);
    }
}