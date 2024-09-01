const readline = require('readline');
const r1=readline.createInterface(process.stdin,process.stdout);
r1.question("Enter number of vertices : ",(input)=>{
  let v=parseInt(input);
  let cnt=0;
  let adjMat=Array.from({length:v},()=>new Array(v).fill(0));
  function nodeInput(){
    if(cnt<v){
      r1.question(`Enter node on vertex ${cnt+1} : `,(nodes)=>{
        cnt++;
        let nodeArr=nodes.split(' ').map(Number);
        adjMat[nodeArr[0]][nodeArr[1]]=1;
        adjMat[nodeArr[1]][nodeArr[0]]=1;
        nodeInput();
      });
    }
    else{
      r1.close();
      console.log("Given graph :" );
      console.log(adjMat);
    }
  }
  nodeInput();
});