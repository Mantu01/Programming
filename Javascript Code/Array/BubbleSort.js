class Solution
{
   //Function to sort the array using bubble sort algorithm.
   bubbleSort(arr,n){
    //code here
    
    for(let i=0; i<n; i++){
        
        for(let j=0; j<n-1-i; j++){
            
            if(arr[j]>arr[j+1]){    // Swapping
                
                let temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
   }
    
}
