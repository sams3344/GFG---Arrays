#include <bits/stdc++.h>
using namespace std;


    void fun(long long a[], long long n, long long sum){
        int s=0, csum=0, i;
        
        for(i=0;i< n;i++){
            csum += a[i];
            
            while(csum > sum){
                csum -= a[s];
                s++;
            }
            if(csum == sum){
                cout << s+1 << " " << i+1 ;
                return;
            }
        } 
        
        cout << "-1";
        
    }

int main() 
{ 
    int t;
	cin>>t;
	while(t--)
	{
	    long long n,k,i;
	    cin>>n>>k;
	    long long a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    fun(a,n,k);
	    cout<<"\n";
	}
	return 0;
} 


/*7 12

 1 1 2 3 7 5

1 2 3 5 8 15 17      14 
  
  
  -1  
*/
 


  
