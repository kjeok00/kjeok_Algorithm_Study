import java.util.Scanner;

public class Solution {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        
        for (int i = 0; i < input.length(); i++) {
            char temp = input.charAt(i);
            
            System.out.println(temp);
        }
    }
}