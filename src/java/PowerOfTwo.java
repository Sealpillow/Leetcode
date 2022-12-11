package leetcode.Easy;

public class PowerOfTwo
{
    public static boolean isPowerOfTwo(int n)
    {
        int x=0;
        double result;
        while(true)
        {
            result=Math.pow(2,x++);
            if(result>n)
                return false;
            if(result==n)
                return true;
        }
    }

    public static void main(String[] args)
    {
        int n = 1;
        System.out.println(isPowerOfTwo(n));
    }
}
