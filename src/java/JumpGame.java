package leetcode.Medium;

public class JumpGame
{
    public static boolean canJump(int[] nums)
    {
        // A greedy algorithm is an approach for solving a problem
        // by selecting the best option available at the moment
        int prevMax = 0,curMax;
        for(int pos=0;pos<nums.length;pos++)
        {
            if(pos>prevMax) // if prevMax possible postion cant reach current position
                return false;
            prevMax = Math.max(prevMax,pos + nums[pos]);
        }
        return true; // prevMax able to reach the last pos
    }
    public static void main(String[] args)
    {
        int[] nums = {2,5,0,0};
        System.out.println(canJump(nums));
    }
}
