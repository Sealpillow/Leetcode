package leetcode.Easy;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;

public class UniqueNumberOfOccurrences
{
    public static boolean uniqueOccurrences(int[] arr)
    {
        if(arr.length==1)
            return true;
        HashMap<Integer,Integer> set = new HashMap<>();
        for(int num:arr)
        {
            if(!set.containsKey(num))
                set.put(num,1);
            else
                set.put(num,set.get(num)+1);
        }
        List<Integer> list= new ArrayList<>();
        for(int key:set.keySet())
        {
            list.add(set.get(key));
        }
        Collections.sort(list);
        int prev = 0;
        for(int val:list)
        {
            if(val==prev)
                return false;
            prev = val;
        }
        return true;
    }
    public static void main(String[] args)
    {
        int[] arr = {1,2,2,1,1,3};
        System.out.println(uniqueOccurrences(arr));
    }
}
