#include <iostream>
using namespace std;

void greet(){
    cout << "Hello! How are you...?" << endl;
    return;//optional
}

int main() {

    cout << "Inside main() before greet()" << endl;
    greet();
    cout << "Inside main() after greet()" << endl;

    return 0;
}