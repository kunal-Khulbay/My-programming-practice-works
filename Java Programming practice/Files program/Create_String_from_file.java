import java.nio.charset.Charset;
import java.nio.file.Files;
import java.nio.file.Paths;
// import java.util.List;
import java.io.IOException;
// import java.nio.charset.StandardCharsets;

/**
 * Create_String_from_file
 */
public class Create_String_from_file {

    public static void main(String[] args) throws IOException {
        // String path = System.getProperty("user.dir") + "\\src\\test.txt";
        // Charset encoding = Charset.defaultCharset();
        // List<String> lines = Files.readAllLines(Paths.get(path), encoding);
        // System.out.println(lines);

        // Create String from file
        String path = System.getProperty("user.dir") + "\\src\\test.txt";
        Charset encoding = Charset.defaultCharset();
        byte[] encoded = Files.readAllBytes(Paths.get(path));
        String lines = new String(encoded, encoding);
        System.out.println(lines);
    }
}