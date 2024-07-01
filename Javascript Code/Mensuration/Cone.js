const PI=3.14;
let r=parseInt(prompt("Enter radius of the cone : "));
let h=parseInt(prompt("Enter height of the cone : "));
let l=Math.sqrt(r*r+h*h);
console.log(`Volume : ${(PI*r*r*h/3).toFixed(2)} cubic units.`);
console.log(`Lateral Suface Area : ${(PI*r*l).toFixed(2)} sq units.`);
console.log(`Total Surface Area : ${(PI*r*(l+r)).toFixed(2)} sq units.`);