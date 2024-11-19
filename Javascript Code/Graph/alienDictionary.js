/**
  Given a sorted dictionary of an alien language having N words and k starting alphabets of standard dictionary. Find the order of characters in the alien language. If no valid ordering of letters is possible, then return "".
  
  Note: Many orders may be possible for a particular test case, thus you may return any valid order and output will be 1 if the order of string returned by the function is correct else 0 denoting incorrect string returned.

  Expected Time Complexity: O(n * |s| + k)
  Expected Auxillary Space: O(k)

  Constraints:
    - 1 ≤ n≤ 104
    - 1 ≤ k ≤ 26
    - 1 ≤ Length of words ≤ 50

*/

class Solution {

  topologicalSort(adj) {
    let V=adj.length;
    let inDegree=Array(V).fill(0);
    let q=[];
    let topo=[];
    let head=0,tail=0;
    for(let i=0;i<V;i++){
      for(let neighbor of adj[i])
        inDegree[neighbor]++;
    }
    for(let i=0;i<V;i++){
      if(inDegree[i]===0){
        q.push(i);
        tail++;
      }
    }
    while(head<tail){
      let temp=q[head++];
      topo.push(temp);
      for(let it of adj[temp]){
        inDegree[it]--;
        if(inDegree[it]===0){
          q.push(it);
          tail++;
        }
      }
    }
    return topo;
  }
  findOrder(dict, n, k) {
    let adj=Array.from({length:k},()=>[]);
    for(let i=0;i<n-1;i++){
      let str1=dict[i];
      let str2=dict[i+1];
      let j=0;
      while(j<str1.length && j<str2.length){
        if(str1[j]!==str2[j]){
          adj[str1.charCodeAt(j)-97].push(str2.charCodeAt(j)-97);
          break;
        }
        j++;
      }
    }
    let topo=this.topologicalSort(adj);
    if(topo.length<k)
        return '';
    let ans="";
    for(let i=0;i<k;i++){
      ans+=String.fromCharCode(topo[i]+97);
    }
    return ans;
  }
}