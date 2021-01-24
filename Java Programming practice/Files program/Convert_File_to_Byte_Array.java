import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
// import java.util.Arrays;

/**
 * Convert_File_to_Byte_Array
 */
public class Convert_File_to_Byte_Array {

    public static void main(String[] args) {
        // Convert file to byte
        // String path = System.getProperty("user.dir") + "\\src\\test.txt";

        // try {
        // byte[] encoded = Files.readAllBytes(Paths.get(path));
        // System.out.println(Arrays.toString(encoded));
        // } catch (IOException e) {

        // }
        // }
        String path = System.getProperty("user.dir") + "\\src\\test.txt";
        String finalPath = System.getProperty("user.dir") + "\\src\\final.txt";
        try {
            byte[] encoded = Files.readAllBytes(Paths.get(path));
            Files.write(Paths.get(finalPath), encoded);
        } catch (IOException e) {

        }
    }
}