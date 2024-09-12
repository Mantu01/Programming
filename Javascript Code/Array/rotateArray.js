class Solution {
  leftRotate(arr, d) {
      // code here
      let n=arr.length;
      if(n==d)    return;
      for(let i=0,j=n-1;i<j;i++,j--){     // Reversing all the elements
          let temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
      }
      for(let i=0,j=n-d-1;i<j;i++,j--){     // Reversing first n-d elements in reversed array
          let temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
      }
      for(let i=n-d,j=n-1;i<j;i++,j--){
          let temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
      }
  }
}