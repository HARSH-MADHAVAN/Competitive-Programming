#include <iostream>
using namespace std;

// Pass by value
int multiply(int x, int y){
    return x * y;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << multiply(x, y) << endl;

    return 0;
}