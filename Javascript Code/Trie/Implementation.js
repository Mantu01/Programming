/*
  A trie (pronounced as "try") or prefix tree is a tree data structure used to efficiently store and retrieve keys in a dataset of strings. There are various applications of this data structure, such as autocomplete and spellchecker.

  Implement the Trie class:
    Trie() Initializes the trie object.
    void insert(String word) Inserts the string word into the trie.
    boolean search(String word) Returns true if the string word is in the trie (i.e., was inserted before), and false otherwise.
  boolean startsWith(String prefix) Returns true if there is a previously inserted string word that has the prefix prefix, and false otherwise.
*/
class Node{
  constructor(){
    this.links=new Array(26);
    this.flag=false;
  }
};
var Trie = function() {
  this.root=new Node();
};

/** 
 * @param -{string} word
 * @return -{void}
 */
Trie.prototype.insert = function(word) {
  let node=this.root;
  for(let i=0;i<word.length;i++){
    if(!node.links[word[i].charCodeAt(0)-'a'.charCodeAt(0)])
      node.links[word[i].charCodeAt(0)-'a'.charCodeAt(0)]=new Node();
    node=node.links[word[i].charCodeAt(0)-'a'.charCodeAt(0)];
  }
  node.flag=true;
};

/** 
 * @param -{string} word
 * @return -{boolean}
 */
Trie.prototype.search = function(word) {
  let node=this.root;
  
  for(let i=0;i<word.length;i++){
    if(!node.links[word[i].charCodeAt(0)-'a'.charCodeAt(0)])
      return false;
    node=node.links[word[i].charCodeAt(0)-'a'.charCodeAt(0)];
  }
  return node.flag;
};

/** 
 * @param -{string} prefix
 * @return -{boolean}
 */
Trie.prototype.startsWith = function(prefix) {
  let node=this.root;
  for(let i=0;i<prefix.length;i++){
    if(!node.links[prefix[i].charCodeAt(0)-'a'.charCodeAt(0)])
      return false;
    node=node.links[prefix[i].charCodeAt(0)-'a'.charCodeAt(0)];
  }
  return true;
};