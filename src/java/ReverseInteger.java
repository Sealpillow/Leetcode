package leetcode.Medium;

public class ReverseInteger
{
    public static int reverse(int x)
    {
        int temp = x,r=0,count=0;
        while(temp!=0)
        {
            temp/=10;
            count++;
        }
        temp = x;
        while(temp!=0)
        {
            r+= Math.abs(temp%10)*Math.pow(10,--count);
            temp/=10;
        }
        System.out.println(r);
        if(r>=Math.pow(2,31)-1)
            return 0;
        if(x<0)
            return -r;
        return r;
    }
    public static void main(String[] args)
    {
        int x = 1534236469;
        System.out.println(reverse(x));
    }
}
