

/**
 * Transpose_of_a_Matrix
 */
public class Transpose_of_a_Matrix {

    public static void main(String[] args) {
        int row = 2, coloumn = 3;
        int[][] matrix = { { 2, 3, 4 }, { 5, 6, 4 } };
        // Display current matrix.
        display(matrix);
        // Transpose a Matrix.
        int[][] transpose = new int[coloumn][row];
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < coloumn; j++) {
                transpose[j][i] = matrix[i][j];
            }
        }
        // Display transposeed matrix.
        display(transpose);
    }

    public static void display(int[][] matrix) {
        System.out.println("The matrix is:");
        for (int[] row : matrix) {
            for (int coloumn : row) {
                System.out.print(coloumn + "    ");
            }
            System.out.println();
        }
    }
}