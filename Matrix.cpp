#include <iostream>
using namespace std;
void add(int A[10][10], int B[10][10], int r, int c) 
{
    int C[10][10];
    cout << "Addition of matrices:\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
void sub(int A[10][10], int B[10][10], int r, int c)
{
    int C[10][10];
    cout << "Subtraction of matrices:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            C[i][j] = A[i][j] - B[i][j];
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
void multi(int A[10][10], int B[10][10],int r1, int c1, int r2, int c2)
{
    int C[10][10] = {0};

    if (c1 != r2)
    {
        cout << "Multiplication is not possible.\n";
        return;
    }
    cout << "Multiplication of matrices:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }
}
void transpose(int A[10][10], int r, int c)
{
    cout << "\nTranspose of matrix:\n";

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            cout << A[j][i] << "\t";
        }
        cout << endl;
    }
}
int main()
{
    int A[10][10], B[10][10];
    int r1, c1, r2, c2;
    int ch;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "\nEnter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "-----MATRIX OPERATIONS-----\n";
    cout << "1.Addition\n";
    cout << "2.Subtraction\n";
    cout << "3.Multiplication\n";
    cout << "4.Transpose\n";
    cout << "Enter your choice: ";
    cin >> ch;

    switch (ch)
    {
        case 1:
            if (r1 == r2 && c1 == c2)
                add(A, B, r1, c1);
            else
                cout << "Addition is not possible.\n";
            break;
        case 2:
            if (r1 == r2 && c1 == c2)
                sub(A, B, r1, c1);
            else
                cout << "Subtraction is not possible.\n";
            break;
        case 3:
            multi(A, B, r1, c1, r2, c2);
            break;
        case 4:
            cout << "Transpose of first matrix:\n";
            transpose(A, r1, c1);
            break;
        default:
            cout << "Invalid choice!\n";
    }
    return 0;
}