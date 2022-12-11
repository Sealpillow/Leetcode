package leetcode.Easy;

public class ClimbingStairs
{
    public static int climbStairs(int n)
    {
        if(n==0)
            return 0;
        if(n==1)
            return 1;
        if(n==2)
            return 2;
        int prevOneStep = 2;
        int prevTwoSteps = 1;
        int all_ways = 0;

        for(int i=2; i<n; i++){
            all_ways = prevOneStep + prevTwoSteps;
            prevTwoSteps = prevOneStep;
            prevOneStep = all_ways;
        }
        return all_ways;
    }
    public static void main(String[] args)
    {
        int n=35;
        System.out.println(climbStairs(n));
    }
}
