#include <iostream>
using namespace std;

int main(){
    int array[5];
    cout<<"Enter the values of the array ";
    for (int i=0; i<5; i++){
        cin>>array[i];
    }
    cout<<"output: ";
    for(int i=0; i<5; i++){
        array[i] = 1;
        cout<<array[i]<<" ";
    }
    return 0;
}