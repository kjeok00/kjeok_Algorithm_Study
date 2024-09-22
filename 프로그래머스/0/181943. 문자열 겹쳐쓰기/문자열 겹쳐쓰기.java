class Solution {
    public String solution(String my_string, String overwrite_string, int s) {
        StringBuilder sb = new StringBuilder();
        // my_string의 s 이전 부분을 추가
        sb.append(my_string.substring(0, s));
        // overwrite_string 전체를 추가
        sb.append(overwrite_string);
        // my_string의 s + overwrite_string.length() 이후 부분을 추가
        sb.append(my_string.substring(s + overwrite_string.length()));
        
        return sb.toString();  // 최종 문자열을 반환
    }
}
