package leetcode.Easy;

public class PalindromeNumber // without converting to string
{
    public static boolean isPalindrome(int x)
    {
        if(x<0)
            return false;
        long temp=x,original=x;
        int p=0;
        while(temp!=0)
        {
            temp/=10;
            p++;
        }
        // temp = 0
        for(int i=p;i>=0;i--)
        {
            temp += (original%10)*Math.pow(10,i-1);
            original/=10;
        }
        return temp==x;
    }
    public static void main(String[] args)
    {
        int x = 2147483647;
        System.out.println(isPalindrome(x));
    }
}
