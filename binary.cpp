#include <iostream>
using namespace std;
int binarysearch(int arr[5], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    cout << " enter your key " << endl;
    int key;
    cin >> key;
    int arr[5] = {2, 4, 6, 8, 10};
    int index = binarysearch(arr, 5, key);
    if (index == -1)
    {
        cout << "your target value is ABSENT  " << endl;
    }
    else
    {
        cout << "your target value is PRESENT  " << endl;
    }

    return 0;
}
