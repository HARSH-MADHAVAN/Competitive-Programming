#include <iostream>
using namespace std;

int isEven(int n){

    if (n%2 == 0)
    {
        cout << n << " is even" << endl;
    }
    else{
        cout << n << " is odd" << endl;
    }
    
}
int main() {

    isEven(10);
    isEven(9);

    return 0;
}