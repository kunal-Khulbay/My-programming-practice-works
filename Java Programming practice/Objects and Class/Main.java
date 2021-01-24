/**
 * Main
 */
class Test1 {
    // first class;
}

class Test2 {
    // second class
}

class Test {
    // class
}

public class Main {

    public static void main(String[] args) {
        // Check the class of an object using getclass() function.
        // create objects
        // Test1 obj1 = new Test1();
        // Test2 obj2 = new Test2();
        // // get the class of the object obj1
        // System.out.print("The class of obj1 is: ");
        // System.out.println(obj1.getClass());
        // System.out.print("The class of obj2 is: ");
        // System.out.println(obj2.getClass());

        // Check the class of an object using instanceOf operator.
        // // Create an object.
        // Test obj = new Test();
        // // check if obj is an object of Test
        // if (obj instanceof Test) {
        // System.out.println("obj is an object of the Test class");
        // } else {
        // System.out.println("obj is not an object of the Test class");
        // }

        // Check the class of an object using instanceOf operator.
        // Create an object.
        Test obj = new Test();
        // check if obj is an object of Test
        if (Test.class.isInstance(obj)) {
            System.out.println("obj is an object of the Test class");
        } else {
            System.out.println("obj is not an object of the Test class");
        }
    }
}