#include <iostream>
#include <vector>
using namespace std;

void printvec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        v.push_back(5);
    }
    cout << endl;
}

int main()
{
    vector<int> v;
    printvec(v);
}
