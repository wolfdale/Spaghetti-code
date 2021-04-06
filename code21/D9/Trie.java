class WordDictionary {
    
    private TrieNode root;
    
    class TrieNode {
        public TrieNode[] link;
        private boolean isEnd;
        private final int R = 26;
        
        public TrieNode(){
            link = new TrieNode[R];
        }
        
        public void setEnd(){
            isEnd = true;
        }
        
        public boolean getEnd(){
            return isEnd;
        }
        
        public boolean containsKey(char ch) {
            return link[ch-'a'] != null;
        }
        
        public void put(char ch, TrieNode node){
            link[ch-'a'] = node;
        }
        
        public TrieNode get(char ch){
            return link[ch-'a'];
        }
            
    }
    
    
    /** Initialize your data structure here. */
    public WordDictionary() {
        root = new TrieNode();
    }
    
    public void addWord(String word) {
        TrieNode node = root;
        
        for(int i=0; i<word.length(); i++) {
            char cur = word.charAt(i);
            
            if(!node.containsKey(cur)){
                node.put(cur, new TrieNode());             
            }
            node = node.get(cur);
        }
        
        node.setEnd();
        
    }
    
    
    public boolean searchPre(String word, int pos, TrieNode node) {
        if(pos == word.length()) return node.getEnd();
        char curr = word.charAt(pos);
        
        if(curr == '.') {
            for(int i=0; i< node.link.length; i++){
                if(node.link[i] != null){
                    if(searchPre(word, pos+1, node.link[i])){
                        return true;
                    }
                }
            }
        }
        else {
            return node.containsKey(curr) && searchPre(word, pos+1, node.get(curr));
        }
        
        return false;
    }
    
    
    public boolean search(String word) {
        TrieNode node = root;
        return  searchPre(word, 0, root);
        
    }
}

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * boolean param_2 = obj.search(word);
 */
