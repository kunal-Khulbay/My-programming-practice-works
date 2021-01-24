/**
 * Convert_double_to_string
 */
public class Convert_double_to_string {

    public static void main(String[] args) {
        // #### Convert double to string using valueOf()method.####
        // double num1 = 36.33;
        // double num2 = 99.99;

        // String str1 = String.valueOf(num1);
        // String str2 = String.valueOf(num2);

        // System.out.println(str1);
        // System.out.println(str2);
        // $$$$ Convert double to string using toString() method.$$$$
        // double num1 = 4.76;
        // double num2 = 786.56;

        // String str1 = Double.toString(num1);
        // String str2 = Double.toString(num2);

        // System.out.println(str1);
        // System.out.println(str2);
        // **** Convert double to string using +Operator.****
        // double num1 = 347.6D;
        // double num2 = 86.56D;

        // String str1 = "" + num1;
        // String str2 = "" + num2;

        // System.out.println(str1);
        // System.out.println(str2);
        // &&&& Convert double to string using format().&&&&
        double num = 99.99;
        String str = String.format("%f", num);
        System.out.println(str);
    }
}