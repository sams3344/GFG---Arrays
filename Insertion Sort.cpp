// { Driver Code Starts
// C program for insertion sort
#include <stdio.h>
#include <math.h>

void insert(int arr[], int i);

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
}



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends


void insert(int arr[], int i)
{
    // Your code here  
    int key, j;
    
        j = i-1;                    
        // j, is just before i, to search for elts in the left side of the array 
        key = arr[i];
        
        // 1 3 4 9 7, ex when you search for say 9, you check with only 4 no ned ot go till 1 2 3
        while( j>=0 && arr[j] > key){           
            arr[j+1] = arr[j];
            j--;
        }
        
        //ex [4 5 6 1], so key = 1,  key =arr[3]=1,    j=3-1 =2
        
        //now  a[2]>1, so a[3]=a[2]  a= [4 5 6 6]    j-- = 1
        //now  a[1]>1, so a[2]=a[1]  a= [4 5 5 6]    j=0
        //now  a[0]>1, so a[3]=a[2]  a= [4 4 5 6]    j=-1
        //break
        
        // see carefully [4 5 6 6]  [4 5 5 1]  [4 4 5 1]   
        //all elts move right till we get to the right inserton pos
        //now we just gotta insert key at the stopped pos
        
        
        //arr stops exactly where key ahs to be inserted
        arr[j + 1] = key;               //[1 4 5 6 ]

}
