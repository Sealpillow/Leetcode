package leetcode.Medium;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;

public class MaximumLengthOfPairChain
{
    public static int findLongestChain(int[][] pairs)
    {

        Comparator<int[]> comparator = new Comparator<int[]>() {
            @Override
            public int compare(int[] o1, int[] o2)
            {
                // sort pairs[i][1] so that the ends are in increasing order
                // prevents error where pair[i][0] is low but pair[i][0] extremely high
                return o1[1]-o2[1];
            }
        };
        Arrays.sort(pairs,comparator);
        //System.out.println(Arrays.deepToString(pairs));
        int count = 1,chain = 0;
        for(int i=0;i<pairs.length-1;i++)
        {
            // chain formed  p1 = [a, b] , p2 = [c, d] if b < c else skip to next possible chain
            if(pairs[chain][1]<pairs[i+1][0])
            {
                chain = i+1;
                count++;
            }
        }
        return count;

    }

    public static void main(String[] args)
    {
        //int[][] pairs = {{1,2},{7,8},{4,5}};
        //int[][] pairs = {{-10,-8},{8,9},{-5,0},{6,10},{-6,-4},{1,7},{9,10},{-4,7}};
        //int[][] pairs = {{-6,9},{1,6},{8,10},{-1,4},{-6,-2},{-9,8},{-5,3},{0,3}};
        int[][] pairs = {{7,9},{4,5},{7,9},{-7,-1},{0,10},{3,10},{3,6},{2,3}};
        System.out.println(findLongestChain(pairs));
    }
}
