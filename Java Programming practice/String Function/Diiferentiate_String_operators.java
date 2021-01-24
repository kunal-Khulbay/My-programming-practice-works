/**
 * Diiferentiate_String_operators
 */
public class Diiferentiate_String_operators {

    public static void main(String[] args) {
        // Program to differentiate == and equals().
        // String name1 = new String("Programiz");
        // String name2 = new String("Programiz");

        // System.out.println("Check if two strings are equal");

        // // check if two strings are equal.
        // // using==operator.
        // boolean result1 = (name1 == name2);
        // System.out.println("Using == operator: " + result1);

        // // uisng equals() method.
        // boolean result2 = name1.equals(name2);
        // System.out.println("using equal(): " + result2);

        // Example 2:
        // Program to differentiate == and equals().
        String name1 = new String("Programiz");
        String name2 = name1;

        System.out.println("Check if two strings are equal");

        // check if two strings are equal.
        // using==operator.
        boolean result1 = (name1 == name2);
        System.out.println("Using == operator: " + result1);

        // uisng equals() method.
        boolean result2 = name1.equals(name2);
        System.out.println("using equal(): " + result2);
    }
}