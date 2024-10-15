/*
  Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

  NOTE*: A subarray is a contiguous part of any given array.

Your Task:

You don't need to read input or print anything. Your task is to complete the function maximumSumSubarray() which takes the integer K, vector Arr with size N, containing the elements of the array and returns the maximum sum of a subarray of size K.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= N <= 105
1 <= Arri <= 105
1 <= K <= N
*/

class Solution {
  maximumSumSubarray(K, Arr, N) {
    //code here
    
    let sum=0;
    
    for(let i=0;i<K;i++){
        sum+=Arr[i];
    }
    
    let maxSum=sum;
    
    for(let i=K,j=0;i<N;i++,j++){
        
        sum=sum-Arr[j]+Arr[i];
        
        if(maxSum<sum)
            maxSum=sum;
        
    }
    return maxSum
  }
}
