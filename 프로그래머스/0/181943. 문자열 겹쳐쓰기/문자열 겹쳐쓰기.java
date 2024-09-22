
    class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        StringBuilder sb = new StringBuilder();
        // s 이전 부분 추가
        sb.append(my_string.substring(0, s));
        // overwrite_string 추가
        sb.append(overwrite_string);
        // s + overwrite_string.length() 이후 부분 추가
        sb.append(my_string.substring(s + overwrite_string.length()));
        
        return sb.toString();  // 최종 문자열 반환
    }
}
