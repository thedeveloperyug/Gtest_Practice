#include <bits/stdc++.h>
using namespace std;

int ls(int arr[], int target, int size)
{

    if (size < 0)
    {
        return 0;
    }

    int x = ls(arr + 1, target, --size);
    // cout <<
    //     if (x == target)
    //     {
    //         return x;
    //     }

        return arr[x];
}

int main()
{
    int arr[] = {2, 3, 4, 5, 5, 6};

    cout << ls(arr, 4, 5);
}