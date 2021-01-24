

/**
 * Private_constructor
 */
// class Test {

// private Test() {
// System.out.println("This is a private constructor");
// }

// public static void instanceMethod() {
// Test obj = new Test();
// obj.getClass();
// }

// }

// class Private_Constructor {

// public static void main(String[] args) {
// Test.instanceMethod();
// }

// }
class Language {
    private static Language language;

    private Language() {
        System.out.println("Inside Private Constructor");
    }

    public static Language getInstance() {
        if (language == null) {
            language = new Language();
        }
        return language;
    }

    public void display() {
        System.out.println("Singleton Patten is achieved");
    }
}

/**
 * Private_Constructor
 */
public class Private_Constructor {

    public static void main(String[] args) {
        Language db1;
        db1 = Language.getInstance();
        db1.display();
    }
}
