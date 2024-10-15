/*
  Given an array arr[], return the length of the longest subarray of non-negative integers.
  Note: Subarray here means a continuous part of the array.

  Expected Time Complexity: O(n)
  Expected Auxiliary Space: O(1)

  Constraints:
  1 <= arr.size() <= 106
  -106 <= arr[i] <= 106
*/
class Solution {
  longestSubarray(arr) {

      // write code here
      
      let ans=0;
      let count=0;
      
      let n=arr.length;
      
      for(let i=0;i<n;i++){
          if(arr[i]<0){
              if(ans<count)   ans=count;
              
              count=0;
          }else{
              count++;
          }
      }
      
      if(count>ans)   ans=count;      // This condition is needed if the last element ends with positive integer
  
      
      return ans;
  }
}
