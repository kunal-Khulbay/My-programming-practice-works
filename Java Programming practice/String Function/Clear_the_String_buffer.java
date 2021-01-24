/**
 * Clear_the_String_buffer
 */
public class Clear_the_String_buffer {

    public static void main(String[] args) {
        // Program to clear using StringBuffer using delete().

        // create a string buffer
        // StringBuffer str = new StringBuffer();

        // Add string to string buffer.
        // str.append("Java");
        // str.append(" is ");
        // str.append("pouplar. ");
        // System.out.println("StringBuffer: " + str);

        // // clear the string.
        // // using delete.
        // str.delete(0, str.length());
        // System.out.println("Updated Stringbuffer: " + str);

        // Clear the StringBuffer using setLength().

        // create a string buffer
        // StringBuffer str = new StringBuffer();

        // // Add string to string buffer.
        // str.append("Java");
        // str.append(" is ");
        // str.append("awesome. ");
        // System.out.println("StringBuffer: " + str);

        // // clear the string.
        // // using delete.
        // str.setLength(0);
        // System.out.println("Updated Stringbuffer: " + str);

        // Clear the StringBuffer by creating a new objegt.

        // create a string buffer
        StringBuffer str = new StringBuffer();

        // Add string to string buffer.
        str.append("Java");
        str.append(" is ");
        str.append("awesome. ");
        System.out.println("StringBuffer: " + str);

        // clear the string.
        // using delete.
        // here new object is created and assiged to str.
        str = new StringBuffer();
        System.out.println("Updated Stringbuffer: " + str);
    }
}