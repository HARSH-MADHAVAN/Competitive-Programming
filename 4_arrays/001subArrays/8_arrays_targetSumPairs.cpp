#include <iostream>
using namespace std;

// Time complexity O(n^2)
int targetSum(int arr[], int n, int target){

    int count = 0;
    
    for (int i = 0; i <= n-2; i++)
    {
        for (int j = i+1; j <= n-1; j++)
        {
            int tSum = arr[j] + arr[i];

            if (tSum == target)
            {
                count++;
            }
            
        }
        
    }
    

    return count;
}

// Time complexity O(n)
int targetSumOptimised(int arr[], int n, int target){
    int i = 0;
    int j = n - 1;
    int count = 0;

    while(i<j){
        int pairSum = arr[i] + arr[j];

        if (pairSum == target)
        {
            count++;
            i++  ;
            j-- ;
        }

        else if (pairSum < target)
        {
            i++;
        }

        else if (pairSum > target)
        {
            j--;
        }
        
    }
    return count;
}


int main() {
    int arr[]{10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);

    int target = 60;
    

    cout << targetSum(arr, n, target) << endl;
    cout << targetSumOptimised(arr, n, target) << endl;

    return 0;
}