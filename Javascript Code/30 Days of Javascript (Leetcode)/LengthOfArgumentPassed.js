/*
  Write a function argumentsLength that returns the count of arguments passed to it.
*/
var argumentsLength = function(...args) {
  var ans=0;
  for(let i=0;args[i]!==undefined;i++)
    ans++;
  return ans;
};