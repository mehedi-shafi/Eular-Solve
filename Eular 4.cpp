#include <bits/stdc++.h>
using namespace std;
bool palin (int n)
{
    int rev = 0, temp = n;
    while (temp > 0){
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (n == rev)
        return true;
    return false;
}
int main ()
{
    int mx = 0;
    for (int i = 100; i < 1000; i++){
        for (int j = 100; j < 1000; j++){
            if (palin(i*j)){
                if (i*j > mx)
                    mx = i * j;
            }
        }
    }
    cout << mx << endl;
    return 0;
}
