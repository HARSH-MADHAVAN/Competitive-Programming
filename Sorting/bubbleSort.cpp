 #include <iostream>
 #define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
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
    cin >> n;
    int arr[n];

 	for (int i = 0; i < n; i++)
 	{
 		cin >> arr[i];
 	}

 	for (int i = 0; i < n - 1; i++)
 	{
 		int flag = 0;
 		for (int j = 0; j <  n - i - 1; j++)
 			{
 				if (arr[j] > arr[j+1])
 				{
 					flag = 1;
 					swap(arr[j], arr[j+1]);
 				}
 			}	

 			if (flag == 0)
 			{
	 			break;
 			}
 	}
 	for (int i = 0; i < n;i++)
 	{
 		cout << arr[i] << " " ;
 	}

 }