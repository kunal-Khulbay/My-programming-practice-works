

/**
 * Multipy_matrices_using_multideminsional_arrays
 */
public class Multipy_matrices_using_multideminsional_arrays {

    public static void main(String[] args) {
        int r1 = 2, c1 = 3;
        int c2 = 2;
        int[][] firstMatrix = { { 3, -2, 5 }, { 3, 0, 4 } };
        int[][] secondMatrix = { { 2, 3 }, { -9, 0 }, { 0, 4 } };
        // Multiplying Two Matrices
        int[][] product = new int[r1][c2];
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                for (int k = 0; k < c1; k++) {
                    product[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }
        // Displaying the result.
        System.out.println("Multiplaction of two matrices is: ");
        for (int[] row : product) {
            for (int coloumn : row) {
                System.out.print(coloumn + "   ");
            }
            System.out.println();
        }
    }
}