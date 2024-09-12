class Solution {
  
  search(k, arr) {
      // code here
      for(let i=0;i<arr.length;i++){
          if(arr[i]==k)
              return i+1;     // Array is 0-based index and we have to return position
      }
      return -1;
  }
}