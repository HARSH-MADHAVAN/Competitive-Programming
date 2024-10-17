#include <iostream>
#include <algorithm>

using namespace std;

// time complexity O(n^2)
int mostWater(int h[], int n){
    int ans = 0;

    for (int i = 0; i <= n-2 ; i++)
    {
        for (int j = i+1; j <= n-1; j++)
        {
            int wij = j - i;
            int hij = min(h[i], h[j]);
            int area = wij * hij;
            ans = max(area, ans);
        }
        
    }
    return ans;
}

// time complexity O(n)
int mostWaterOptimized(int h[], int n){
    int i = 0;
    int j = n - 1;
    int ans = 0;

    while (i < j)
    {
        int wij = j - i;
        int hij = min(h[i], h[j]);

        int area = wij * hij;

        ans = max(area, ans);

        if (h[i] < h[j])
        {
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}

int main() {
    int h[]{1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(h) / sizeof(int);

    cout << mostWater(h, n) << " " << endl;

    cout << mostWaterOptimized(h, n) << " " << endl;

    return 0;
}