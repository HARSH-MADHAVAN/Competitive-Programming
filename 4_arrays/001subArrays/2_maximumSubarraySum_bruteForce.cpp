#include <iostream>
#include <climits>
using namespace std;

/*
	SAMPLE INPUT: -
	9
	-2 1 -3 4 -1 2 1 -5 4

	start ∈ [0, n)
	end ∈ [start, n)
	k ∈ [start, end]
	
*/

int maxSubarraySum(int arr[], int n){
    int max = INT_MIN;

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int sum = 0;
            for (int k = start; k <= end; k++)
            {
                sum += arr[k];
            }
            if(sum > max){
                max = sum;
            }
        }
        
    }
    return max;
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

    int max = maxSubarraySum(arr, n);

    cout << max << endl;
    
    return 0;
}