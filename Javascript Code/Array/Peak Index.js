/*
  A peak element is an element that is strictly greater than its neighbors.

  Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

  You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

  You must write an algorithm that runs in O(log n) time.
*/
var findPeakElement = function(nums) {
  if(nums.length===1 || nums[0]>nums[1])
    return 0;
  let n=nums.length;
  if(nums[n-1]>nums[n-2])
    return n-1;
  let i=0,j=n-1;
  while(i<=j){
    let mid=Math.floor((i+j)/2);
    if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1])
      return mid;
    else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1])
      i=mid+1;
    else
      j=mid;
  }
};