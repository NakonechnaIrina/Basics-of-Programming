#include <iostream>
#include <cstring>
using namespace std;
void PrintMatrix(int matrix, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Mult(int** matrix, int n, int m, int num) 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[i][j] *= num;
        }
    }
}
int** Different(int** a, int** b, int n, int m)
{
    Mult(a, n, m, 3);
    Mult(b, n, m, 2);

    int** result = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        result[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
        cout << endl;
    }
    return result;
}
int main()
{
    int n, m;
    cout << "enter n,m:";
    cin >> n >> m;
  
    int** a = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 0 + rand() % 10;
        }
    }
    cout << "matrix A:" << endl;
    PrintMatrix(a, n, m);


    int** b = new int* [n];
    for (int i = 0; i < n; ++i)
    {
        b[i] = new int[m];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            b[i][j] = 0 + rand() % 10;
        }
    }

    cout << "matrix B:" << endl;
    PrintMatrix(b, n, m);

    int  result = int** Different(a, b, n, m);
    cout << "3A-2B:" << endl;
    PrintMatrix(result, n, m);


    system("pause");
    return 0;
}
