#include <iostream>
using namespace std;

// pass by reference
int multiply(int x, int y){
    return x * y;
}

int main() {
    cout << multiply(9, 9) << endl;
    int ans = multiply(5, 6);
    cout << ans << endl;

    return 0;
}