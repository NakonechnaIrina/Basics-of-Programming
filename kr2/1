#include <iostream>
#include<string>
using namespace std;
int main()
{
    cout << "input n: ";
    int n;
    cin >> n;
    int* arra = new int[n];
    cout << "input array:";
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ": ";
        cin >> arra[i];
    }

    int stk;
    int i, j;

    for (j = 0, i = n - 1; j < i; --i, ++j)
    {
        stk = arra[i];
        arra[i] = arra[j];
        arra[j] = stk;
    }

    for (int k = 0; k < n; k++)
        cout << arra[k] << " ";

    cout << endl;

    delete[] arra;

    system("pause");
    return 0;
}
