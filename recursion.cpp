// find out the factorail of n
#include <iostream>
using namespace std;
int func(int n)
{
    if (n == 0)
        return 1;
    return func(n - 1) * n;
}
int main()
{
    int n;

    cin >> n;
    cout << func(n) << endl;
}