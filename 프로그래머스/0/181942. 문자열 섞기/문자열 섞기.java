class Solution {
    public String solution(String str1, String str2) {
        String answer = "";
        StringBuilder sb = new StringBuilder();
        int length = str1.length();
        
        for (int i = 0; i < length; i++) {
            char a = str1.charAt(i);
            char b = str2.charAt(i);
            
            sb.append(a);
            sb.append(b);
        }
        answer = sb.toString();
        
        return answer;
    }
}