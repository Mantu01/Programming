const readline = require('readline');
const r1=readline.Interface(process.stdin,process.stdout);
r1.question("Enter Number : ",(input)=>{
  let n=parseInt(input);
  print(n);
  r1.close();
});
function print(n){
  let cnt=1;
  let isZero=true;
  let toShow="";
  for(let i=1;i<=n;i++){
    toShow="";
    for(let j=n-i;j<n;j++)
      toShow+=" ";
    for(let j=1;j<=n+1-i;j++){
      if(cnt<10)
        toShow+=cnt+" ";
      else{
        if(isZero)
          toShow+="0 "
        else
          toShow+="9 ";
        isZero=!isZero;
      }
      cnt++;
    }
    console.log(toShow);
  }
  cnt-=2;
  for(let i=2;i<=n;i++){
    toShow="";
    for(let j=i;j<=n;j++)
      toShow+=" ";
    for(let j=n+1-i;j<=n;j++){
      if(cnt<10)
        toShow+=cnt+" ";
      else{
        if(isZero)
          toShow+="0 ";
        else
          toShow+="9 ";
        isZero=!isZero;
      }
      cnt--;
    }
    console.log(toShow);
  }
}