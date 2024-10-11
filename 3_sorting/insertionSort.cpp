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

	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < n; ++i)
	{
		int ce = arr[i];
		int j = i - 1;

		while(j>=0 and ce < arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = ce;
	}
	for (int i = 0; i < n; i++)
		{
			cout<< arr[i] << " ";
		}

}




