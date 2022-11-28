import java.util.Arrays;
public class twoSum
{
    public static int[] twoSum(int[] nums, int target)
    {
        for(int i=0;i<nums.length;i++)
        {
            for(int j=0;j<nums.length;j++)
            {
                if(nums[i]+nums[j]==target && i!=j)
                    return new int[]{i,j};
            }
        }
        return null;
    }
    public static void main(String[] args)
    {
        int[] nums = {2,3,4,0};
        int target = 3;
        System.out.println(Arrays.toString(twoSum(nums, target)));
    }

}
