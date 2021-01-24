import java.io.File;

/**
 * Get_all_files_present_in_a_Directory
 */
public class Get_all_files_present_in_a_Directory {

    public static void main(String[] args) {
        // Program to list all files.
        // Create a file Object.
        // File file = new File("D:\\my programming pratice\\Java Programming");
        // // Returns an array of all files.
        // String[] fileList = file.list();
        // for (String str : fileList) {
        // System.out.println(str);
        // }
        // List Files present in a Directpry excluding SubDirectories.

        try {
            File folder = new File("D:\\my programming pratice\\Java Programming\\Files program");
            // List all the files.
            File[] files = folder.listFiles();
            for (File file : files) {
                if (file.isFile()) {
                    System.out.println(file);
                }
            }
        } catch (Exception e) {
            e.getStackTrace();
        }
    }
}