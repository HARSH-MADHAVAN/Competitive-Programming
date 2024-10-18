#include <iostream>
using namespace std;

int Power(int x, int y){
    // Base case
    if (y==0)
    {
        return 1;
    }

    // Recursion Case

    int A = Power(x, y - 1);
    return x * A;
}

int main() {
    int x = 2;
    int y = 3;

    cout << Power(x, y) << endl;

    return 0;
}