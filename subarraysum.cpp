#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    long long sum = arr[0];
    long long maxSum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(sum + arr[i] > arr[i])
            sum = sum + arr[i];
        else
            sum = arr[i];

        if(sum > maxSum)
            maxSum = sum;
    }

    cout << maxSum << endl;

    return 0;
}
