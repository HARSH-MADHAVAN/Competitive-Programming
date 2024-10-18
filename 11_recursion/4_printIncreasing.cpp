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

    f(n - 1);
    cout << n << " ";

}

int main() {
    int n = 5;
    f(n);

    return 0;
}