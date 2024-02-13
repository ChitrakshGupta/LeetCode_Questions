class Solution {
     public boolean isPalindrome(String s) {
          // code here
        
        String S="";
        for(int i=0; i<s.length(); i++){
            if(Character.isLetter(s.charAt(i)) || Character.isDigit(s.charAt(i))  ){
                S=S+s.charAt(i);
            }
        }
        S=S.toUpperCase();
        for(int i = 0; i<S.length()/2; i++){
            if(S.charAt(i) != S.charAt(S.length() - i - 1)){
                return false;
            }
        }
        
        return true;
        
    }
    public String firstPalindrome(String[] words) {
        
        for (int i=0; i<words.length; i++){
            if(isPalindrome(words[i])){
                return words[i];
            }
        }
        return "";
        
    }
}