

/**
 * Call_one_constructor_from_another
 */
// class Call_one_constructor_from_another {
//     int sum;

//     Call_one_constructor_from_another() {
//         this(5, 2);
//     }

//     Call_one_constructor_from_another(int arg1, int arg2) {
//         this.sum = arg1 + arg2;
//     }

//     void display() {
//         System.out.println("Sum is: " + sum);
//     }

//     public static void main(String[] args) {
//         Call_one_constructor_from_another obj = new Call_one_constructor_from_another();
//         obj.display();

//     }
// }
//  #### Call the constructor  pf the superclass from the constrctor of the child class.####
/**
 * Call_one_constructor_from_another
 */
class Languages {
    Languages(int version1, int version2) {
        if (version1 > version2) {
            System.out.println("The latest version is: " + version1);
        } else {
            System.out.println("The latest version is: " + version2);
        }
    }
}

/**
 * Call_one_constructor_from_another
 */
class Call_one_constructor_from_another extends Languages {
    Call_one_constructor_from_another() {
        super(11, 8);
    }

    public static void main(String[] args) {
        Call_one_constructor_from_another obj = new Call_one_constructor_from_another();
        obj.getClass();
    }
}
