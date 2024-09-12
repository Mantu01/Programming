class Solution {
  rotate(arr) {
      // code here
      let n=arr.length;
      let temp=arr[n-1];
      for(let i=n-1;i>0;i--){     // Shifting every element one index to right side
          arr[i]=arr[i-1]
      }
      arr[0]=temp;
  }
}