#include <iostream>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
using namespace std;

void init_code() {
	fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif
}

int main(){
	init_code();
	int n;
	cin >> n;
	
	for (int row = 1; row <= n; row++)
	{
		for (int space = 1; space <= n - row; space++) {
            cout << " ";
        }
        
        for (int col = 1; col <= row; col++) {
            cout << "*";
        }
        cout << endl;
	}
}