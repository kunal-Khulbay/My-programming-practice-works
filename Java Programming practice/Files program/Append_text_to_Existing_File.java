import java.io.FileWriter;
import java.io.IOException;
// import java.nio.file.Files;
// import java.nio.file.Paths;
// import java.nio.file.StandardOpenOption;

/**
 * Append_text_to_Existing_File
 */
public class Append_text_to_Existing_File {

    public static void main(String[] args) {
        // String path = System.getProperty("user.dir") + "\\src\\test.txt";
        // String text = "Added text";
        // try {
        // Files.write(Paths.get(path), text.getBytes(), StandardOpenOption.APPEND);
        // } catch (IOException e) {

        // }

        // Append text to an existing file using FileWriter
        String path = System.getProperty("user.dir") + "\\src\\test.txt";
        String text = "Added text";
        try {
            FileWriter fw = new FileWriter(path, true);
            fw.write(text);
            fw.close();
        } catch (IOException e) {

        }
    }
}