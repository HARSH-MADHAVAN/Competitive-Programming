#include <iostream>
using namespace std;

void krotateArray(int arr[], int n){
    for (int i = n-1; i >= 1; i--)
    {
        swap(arr[i], arr[i - 1]);
    }
}

int main() {
    int arr[]{10, 20, 30, 40, 50, 60, 70};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;

    for (int i = 1; i <= k; i++)
    {
        krotateArray(arr, n);   
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    cout << endl;

    return 0;
}