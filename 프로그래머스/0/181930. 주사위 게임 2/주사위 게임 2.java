class Solution {
    public int cal1(int a, int b, int c) {
        return a + b + c;
    }
    
    public int cal2(int a, int b, int c) {
        return (a + b + c) * (a*a + b*b + c*c);
    }
    
    public int cal3(int a, int b, int c) {
        return (a+b+c) * (a*a + b*b + c*c) * (a*a*a + b*b*b + c*c*c);
    }
    
    public int solution(int a, int b, int c) {
        int answer = 0;
        
        if (a != b && a != c && b != c)
            answer = cal1(a,b,c);
        else if (a == b && b == c)
            answer = cal3(a,b,c);
        else
            answer = cal2(a,b,c);
        
        
        return answer;
    }
}