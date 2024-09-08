/*
  You are given a string s. You need to reverse the string.

  Your Task:
    You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

  Expected Time Complexity: O(|S|).
  Expected Auxiliary Space: O(1).

  Constraints:
    1 <= |s| <= 10000
  
*/
class Solution {
  reverseWord(str){
    let ans="";
    for(let i=str.length-1;i>=0;i--)
      ans+=str.charAt(i);
    return ans;
  }
}