#include <iostream>
#include <climits>
using namespace std;

/*
    SAMPLE INPUT: -
	9
	-2 1 -3 4 -1 2 1 -5 4
*/

int maximumSubarraySumKadane(int arr[], int n){
    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
        maxi = max(maxi, sum);

        if (sum<0)
        {
            sum = 0;
        }
        
    }
    return maxi;
}


int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = maximumSubarraySumKadane(arr, n);

    cout << result << endl;

    return 0;
}