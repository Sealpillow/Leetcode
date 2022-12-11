package leetcode.Easy;

public class LengthOfLastWord
{
    public static int lengthOfLastWord(String s)
    {
        char[] set = s.toCharArray();
        int count = 0;
        boolean found = false;
        for(int i = set.length-1;i>=0;i--)
        {
            if(set[i]!=' ')
            {
                count++;
                found = true;
            }
            if(found && set[i]==' ')
            {
                break;
            }
        }
        return count;
    }
    public static void main(String[] args)
    {
        String s = "moon";
        System.out.println(lengthOfLastWord(s));
    }
}
