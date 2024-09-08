/*
  Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

  Your Task:
  You dont need to read input or print anything. Complete the function reverseWords() which takes string S as input parameter and returns a string containing the words in reversed order. Each word in the returning string should also be separated by '.' 

  Expected Time Complexity: O(|S|)
  Expected Auxiliary Space: O(|S|)

  Constraints:
    1 <= |S| <= 105
*/
class Solution {
  reverseWords(s){
    let ans="";
    let word="";
    let i=0;
    while(i<s.length){
      if(s.charAt(i)==='.')
        ans=s.charAt(i++)+ans;
      else{
        while(i<s.length && s.charAt(i)!=='.'){
          word+=s.charAt(i++);
        }
        ans=word+ans;
        word="";
      }
    }
    return ans;
  }
}