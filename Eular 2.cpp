#include <iostream>
using namespace std;
int main ()
{
    int sum = 2, o = 1, t = 2, curr = 0;

    while (curr <= 4000000){\
        curr = o + t;
        if (curr % 2 == 0)
            sum += curr;
        o = t;
        t = curr;
    }
    cout << sum << endl;
}
