#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int&y = x; // Declare a reference `y` to the variable `x`. `y` now acts as another name for `x`.
    y++;  //Since `y` is a reference to `x`, this also increments `x`.
    cout << x << endl;
    cout << y << endl;

    return 0;
}