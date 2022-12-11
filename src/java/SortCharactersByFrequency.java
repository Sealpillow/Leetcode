package leetcode.Medium;

import java.util.*;

public class SortCharactersByFrequency
{
    public static String frequencySort(String s)
    {
        char[] word = s.toCharArray();
        HashMap<Character,Integer> set = new HashMap<>();
        for(char c:word)
        {
            if(!set.containsKey(c))
                set.put(c,1);
            else
                set.put(c,set.get(c)+1);
        }
        List<Map.Entry<Character,Integer>> list = new ArrayList<>(set.entrySet());
        Comparator<Map.Entry<Character,Integer>> comparator = new Comparator<Map.Entry<Character, Integer>>() {
            @Override
            public int compare(Map.Entry<Character, Integer> o1, Map.Entry<Character, Integer> o2) {
                return -(o1.getValue().compareTo(o2.getValue())); // decreasing order
            }
        };
        list.sort(comparator);
        StringBuilder f = new StringBuilder();
        for(Map.Entry<Character,Integer> c: list)
        {
            for(int i=0;i<c.getValue();i++)
            {
                f.append(c.getKey());
            }
        }
        return f.toString();
    }
    public static void main(String[] args)
    {
        String s = "tree";
        System.out.println(frequencySort(s));
    }
}
