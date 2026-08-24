#include <iostream>
using namespace std;

int main()
{
    int i, j;

    for(i = 1; i <= 5; i++)
    {
        // Print spaces
        for(j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }

        // Print numbers
        for(j = 1; j <= 2 * i - 1; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}