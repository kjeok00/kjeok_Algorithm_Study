class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        int cal = Integer.valueOf(String.valueOf(a) + String.valueOf(b));
        answer = (cal >= 2 * a * b) ? cal : 2 * a * b;
        
        return answer;
    }
}