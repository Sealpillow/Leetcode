package leetcode.Easy;

import java.util.HashMap;

public class RomanToInteger
{
    public static int romanToInt(String s)
    {
        char[] set = s.toCharArray();
        HashMap<Character,Integer> map = new HashMap<>();
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);
        int sum = 0;
        for(int i=0;i<set.length;i++)
        {
            if(i== set.length-1)
                sum+= map.get(set[i]);
            else
            {
                if(map.get(set[i])<map.get(set[i+1])) // I < V/X -> 1 < 5/10 -> IV -> 5-1 = 4
                {
                    sum+=map.get(set[i+1])-map.get(set[i]);
                    i++;
                }
                else // I = I -> II -> sum+=1
                    sum+= map.get(set[i]);
            }
        }
        return sum;
    }
    public static void main(String[] args)
    {
        String s = "VII";
        System.out.println(romanToInt(s));
    }
}
