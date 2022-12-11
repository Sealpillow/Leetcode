package leetcode.Easy;

import java.util.HashMap;
import java.util.Map;

public class SingleNumber
{
    public static int singleNumber(int[] nums)
    {
        HashMap<Integer,Integer> map = new HashMap<>();
        for(int n:nums)
        {
            if(!map.containsKey(n))
                map.put(n,1);
            else
                map.put(n,2);
        }
        for(Map.Entry<Integer,Integer> var:map.entrySet())
        {
            if(var.getValue()==1)
                return var.getKey();
        }
        return 0;
    }
    public static void main(String[] args)
    {
        int[] nums = {4,1,2,1,2};
        System.out.println(singleNumber(nums));
    }
}
