#include <iostream>
using namespace std;

// Function to add two matrices
void addMatrices(int rows, int cols, int mat1[][10], int mat2[][10], int result[][10]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input the dimensions of the matrices
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    // Declare matrices
    int mat1[10][10], mat2[10][10], result[10][10];

    // Input elements of the first matrix
    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat1[i][j];
        }
    }

    // Input elements of the second matrix
    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat2[i][j];
        }
    }

    // Call the function to add the two matrices
    addMatrices(rows, cols, mat1, mat2, result);

    // Output the result
    cout << "Resultant matrix after addition:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
