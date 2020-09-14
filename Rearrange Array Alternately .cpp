 
#include <bits/stdc++.h> 
using namespace std;

void rearrange(int arr[], int n) 

{ 
	int temp[n]; 

	int small=0, large=n-1, i=0; 

	while (i<n) 
	{ 
	    if(small < large)
			temp[i++] = arr[large--]; 
			temp[i++] = arr[small++]; 
	} 

	for (int i=0; i<n; i++) 
		arr[i] = temp[i]; 
} 

int main() 
{ 
	int T;
	cin >> T;
	
	while(T--){
	
	int n; 
	cin >> n;
	int arr[n];
	
	for(int i=0; i<n; i++) 
		cin >> arr[i]; 
	
	rearrange(arr, n); 
	
	for(int i=0; i<n; i++) 
		cout << arr[i] << " "; 
		
	cout << "\n";
	}
	return 0;
} 
