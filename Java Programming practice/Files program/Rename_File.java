import java.io.File;

/**
 * Rename_File
 */
public class Rename_File {

    public static void main(String[] args) {

        // Create a file object.
        File file = new File("newName");
        // Create a file
        try {
            file.createNewFile();
        } catch (Exception e) {
            e.getStackTrace();
        }
        // Create an object that contains the new name of file.
        File newFile = new File("oldName");
        // change the name of file
        boolean value = file.renameTo(newFile);
        if (value) {
            System.out.println("The name of the file is changed");
        } else {
            System.out.println("The name cannot be changed");

        }
    }
}