#include <iostream>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#include<climits>
using namespace std;

void init_code() {
	fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
}

int main(){
	init_code();
	int n;
	cin>>n;
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i]; 
	}  			


	int mini = INT_MAX;

	int mini_index = -1;

	for (int i = 0; i < n; ++i)
				{
					 if (arr[i] < mini)
					  {
					  	mini = arr[i];
					  	mini_index = i;
					  } 
				}	
	cout<< mini_index << " " << mini << endl;		

}