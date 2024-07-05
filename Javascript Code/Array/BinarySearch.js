/*
  Given an non-decreasing sorted array of integers and key value return the index at which the element is present.
  if the element is not present return -1.
  
  Exprcted Time Complexity : O(log n);
  Exprcted Space Complexity : O(!) ;
*/

function BinarySearch(nums,key) {
  let i=0,j=nums.length-1;
  while(i<=j){
    let mid=Math.ceil((i+j)/2);
    if(nums[mid]===key)
      return mid;
    else if(nums[mid]>key)
      j=mid-1;
    else
      i=mid+1;
  }
  return -1;
}