// Problem statement
// Given an array ‘arr’ of size ‘n’ find the largest element in the array.
// Example:
// Input: 'n' = 5, 'arr' = [1, 2, 3, 4, 5]
// Output: 5
// Explanation: From the array {1, 2, 3, 4, 5}, the largest element is 5.

// sol 1
// tc-o(n)
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int k=0;
    int largest=0;
   for(int i=0;i<n;i++){
       if(arr[k]>arr[largest]){
           largest=k;
           
       } 
       k++;
    
   }
   return arr[largest];
}


// brute sol 2
// tc-0(NlogN)
#include <bits/stdc++.h>
int largestElement(vector<int> &arr, int n) {
    sort(arr.begin(),arr.end());
    return arr[n-1];
}
