const readline = require('readline');

const r1 = readline.Interface(process.stdin,process.stdout);

function Select(arr,k){
	let ans=k;
	for(let i=k+1;i<arr.length;i++){
		if(arr[i]<arr[ans])
			ans=i;
	}
	return ans;
}
function SelectionSort(arr,n){
	if(n<2)
		return ;
	for(let i=0;i<n;i++){
		let idx=Select(arr,i);
		let temp=arr[i];
		arr[i]=arr[idx];
		arr[idx]=temp;
	}
}

r1.question("Enter all the elements of the array : ",(input)=>{
  const arr=input.split(' ').map(Number);
	SelectionSort(arr,arr.length);
	console.log(`Sorted array : ${arr}`);
	r1.close();
});