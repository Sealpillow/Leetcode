package leetcode.Easy;

import java.util.HashMap;
import java.util.Map;

public class ContainsDuplicate
{
    public static boolean containsDuplicate(int[] nums)
    {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int n:nums)
        {
            if(!map.containsKey(n))
                map.put(n,1);
            else
                return true;
        }
        return false;
    }
    public static void main(String[] args)
    {
        int[] nums = {4,1,2,1,2};
        System.out.println(containsDuplicate(nums));
    }
}
