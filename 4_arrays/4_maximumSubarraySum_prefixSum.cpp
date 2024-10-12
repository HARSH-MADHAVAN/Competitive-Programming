#include <iostream>
#include <climits>
using namespace std;

/*
	SAMPLE INPUT: -
	9
	-2 1 -3 4 -1 2 1 -5 4
	
*/

int maximumSubarraySum(int arr[], int n, int csum[]){

    int max = INT_MIN;
    for (int start = 0; start < n;start++){
        for (int end = 0; end < n; end++)
        {
            int sum = csum[end] - csum[start];

            if (sum>max)
            {
                max = sum;
            }
            
        }
        
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

    // creating prefix array
    int csum[n + 1];
    csum[0] = 0;
    for (int i = 0; i < n+1; i++)
    {
        csum[i] = csum[i - 1] + arr[i - 1];
    }

    // calculating maximum subarray
    int max = maximumSubarraySum(arr, n, csum);

    // printing maximum subarray sum
    cout << max << endl;

    return 0;
}