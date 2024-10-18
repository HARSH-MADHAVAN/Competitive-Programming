#include <iostream>
using namespace std;

int f(int x , int y){
    // Base case
    if (x==0||y==0 )
    {
        return 0;
    }

    // recurssion case :- find x * y
    // f(x) = x + f(x, y - 1);
    return x + f(x, y - 1);

}

int main() {
    int x = 2;
    int y = 3;

    cout << f(x, y) << endl;

    return 0;
}