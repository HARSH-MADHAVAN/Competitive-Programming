#include <iostream>
using namespace std;

bool isEven(int n){
    return n % 2 == 0;
}
int main() {
    bool ans;
    ans = isEven(5);
    cout << ans << endl;

    // if a fn call returns a value, you can treat that fn call as an expression

    if (isEven(9))
    {
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    
	// and therefore you can use such a fn call anywhere where you would use an expression
    isEven(8) ? cout << "Even" << endl : cout << "Odd" << endl;

    return 0;
}

