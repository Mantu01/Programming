/*
  Given an array arr of size n−1 that contains distinct integers in the range of 1 to n (inclusive), find the missing element. The array is a permutation of size n with one element missing. Return the missing element.

  Expected Time Complexity: O(n)
  Expected Auxiliary Space: O(1)

  Constraints:
    1 ≤ n ≤ 105
    1 ≤ arr[i] ≤ n
*/
class Solution {

  // Note that the size of the array is n-1
  missingNumber(n, arr) {

      let totalSum = (n*(n+1))/2;     // Formula for sum of first n natural numbers
      
      let arrSum=0;
      
      for(let i=0; i<arr.length; i++){
          arrSum+=arr[i];
      }
      
      let missingNum = totalSum - arrSum;
      
      return missingNum;
  }
}