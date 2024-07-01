const n=parseInt(prompt("Enter the number : "));
let digitSum=0;
for(let i=n;i>0;i=Math.floor(i/10))
  digitSum+=i%10;
console.log(`Sum of digits of ${n} is ${digitSum}`);