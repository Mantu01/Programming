const readline = require('readline');
const r1=readline.createInterface(process.stdin,process.stdout);
r1.question("Enter number of vertices : ",(input)=>{
  let v=parseInt(input);
  let cnt=0;
  let adjList=Array.from({length:v+1},()=>[]);
  function nodeInput(){
    if(cnt<v){
      r1.question(`Enter node on vertex ${cnt+1} : `,(nodes)=>{
        cnt++;
        let nodeArr=nodes.split(' ').map(Number);
        adjList[nodeArr[0]].push(nodeArr[1]);
        adjList[nodeArr[1]].push(nodeArr[0]);
        nodeInput();
      });
    }
    else{
      r1.close();
      console.log("Given graph :" );
      console.log(adjList);
    }
  }
  nodeInput();
});