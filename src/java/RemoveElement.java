package leetcode.Easy;

import java.util.Arrays;

public class RemoveElement
{
    public static int removeElement(int[] nums, int val)
    {
        int temp,i = 0,last = nums.length-1; // let last index to store next possible val index,
        while(i!=last+1) // ends once it reach known element
        {
            if(nums[i]==val) // once current element is val, swap the value with the next possible val index
            {
                temp = nums[i];
                nums[i] = nums[last];
                nums[last] = temp;
                last--;      // decrement last to the next possible val index
            }
            else // if the current element is not val move to next index
                i++;
        }
        return i;
    }
    public static void main(String[] args)
    {
        int[] nums = {};
        int val = 2;
        System.out.println(removeElement(nums,val));
    }
}
