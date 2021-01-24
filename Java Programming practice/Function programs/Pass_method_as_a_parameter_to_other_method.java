

/**
 * Pass_method_as_a_parameter_to_other_method
 */
class Pass_method_as_a_parameter_to_other_method {

    // Calculate Sum.
    public int add(int a, int b) {
        int sum = a + b;
        return sum;
    }

    // Calculate the square.
    public void square(int num) {
        int result = num * num;
        System.out.println(result);
    }

    public static void main(String[] args) {
        Pass_method_as_a_parameter_to_other_method obj = new Pass_method_as_a_parameter_to_other_method();
        obj.square(obj.add(15, 9));
    }
}