let l=parseInt(prompt("Enter the length of edge of cuboid : "));
let b=parseInt(prompt("Enter the breadth of edge of cuboid : "));
let h=parseInt(prompt("Enter the height of edge of cuboid : "));
console.log(`Volume : ${l*b*h} cubic unit.`);
console.log(`Lateral Surface Area : ${2*(l*h+b*h)} sq unit.`);
console.log(`Total Surface Area : ${2*(l*b+l*h+b*h)} sq unit.`);