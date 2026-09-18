
#include <iostream>
using namespace std;

int main()
{
    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    int triangle[30][30];

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                triangle[i][j] = 1;
            else
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    cout << "\nPascal's Triangle:\n";

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
