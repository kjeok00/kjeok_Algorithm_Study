class Solution {
    public int solution(int a, int b) {
        int answer = 0;
        
        String temp1 = String.valueOf(a) + String.valueOf(b);
        String temp2 = String.valueOf(b) + String.valueOf(a);
        
        int sum1 = Integer.parseInt(temp1);
        int sum2 = Integer.parseInt(temp2);
        
        if(sum1 >= sum2)
            answer = sum1;
        else
            answer = sum2;
        
        return answer;
    }
}