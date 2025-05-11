import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.next();
        StringBuilder str = new StringBuilder();

        for (int i = 0; i < input.length(); i++) {
            char temp = input.charAt(i);

            if (Character.isUpperCase(temp))
                str.append(Character.toLowerCase(temp));
            else if (Character.isLowerCase(temp))
                str.append(Character.toUpperCase(temp));
            else
                str.append(temp);
        }
        sc.close();
        
        System.out.println(str);
    }
}