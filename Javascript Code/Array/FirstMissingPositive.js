/*
  Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.
*/

var firstMissingPositive = function(nums) {
  var map=new Map();
  for(var i=0;i<nums.length;i++)
    map.set(nums[i],1);
  var i=1;
  while(map.has(i))
    i++;
  return i;
};