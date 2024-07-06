function merge(arr,i,j) {
  let temp =[];
  let mid=Math.floor((i+j)/2);
  let L=i,R=mid+1;
  while(L<=mid && R<=j){
    if(arr[L]<arr[R])
      temp.push(arr[L++]);
    else
      temp.push(arr[R++]);
  }
  while(L<=mid)
    temp.push(arr[L++]);
  while(R<=j)
    temp.push(arr[R++]);
  for(let k=i;k<=j;k++)
    arr[k]=temp[k-i];
}
function ms(arr,i,j) {
  if(i>=j)
    return;
  let mid=Math.floor((i+j)/2);
  ms(arr,i,mid);
  ms(arr,mid+1,j);
  merge(arr,i,j);
}
function mergeSort(arr) {
  ms(arr,0,arr.length-1);
}