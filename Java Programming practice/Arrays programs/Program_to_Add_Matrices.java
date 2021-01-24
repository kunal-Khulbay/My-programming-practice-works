

/**
 * Program_to_Add_Matrices
 */
public class Program_to_Add_Matrices {

    public static void main(String[] args) {
        int rows = 2, coloumns = 3;
        int[][] firstMatrix = { { 2, 3, 4 }, { 5, 2, 3 } };
        int[][] secondMatrix = { { -4, 5, 3 }, { 5, 6, 3 } };
        // Adding Two Matrices.
        int[][] sum = new int[rows][coloumns];
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < coloumns; j++) {
                sum[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
            }
        }
        // Displaying the result.
        System.out.println("Sum of the Matrices is: ");
        for (int[] row : sum) {
            for (int coloumn : row) {
                System.out.print(coloumn + "    ");
            }
            System.out.println();
        }
    }
}