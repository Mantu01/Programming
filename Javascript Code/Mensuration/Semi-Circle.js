const PI=3.14;
let r=parseInt(prompt("Enter radius of semi-circle : "));
console.log(`Area = ${PI*r*r/2}`);
console.log(`Circumference = ${(PI*r+r).toFixed(2)}`);