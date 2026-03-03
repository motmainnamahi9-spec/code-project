#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int count = 1;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            count++;
        }
    }

    cout << count;

    return 0;
}
