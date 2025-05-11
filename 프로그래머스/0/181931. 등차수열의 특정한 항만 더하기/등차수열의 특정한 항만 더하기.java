class Solution {
    public int solution(int a, int d, boolean[] included) {
        int answer = 0;
        int range = included.length;
        int[] temp = new int[range];
        
        for (int i = 0 ; i < range; i++) {
            temp[i] = a + (d * i);
        }
        
        for (int i = 0; i < range; i++) {
            if (included[i] == false)
                continue;
            
            answer += temp[i];
        }
        
        return answer;
    }
}