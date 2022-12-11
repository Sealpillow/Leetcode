package leetcode.Easy;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;

public class twosumVal
{

    public static int[] twoSum(int[] nums, int target)
    {
        ArrayList<Integer> set = new ArrayList<>();
        bt(set,nums,target);
        return set.stream().mapToInt(Integer::intValue).toArray();
    }

    public static boolean isSafe(ArrayList<Integer> arr,int target)
    {
        int sum=0,prev=Integer.MAX_VALUE;
        Collections.sort(arr);
        for (int num : arr)
        {
            sum += num;
            if(num==prev || sum>target)
                return false;
            prev= num;
        }
        return true;
    }
    public static int sum(ArrayList<Integer> arr)
    {
        int sum=0;
        for (int num : arr)
            sum += num;
        return sum;
    }
    public static boolean bt(ArrayList<Integer> set, int[] nums, int target)
    {
        if(sum(set)==target)
            return true;
        for (int num : nums)
        {
            if(isSafe(set, target))
            {
                set.add(num);
                if (bt(set, nums, target))
                    return true;
                set.remove(set.size()-1);
            }
        }
        return false;
    }
    public static void main(String[] args)
    {
        int[] sums = {2,7,11,15};
        int target = 17;
        System.out.println(Arrays.toString(twoSum(sums, target)));
    }

}
