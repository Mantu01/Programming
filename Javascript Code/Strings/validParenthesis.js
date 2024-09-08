/*
  Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
  For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

  Expected Time Complexity: O(|x|)
  Expected Auixilliary Space: O(|x|)

  Constraints:
    1 ≤ |x| ≤ 105
*/
class Solution{
  ispar(x){
    let st=[];
    for(let i=0;i<x.length;i++){
      let ch=x.charAt(i);
      if(ch===')' || ch===']' || ch==='}'){
        if(!st.length)
          return false;
        let temp=st.pop();
        if((temp==='(' && ch!==')' ) || (temp==='[' && ch!==']') || (temp==='{' && ch!=='}'))
          return false;
      }
      else
        st.push(ch);
    }
    return st.length===0;
  }
}