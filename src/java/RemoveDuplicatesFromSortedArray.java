package leetcode.Easy;

import java.util.Arrays;

public class RemoveDuplicatesFromSortedArray
{
    public static int removeDuplicates(int[] nums)
    {
        if(nums.length==1)
            return 1;
        int replace = 101,repeat = 0;
        for(int i=1;i<nums.length;i++)
        {
            if(nums[i]==nums[i-1])
            {
                nums[i-1] = replace;
                repeat++;
            }
        }
        int j,temp;
        for(int i=1;i<nums.length;i++)
        {
            j=i;
            while(j>0 && nums[j]<nums[j-1])
            {
                temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = temp;
                j--;
            }
        }
        System.out.println(Arrays.toString(nums));
        return nums.length-repeat;
    }
    public static void main(String[] args)
    {
        int[] nums = {0,0,1,1,1,2,2,3,3,4};
        System.out.println(removeDuplicates(nums));
    }
}
