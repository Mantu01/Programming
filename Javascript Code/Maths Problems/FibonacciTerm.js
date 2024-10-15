/*
Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

Note: for the reference of this question take first fibonacci number to be 1.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:
1<= n <=105
*/
class Solution {
    
  nthFibonacci(n)
  {
      //your code here
      
      let mod = 1e9+7;    // 1 * 10^9 + 7 ;
      
      let fibSeries = [1,1];
      
      for(let i=2; i<n; i++){
          
          let prev1 = fibSeries[i-1];
          let prev2 = fibSeries[i-2];
          
          let currTerm = (prev1 + prev2) % mod;
          
          fibSeries.push(currTerm);
      }
      
      return fibSeries[n-1];
      
      
  }
}