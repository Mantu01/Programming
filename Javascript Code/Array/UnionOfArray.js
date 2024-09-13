/*
  Given two arrays arr1[] and arr2[], the task is to find the number of elements in the union between these two arrays.

  The Union of the two arrays can be defined as the set containing distinct elements from both arrays. If there are repetitions, then only one element occurrence should be there in the union.
  
  Note: Elements are not necessarily distinct.

  Expected Time Complexity: O(n+m)
  Expected Auxilliary Space: O(n+m)

  Constraints:
    1 ≤ arr1.size, arr2.size ≤ 105
    0 ≤ arr1[i], arr2[i] < 105
*/
class Solution {
  // Function to return the count of number of elements in the union of two arrays.
  doUnion(arr1, arr2) {
      // code here
      let size1=arr1.length, size2=arr2.length;
      
      let myMap=new Map();
      
      for(let i=0;i<size1; i++)
          myMap.set(arr1[i],true) // Value can be anything, we just need key
      
      for(let i=0; i<size2; i++)
          myMap.set(arr2[i],true);
          
      return myMap.size;
  }
}