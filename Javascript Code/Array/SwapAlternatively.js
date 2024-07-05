// Given an array of integers, swap the alternate elements

function SwapElements(nums) {
  for(let i=1;i<nums.length;i+=2){
    let temp=arr[i-1];
    arr[i-1]=arr[i];
    arr[i]=temp;
  }
}
let arr=[1,2,3,4,5,6];
SwapElements(arr);
console.log(arr);