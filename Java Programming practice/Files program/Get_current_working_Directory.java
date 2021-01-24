import java.nio.file.Paths;

/**
 * Get_current_working_Directory
 */
public class Get_current_working_Directory {

    public static void main(String[] args) {
        // String path = System.getProperty("user.dir");
        // System.out.println("Working Directory = " + path);

        // Get the currennt directory using Path
        String path = Paths.get("").toAbsolutePath().toString();
        System.out.println("Working Directory =" + path);
    }
}