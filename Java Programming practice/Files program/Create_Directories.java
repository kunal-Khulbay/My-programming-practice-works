import java.io.File;

/**
 * Create_Directories
 */
public class Create_Directories {

    public static void main(String[] args) {
        // Create a files object with specified path
        // File file = new File("Java Example\\directory");
        // tries to create a new dircetory.
        // boolean value = file.mkdir();
        // if (value) {
        // System.out.println("The directory is created.");
        // } else {
        // System.out.println("The dirextory already exists");
        // }

        // Create a new directory using the mikdirs() method
        // Create a files object with specified path
        File file = new File("Java Toutrial\\abc");
        // tries to create a new dircetory.
        boolean value = file.mkdirs();
        if (value) {
            System.out.println("The directory is created.");
        } else {
            System.out.println("The dirextory already exists");
        }
    }
}