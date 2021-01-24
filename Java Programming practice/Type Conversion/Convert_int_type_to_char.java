/**
 * Convert_int_type_to_char
 */
public class Convert_int_type_to_char {

    public static void main(String[] args) {
        // int num1 = 80;
        // int num2 = 81;
        // char a = (char) num1;
        // char b = (char) num2;
        // System.out.println(a);
        // System.out.println(b);

        // ##### Convert int to char using forDigit() function.######
        // int num1 = 1;
        // int num2 = 13;
        // char a = Character.forDigit(num1, 10);
        // char b = Character.forDigit(num2, 16);
        // System.out.println(a);
        // System.out.println(b);
        // $$$$ Convert int to char by adding '0'.$$$$
        int num1 = 1;
        int num2 = 9;
        char a = (char) (num1 + '0');
        char b = (char) (num2 + '0');
        System.out.println(a);
        System.out.println(b);
    }
}