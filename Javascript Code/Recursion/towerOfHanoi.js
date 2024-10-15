const readline = require('readline');

const r1 = readline.createInterface(process.stdin, process.stdout);

let stepCnt=0;

function towerOfHanoi(n,s,h,d){
  if(n===1){
    console.log(`Step  ${++stepCnt} :--  Move disk 1 from ${s} to ${d}`);
    return;
  }
  towerOfHanoi(n-1,s,d,h);
  console.log(`Step  ${++stepCnt} :-- Move disk ${n} from ${s} to ${d}`);
  towerOfHanoi(n-1,h,s,d);
}

r1.question('Enter the number of disk : ',(input)=>{
  let n=parseInt(input);
  towerOfHanoi(n,'Sourc','Helper','Destination');
  console.log('Tower of Hanoi is now solved');
  r1.close();
});