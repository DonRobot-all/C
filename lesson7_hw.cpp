#include <iostream>

using namespace std;


int main()
{
	int d = 5;

    int n = 0;
    while (n < d)
    {
        int c = 0;
        while (c < d)
        {
            int a = n + c;

            if (a < d)
            {
                cout << d - a;
            }
            if (a + 1 < d)
            {
                cout << " ";
            }

            ++c;
        }
        cout << endl;
        ++n;
    }

    return 0;
}
