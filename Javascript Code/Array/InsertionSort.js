const readline = require('readline');
const r1=readline.Interface(process.stdin,process.stdout);
r1.question("Enter all the elements of array : ",(input)=>{
  const arr=input.split(' ').map(Number);
  InsertionSort(arr,arr.length);
  console.log(`Sorted array : ${arr}`);
  r1.close();
});

function insert(arr,i){
  let ele=arr[i];
  i--;
  while(i>=0 && arr[i]>ele){
    arr[i+1]=arr[i];
    i--;
  }
  arr[i+1]=ele;
}

function InsertionSort(arr,n){
  if(n<2)
    return ;
  for(let i=1;i<n;i++)
    insert(arr,i);
}