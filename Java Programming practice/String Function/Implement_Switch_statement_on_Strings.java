/**
 * Implement_Switch_statement_on_Strings
 */
public class Implement_Switch_statement_on_Strings {

    public static void main(String[] args) {
        // create a String.
        String language = "Java";
        switch (language) {
            case "Java" -> System.out.println(language + " is famous for enterprise aplications.");
            case "JavaScript" -> System.out.println(language + " is famous for frontend and backend.");
            case "Pysthon" -> System.out.println(language + " is famous for ML and AL.");
            default -> System.out.println(language + " not found on record.");
        }
    }
}