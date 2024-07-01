let a=parseInt(prompt("Enter the first side of triangle : "));
let b=parseInt(prompt("Enter the second side of triangle : "));
let c=parseInt(prompt("Enter the third side of triangle : "));
let s=(a+b+c)/2;
console.log(`Area : ${Math.sqrt(s*(s-a)*(s-b)*(s-c)).toFixed(2)} sq unit.`);
console.log(`Perimeter : ${a+b+c} unit.`);