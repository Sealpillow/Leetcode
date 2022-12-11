package leetcode.Easy;

public class SqrtX
{
    public static int mySqrt(int x)
    {
        long i=0;
        long total=0;
        while(total<=x)
        {
            total = i*i;
            i++;
        }
        return (int)i-2;
    }
    public static void main(String[] args)
    {
        int x = 8;
        System.out.println(mySqrt(x));
    }
}
