// Given an array of integers, return the smallest element.

function SmallestNum(nums) {
  let ans=nums[0];
  for(let i=1;i<nums.length;i++){
    if(ans>nums[i])
      ans=nums[i];
  }
  return ans;
}