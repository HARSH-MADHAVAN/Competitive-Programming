#include <iostream>
using namespace std;

int main() {
    int arr[]{10, 30, 50, 70};
    int brr[]{20, 40, 60};

    int n = sizeof(arr)/sizeof(arr[0]);
    int m = sizeof(brr)/sizeof(brr[0]);

    int crr[n+m];

    int i = 0; // to iterate over arr[]
	int j = 0; // to iterate over brr[]
	int k = 0; // to iterate over crr[]

    while (i<=n-1 and j<=m-1)
    {
        if (arr[i]<brr[j])
        {
            crr[k] = arr[i];
            k++;
            i++;
        }
        else{
            crr[k] = brr[j];
            k++;
            j++;
        }
    }

    while (i<=n-1)
    {
        crr[k] = arr[i];
        k++;
        i++;
    }

    while (j<=m-1)
    {
        crr[k] = brr[j];
        k++;
        j++;
    }
    
    for (int i = 0; i < n+m; i++)
    {
        cout << crr[i]<<" ";
    }

    cout << endl;

    return 0;
}