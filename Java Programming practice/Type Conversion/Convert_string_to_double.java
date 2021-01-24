/**
 * Convert_string_to_double
 */
public class Convert_string_to_double {

    public static void main(String[] args) {
        // #### Convert string to double using parseDpube() method.
        // String str1 = "23";
        // String str2 = "456.6";//The String literal should represent the number value
        // .Otherwise,the complier will throw an exception
        // // if(string st1 ="Alok") then the NumberFormatException will occur.

        // Double num1 = Double.parseDouble(str1);
        // Double num2 = Double.parseDouble(str2);

        // System.out.println(num1);
        // System.out.println(num2);
        // $$$$ Convert string to double uisng valueOf()method.

        // String str1 = "6413";
        // String str2 = "21312";

        // Double num1 = Double.valueOf(str1);
        // Double num2 = Double.valueOf(str2);

        // System.out.println(num1);
        // System.out.println(num2);
        // **** Convert string containing comma to double
        String str = "614,33";
        str = str.replace(",", ".");
        double value = Double.parseDouble(str);
        System.out.println(value);
    }
}