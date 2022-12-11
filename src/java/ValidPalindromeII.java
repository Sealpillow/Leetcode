package leetcode.Easy;

import java.util.Arrays;

public class ValidPalindromeII
{
    public static boolean validPalindrome(String s)
    {
        int left=0,right=s.length()-1;
        while(left<right) // check normal way of palindrome
        {
            if(s.charAt(left)!=s.charAt(right)) //  eg. apapba when doesnt match  at left = 1(p) right = 4(b)
            {
                // break down into aapba , apapa -> when remove current left(p) right(b) pos char, Will it be palindrome?
                return isPalindrome(s,left+1,right)||isPalindrome(s,left,right-1);  // left+1, right-1 is to skip the comparing char as if it has been removed
            }
            left++;
            right--;
        }
        return true;
    }
    public static boolean isPalindrome(String s,int left,int right) // continues from when it detect mismatch to check the rest of the string while skipping the char
    {
        while(left<right)
        {
            if(s.charAt(left)!=s.charAt(right))
                return false;
            left++;
            right--;
        }
        return true;
    }

    public static void main(String[] args)
    {
        String s = "aba"; //"acba"
        System.out.println(validPalindrome(s));
    }

}
