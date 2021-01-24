/**
 * Convert_primitive_types_to_objects
 */
public class Convert_primitive_types_to_objects {

    public static void main(String[] args) {
        // int var1 = 5;
        // double var2 = 5.65;
        // boolean var3 = true;
        // Integer obj1 = Integer.valueOf(var1);
        // Double obj2 = Double.valueOf(var2);
        // Boolean obj3 = Boolean.valueOf(var3);
        // if (obj1 instanceof Integer) {
        // System.out.println("An object of Integer is created.");
        // }
        // if (obj2 instanceof Double) {
        // System.out.println("An object of Double is created.");
        // }
        // if (obj3 instanceof Boolean) {
        // System.out.println("An object of Boolean is created.");
        // }
        // #### Convert Wrapper objects to primitive types. ####
        Integer obj1 = Integer.valueOf(23);
        Double obj2 = Double.valueOf(5.55);
        Boolean obj3 = Boolean.valueOf(true);
        int var1 = obj1.intValue();
        double var2 = obj2.doubleValue();
        boolean var3 = obj3.booleanValue();
        System.out.println("The value of int variable: " + var1);
        System.out.println("The value of double variable: " + var2);
        System.out.println("The value of boolean variable: " + var3);
    }
}