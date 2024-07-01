const n=parseInt(prompt("Enter the number : "));
let num=Math.abs(n);
let reverseNum=0;
for(let i=num;i>0;i=Math.floor(i/10))
  reverseNum=reverseNum*10+i%10;
if(reverseNum==num)
  console.log(`${n} is a pallindrome number.`);
else
  console.log(`${n} is not a pallindrome number.`);