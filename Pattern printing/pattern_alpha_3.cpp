#include <iostream>

using namespace std;
// A A A
// B B B
// C C C
int main()
{

    int i = 0, n = 4;
    int val = 0;

    while (i < n)
    {
        char ch = 'A' + val;
        for (int j = 0; j < n; j++)
        {

            cout << ch;
            ch++;
        }
        cout << endl;
        i++;
        val++;
    }
}