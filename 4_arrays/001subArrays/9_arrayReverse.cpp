#include <iostream>
using namespace std;
// number of steps = n/2;
// Time complexity = O(n)

void reverseArray(int arr[], int n){
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    
}
int main() {
    int arr[]{10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    return 0;
}