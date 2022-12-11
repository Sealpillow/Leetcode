package leetcode.Easy;

public class CanPlaceFlowers
{
    public static boolean canPlaceFlowers(int[] flowerbed, int n)
    {
        int extra=0;
        for(int i=0;i<flowerbed.length;i++)
        {
            if(flowerbed[i]==0)
            {
                if(i==0)
                {
                    // flowerbed[i+1]==0
                    // {0,0,1} -> {1,0,1}
                    // {0,0,0} -> {1,0,0}
                    //
                    // i==flowerbed.length-1
                    // {0,0}
                    if(i==flowerbed.length-1||flowerbed[i+1]==0)
                    {
                        flowerbed[i]=1;
                        extra++;
                    }
                }
                else
                {
                    // {1,0,0,0} -> {1,0,1,0}  before and next  (flowerbed[i-1]==0 && flowerbed[i+1])
                    // {0,1,0,0} -> {0,1,0,1}  if last index (flowerbed[i-1]==0 && i==flowerbed.length-1)
                    if(flowerbed[i-1]==0&&(i==flowerbed.length-1||flowerbed[i+1]==0))
                    {
                        flowerbed[i]=1;
                        extra++;
                    }
                }
            }
        }
        return n<= extra;
    }
    public static void main(String[] args)
    {
        int[] flowerbed = {0,0,0};
        int n = 2;
        System.out.println(canPlaceFlowers(flowerbed,n));
    }
}
