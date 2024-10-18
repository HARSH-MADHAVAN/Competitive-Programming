#include <iostream>
using namespace std;

int subArrays(int arr[], int n) {
    for (int i = 0; i < n; i++)                 //starting index of subarray
    {
        for (int j = i; j < n; j++)             //ending index of subarray
        {
            for (int k = i; k <= j; k++)        //printing subarray from i to j
            {
                cout << arr[k] << " ";
            }
            cout << endl;   
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << endl;

    subArrays(arr, n);  //pass arr[] and its size

    return 0;
}