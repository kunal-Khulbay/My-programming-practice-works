/**
 * Boolean_variable_to_string
 */
public class Boolean_variable_to_string {

    public static void main(String[] args) {
        // $$$$ Convert boolean to string using valueof() function.$$$$
        // boolean booleanValue1 = true;
        // boolean booleanValue2 = false;

        // String stringValue1 = String.valueOf(booleanValue1);
        // String stringValue2 = String.valueOf(booleanValue2);

        // System.out.println(stringValue1);
        // System.out.println(stringValue2);

        // #### Convert boolean to string using toString() function.####
        boolean booleanValue1 = true;
        boolean booleanValue2 = false;

        String stringValue1 = Boolean.toString(booleanValue1);
        String stringValue2 = Boolean.toString(booleanValue2);

        System.out.println(stringValue1);
        System.out.println(stringValue2);
    }
}