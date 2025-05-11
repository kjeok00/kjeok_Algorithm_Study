import java.util.Scanner;

public class Solution {
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int input = sc.nextInt();
        String result = "";
        
        if (input % 2 == 0)
            result = "even";
        else
            result = "odd";
        
        System.out.println(input + " is " + result);
    }
}