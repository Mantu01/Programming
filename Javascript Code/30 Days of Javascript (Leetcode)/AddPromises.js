/*
  Given two promises promise1 and promise2, return a new promise. promise1 and promise2 will both resolve with a number. The returned promise should resolve with the sum of the two numbers.
*/
var addTwoPromises = async function(promise1, promise2){
  return new Promise((resolve,reject)=>{
    let cnt=0;
    let val1,val2;
    promise1.then(result =>{
      val1=result;
      cnt++;
      if(cnt===2)
        resolve(val1+val2);
    }).catch(reject);
    promise2.then(result=>{
      val2=result;
      cnt++;
      if(cnt===2)
        resolve(val1+val2);
    }).catch(reject);
  });
};