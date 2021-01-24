/**
 * Program_to_create_immutable_class
 */
final class Immutable {
    private String name;
    private int date;

    Immutable(String name, int date) {
        // Initialize the Immutable variables
        this.name = name;
        this.date = date;
    }

    // private getter methods.
    public String getName() {
        return name;
    }

    public int getDate() {
        return date;
    }
}

public class Program_to_create_immutable_class {

    public static void main(String[] args) {
        // craete object of Immutable.
        Immutable obj = new Immutable("Programiz", 2011);
        System.out.println("Name: " + obj.getName());
        System.out.println("Date: " + obj.getDate());
    }
}