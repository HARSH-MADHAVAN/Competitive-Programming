#include <iostream>
using namespace std;

int f(int n){
    // Base case
    if(n==0 || n==1){
        return n;
    }

    return n * f(n - 1);
}

int main() {
    int n = 4;
    cout << f(n) << endl;

    return 0;
}