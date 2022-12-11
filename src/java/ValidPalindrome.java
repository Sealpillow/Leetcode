package leetcode.Easy;

public class ValidPalindrome
{
    public static boolean isPalindrome(String s)
    {
        StringBuilder reverse = new StringBuilder();
        StringBuilder copy = new StringBuilder();
        char c;
        for(int i=0;i<s.length();i++)
        {
            c = Character.toLowerCase(s.charAt(i));
            if(c>='a'&& c <='z'||c>='0'&& c <='9')
            {
                copy.append(c);
                reverse.append(c);
            }

        }
        //System.out.println(copy+ "\n" +reverse.reverse());
        return copy.toString().compareTo(reverse.reverse().toString())==0;
    }
    public static void main(String[] args)
    {
        String s = "0P";
        System.out.println(isPalindrome(s));
    }
}
