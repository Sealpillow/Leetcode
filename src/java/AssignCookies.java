package leetcode.Easy;

import java.util.Arrays;

public class AssignCookies
{
    public static int findContentChildren(int[] g, int[] s)
    {
        // at most 1 cookie per child
        int count=0;
        Arrays.sort(g);
        Arrays.sort(s);
        for(int c:s)
        {
            if(c>=g[count])
                count++;
            if(count==g.length)
                return count;
        }
        return count;
    }
    public static void main(String[] args)
    {
        int[] g = {1,2,3};
        int[] s = {1,2};
        System.out.println(findContentChildren(g,s));
    }

}
