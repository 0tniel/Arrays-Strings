//Otniel
//23070123069
//ENTC A3
#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;
    cout << "Enter the number of rows for Matrix A: ";
    cin >> rowsA;
    cout << "Enter the number of columns for Matrix A: ";
    cin >> colsA;
    cout << "Enter the number of rows for Matrix B: ";
    cin >> rowsB;
    cout << "Enter the number of columns for Matrix B: ";
    cin >> colsB;
    if (colsA != rowsB) {
        cout << "Matrix multiplication not possible. Number of columns of A must equal number of rows of B." << endl;
        return 1;
    }
    int A[rowsA][colsA], B[rowsB][colsB], C[rowsA][colsB];
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            C[i][j] = 0;
        }
    }
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "Result of matrix multiplication:" << endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
Enter the number of rows for Matrix A: 2
Enter the number of columns for Matrix A: 2
Enter the number of rows for Matrix B: 2
Enter the number of columns for Matrix B: 2
Enter elements of Matrix A:
1
2
3
4
Enter elements of Matrix B:
1
2
3
4
Result of matrix multiplication:
7 10
15 22
*/
