
#include <bits/stdc++.h> 
using namespace std; 

int maxDiff(int arr[], int arr_size) 
{ 
	// Maximum difference found so far 
	int max_diff = arr[1] - arr[0]; 
	
	// Minimum number visited so far 
	int min_element = arr[0]; 
  for(int i = 1; i < arr_size; i++) 
	{	 
	if (arr[i] - min_element > max_diff)							 
	max_diff = arr[i] - min_element; 
		
	if (arr[i] < min_element) 
	min_element = arr[i];		// ex  [2 3 1 6 8 10 9] 
	                            //after checking 1-2, change min_ele=1
	}                           //now min_ele =2->1    suntract all further 
	
	return max_diff; 
} 

int main() 
{ 
    int T;
    cin >> T;
    while(T--){
        int n ;
        cin >> n;
        
        int arr[n];
        for(int i=0; i<n ; i++){
            cin >> arr[i];
        }
	    cout << maxDiff(arr, n) << endl; 
    }
    return 0; 
} 
