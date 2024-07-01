const n=parseInt(prompt("Enter the term : "));
function fib(a) {
  if(a==1 || a==2)
    return 1;
  return fib(a-1)+fib(a-2);
}
console.log(`${n}th fibonacci term = ${fib(n)}`);