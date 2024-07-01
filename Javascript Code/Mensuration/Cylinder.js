const PI=3.14;
let r=parseInt(prompt("Enter radius of the cylinder : "));
let h=parseInt(prompt("Enter height of the cylinder : "));
console.log(`Volume : ${(PI*r*r*h).toFixed(2)} cubic units.`);
console.log(`Lateral Suface Area : ${(2*PI*r*h).toFixed(2)} sq units.`);
console.log(`Total Surface Area : ${(2*PI*r*(r+h)).toFixed(2)} sq units.`);