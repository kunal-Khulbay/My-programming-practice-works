import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.util.Locale;

// /**
//  * Convert_String_to_date
//  */
public class Convert_String_to_date {
    // Convert string to Date using predefind
    public static void main(String[] args) {
        // Format y-M-d or yyyy-MM-d
        // String string = "2017-07-25";
        // LocalDate date = LocalDate.parse(string, DateTimeFormatter.ISO_DATE);
        // System.out.println(date);\

        // Convert String t Date using patten formatters.
        String string = "July 25,2017";
        DateTimeFormatter foramtter = DateTimeFormatter.ofPattern("MMMM d,yyyy", Locale.ENGLISH);
        LocalDate date = LocalDate.parse(string, foramtter);
        System.out.println(date);
    }
}
