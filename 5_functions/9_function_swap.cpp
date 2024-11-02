#include <iostream>
#include <utility>
using namespace std;

// int& takes two integer parameters by reference.
// Swapping Logic: Inside the function, the swap is performed directly on the original variables x and y passed from main. 
// This means the function modifies the actual variables, not copies.
void swapFunction(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    swapFunction(x, y);
    cout << x << " , " << y << endl;

    return 0;
}