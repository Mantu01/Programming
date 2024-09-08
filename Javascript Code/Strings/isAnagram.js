/*
  Given two strings a and b consisting of lowercase characters. The task is to check whether two given strings are an anagram of each other or not. An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, act and tac are an anagram of each other. Strings a and b can only contain lower case alphabets.

  Note:-
  If the strings are anagrams you have to return True or else return False
  |s| represents the length of string s.

  Your Task:
  You don't need to read input or print anything. Your task is to complete the function isAnagram() which takes the string a and string b as input parameter and check if the two strings are an anagram of each other. The function returns true if the strings are anagram else it returns false. The driver code will print YES is the function returns true, else print NO.

  Expected Time Complexity:O(|a|+|b|).
  Expected Auxiliary Space: O(Number of distinct characters).

  Constraints:
    1 ≤ |a|,|b| ≤ 10^5
*/
class Solution {
  isAnagram(a, b) {
    if(a.length!=b.length)
      return false;
    let alp=Array.from({length:26},()=>0);
    for(let i=0;i<a.length;i++)
      alp[a.charCodeAt(i)-97]++;
    for(let i=0;i<b.length;i++)
      alp[b.charCodeAt(i)-97]--;
    for(let i=0;i<26;i++){
      if(alp[i]!=0)
        return false;
    }
    return true;
  }
}