// { Driver Code Starts
// C program for implementation of Merge Sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
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
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}// } Driver Code Ends


/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]

void merge(int arr[], int l, int m, int r){
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 = r - m; 
  
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    
    
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1 + j]; 
        
    //why do this?
    //  1 3 5 7 2 4 6 8
    // L - 1 3 5 7
    // R - 2 4 6 8
    // 
    
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray        
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) { 
            arr[k] = L[i]; 
            i++; 
        } 
        else { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    
    //now a[] = [ 1 2 3 4 5 6 7]
    // after this i=4 ! <= n1, so break before you add 4
  
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) { 
        arr[k] = R[j]; 
        j++;                            ////now a[] = [ 1 2 3 4 5 6 7 8]
        k++; 
    } 
} 
/*
void merge(int a[], int l, int m, int r)
{
     //s1, e1 for left subarray, s2, e3 for left subarray
     int s1=l, s2=m+1;
     int e1=m, e2=r;
     
     vector<int> c;
     
     while(s1<= e1 && s2 <= e2){
         if(a[s1] <= a[s2]){
             c.push_back(a[s1]);
             s1++;
         }
         else{
             c.push_back(a[s2]);
             s2++;
         }
     }
     
    //if one of them ends, we need to find the rest 
    while(s1 <= e1){
             c.push_back(a[s1]);
             s1++;
    }
    
    while(s2 <= e2){
             c.push_back(a[s2]);
             s2++;
    }
    
    int k=0;
    for(int i=l;i<=r;i++){      
        a[i] = c[k];
        k++;
    }
}
*/
    
