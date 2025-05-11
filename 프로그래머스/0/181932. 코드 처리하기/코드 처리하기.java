class Solution {
    public String solution(String code) {
        String answer = "";
        Boolean mode = false;
        StringBuilder sb = new StringBuilder();
        sb.append(code);

        StringBuilder ret = new StringBuilder();
        
        for(int i = 0; i < code.length(); i++) {
            char temp = sb.charAt(i);
            
            if (temp == '1') {
                mode = !mode;
                continue;
            }
            
            if (mode == false && i % 2 == 0) {
                ret.append(temp);
            }
            else if (mode == true && i % 2 == 1) {
                ret.append(temp);
            }
        }
        
        answer = ret.toString();
        if (answer.equals(""))
            answer = "EMPTY";
        
        return answer;
    }
}