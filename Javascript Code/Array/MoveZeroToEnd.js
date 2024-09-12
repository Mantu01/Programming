class Solution {
  pushZerosToEnd(arr,n){
      //code here
      let k=0;
      for(let i=0;i<n;i++){
          if(arr[i] != 0){
              let temp=arr[i];
              arr[i]=arr[k];
              arr[k]=temp;
              k++;
          }
      }
  }
}