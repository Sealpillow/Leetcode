package leetcode.Medium;

import java.util.*;

public class IntegerToRoman
{
    public static String intToRoman(int num)
    {
        LinkedHashMap<Integer,String> set = new LinkedHashMap<>(); // each string has different value
        StringBuilder word = new StringBuilder();
        ArrayList<Integer> list = new ArrayList<>(); // split num into digits
        set.put(1,"I");
        set.put(4,"IV");
        set.put(5,"V");
        set.put(9,"IX");
        set.put(10,"X");
        set.put(40,"XL");
        set.put(50,"L");
        set.put(90,"XC");
        set.put(100,"C");
        set.put(400,"CD");
        set.put(500,"D");
        set.put(900,"CM");
        set.put(1000,"M");
        List<Integer> keylist = new ArrayList<>(set.keySet()); // contain keySet, able to access through index
        while(num!=0)
        {
            list.add(num%10);
            num/=10;
        }
        int value;
        for(int i=list.size()-1;i>=0;i--)
        {
            value = (int) (list.get(i)*Math.pow(10,i));
            if(set.containsKey(value))
            {
                word.append(set.get(value));
            }

            else
            {
                if(value>1000)
                {
                    for(int x=0;x<value/1000;x++)
                    {
                        word.append("M");
                    }
                    continue;
                }
                while(value!=0)
                {
                    for(int index=1;index<keylist.size();index++)
                    {
                        if(value<keylist.get(index))  //if(value>=keylist.get(index))
                        {
                            value-= keylist.get(index-1);
                            word.append(set.get(keylist.get(index-1)));
                            break;
                        }
                    }
                }
            }
        }
        return word.toString();
    }
    public static void main(String[] args)
    {
        int num = 2000;
        System.out.println(intToRoman(num));
    }
}
