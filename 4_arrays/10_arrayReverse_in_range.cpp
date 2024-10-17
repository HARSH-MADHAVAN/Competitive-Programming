#include <iostream>
using namespace std;

void reverseArrayinRange(int arr[],int i,int j){
    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

int main() {
    int arr[]{10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(int);
    int i = 2; //starting index
    int j = 5; //ending index

    reverseArrayinRange(arr, i, j); //swaping only between i and j

    // output the modified array
    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
    
    return 0;
}