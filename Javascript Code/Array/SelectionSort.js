const readline = require('readline');

const r1 = readline.Interface(process.stdin,process.stdout);

function insert(arr,k){
	let ans=k;
	for(let i=k+1;i<arr.length;i++){
		if(arr[i]<arr[ans])
			ans=i;
	}
	return ans;
}
function insertionSort(arr,n){
	if(n<2)
		return ;
	for(let i=0;i<n;i++){
		let idx=insert(arr,i);
		let temp=arr[i];
		arr[i]=arr[idx];
		arr[idx]=temp;
	}
}

r1.question("Enter all the elements of the array : ",(input)=>{
  const arr=input.split(' ').map(Number);
	insertionSort(arr,arr.length);
	console.log(`Sorted array : ${arr}`);
	r1.close();
});