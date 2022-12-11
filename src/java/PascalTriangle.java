package leetcode.Easy;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PascalTriangle {
    public static List<List<Integer>> generate(int numRows) {
        List<List<Integer>> base = new ArrayList<>(numRows);
        base.add(Arrays.asList(1));
        if(numRows==1)
            return base;
        base.add(Arrays.asList(1,1));
        if(numRows==2)
            return base;
        // bottom up
        for(int i=1;i<numRows-1;i++)
        {
            List<Integer> num = new ArrayList<>();
            num.add(1);
            for(int j=0;j<base.get(i).size()-1;j++)
            {
                num.add(base.get(i).get(j)+base.get(i).get(j+1));
            }
            num.add(1);
            base.add(num);
        }
        return base;
    }
    public static void main(String[] args)
    {
        System.out.println(generate(5));
    }
}
