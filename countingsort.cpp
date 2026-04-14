
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }


    int maxVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }


    int count[maxVal + 1];
    for(int i = 0; i <= maxVal; i++) {
        count[i] = 0;
    }


    for(int i = 0; i < n; i++) {
        count[arr[i]]++;
    }


    for(int i = 1; i <= maxVal; i++) {
        count[i] += count[i - 1];
    }


    int output[n];


    for(int i = n - 1; i >= 0; i--) {
        int value = arr[i];
        int position = count[value] - 1;

        output[position] = value;
        count[value]--;
    }


    for(int i = 0; i < n; i++) {
        arr[i] = output[i];
    }


    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
