#include <iostream>
using namespace std;

void inc(int&y){
    y++;
}

int main() {
    int x = 5;
    cout << x << endl; //5
    inc(x);
    cout << x << endl; //5

    return 0;
}

