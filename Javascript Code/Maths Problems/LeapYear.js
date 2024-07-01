const n=parseInt(prompt("Enter the year : "));
if((n%4==0 && n%100!=0) || (n%100==0 && n%400==0))
  console.log(`${n} is a leap year.`)
else
  console.log(`${n} is not a leap year.`)