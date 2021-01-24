/**
 * Convert_int_to_string
 */
public class Convert_int_to_string {

    public static void main(String[] args) {
        // #### Convert int yo string using valueof()method.####
        // int num1 = 36;
        // int num2 = 99;

        // String str1 = String.valueOf(num1);
        // String str2 = String.valueOf(num2);

        // System.out.println(str1);
        // System.out.println(str2);
        // $$$$ Convert int to string by using toString() method.$$$$
        // int num1 = 476;
        // int num2 = 78656;

        // String str1 = Integer.toString(num1);
        // String str2 = Integer.toString(num2);

        // System.out.println(str1);
        // System.out.println(str2);
        // &&&& Convert int to string using +Operartor &&&&
        // int num1 = 3476;
        // int num2 = 8656;

        // String str1 = "" + num1;
        // String str2 = "" + num2;

        // System.out.println(str1);
        // System.out.println(str2);
        // **** Convert int to string using format() ****
        int num=9999;
        String str=String.format("%d", num);
        System.out.println(str);
    }
}