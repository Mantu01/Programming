/*
  Given a string S, check if it is palindrome or not.

  Your Task:
  You don't need to read input or print anything. Complete the function isPalindrome()which accepts string S and returns an integer value 1 or 0.

  Expected Time Complexity: O(Length of S)
  Expected Auxiliary Space: O(1)

  Constraints:
    1 <= Length of S<= 2*10^5
*/
class Solution {
  isPalindrome(S){
    let n=S.length;
    for(let i=0;i<n;i++){
      if(S.charAt(i)!==S.charAt(n-1-i))
        return false;
    }
    return true;
  }
}