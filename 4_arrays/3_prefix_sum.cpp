#include <iostream>
#include <climits>
using namespace std;

/*
	SAMPLE INPUT: -
	9
	-2 1 -3 4 -1 2 1 -5 4
	
*/

// prefix sum also known as cumulative sum

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    // Creating prefix array
    int csum[n + 1] {0};
    for (int i = 1; i < n+1; i++)
    {
        csum[i] = csum[i - 1] + arr[i - 1];
    }

    // printing prefix array
    for (int i = 0; i < n+1; i++)
    {
        cout << csum[i] << " ";
    }
    
    

    return 0;
}