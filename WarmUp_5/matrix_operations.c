# include <stdio.h> 

void printMatrix(int rows, int cols, int matrix[rows][cols]) { // prints a matrix 
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int a[rows][cols], int b[rows][cols], int result[rows][cols]) { // adds two matrices together
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int rowsA, int colsA, int rowsB, int colsB, int a[rowsA][colsA], int b[colsA][colsB], int result[rowsA][colsB]) { // multiplies two matrices together
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() { 
    int matrix1[2][2] = {{1,2}, {3,4}};
    int matrix2[2][2] = {{5,6}, {7,8}};

    int rows1 = 2;
    int cols1 = 2;
    int rows2 = 2;
    int cols2 = 2;

    int sum[2][2];
    int product[2][2];

    addMatrices(rows1, cols1, matrix1, matrix2, sum);
    multiplyMatrices(rows1, cols1, rows2, cols2, matrix1, matrix2, product);

    printf("Matrix addition: \n");
    printMatrix(rows1, cols1, sum);

    printf("Matrix mulitplication: \n");
    printMatrix(rows1, cols2, product);

    return 0; 
}