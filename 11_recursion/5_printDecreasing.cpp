#include <iostream>
using namespace std;

void f(int n){
    // Base Case
    if (n==0)
    {
        return ;
    }

    // Recursive case
    // print number from 1 to n

    cout << n << " ";
    f(n - 1);

}

int main() {
    int n = 5;
    f(n);

    return 0;
}