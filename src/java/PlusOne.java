package leetcode.Easy;

import java.util.Arrays;

public class PlusOne
{
    public static int[] plusOne(int[] digits)
    {
        boolean carry = false;
        digits[digits.length-1]++;
        for(int i=digits.length-1;i>=0;i--)
        {
            if(carry) // apply to all except rightmost
            {
                digits[i]++;
                carry = false;
            }
            if(digits[i]==10) // after adding 1, there is a carry, set current digits[i] = 0
            {
                digits[i] = 0;
                carry = true;
            }
        }
        if(carry) // after adding one, if the leftmost digit has a carry, an additional "1" will be added to the front
        {
            digits[0] = 0;
            int[] set = new int[digits.length+1];
            set[0] = 1;
            for(int i=0;i<digits.length;i++)
                set[i+1] = digits[i];
            return set;
        }
        return digits;

    }
    public static void main(String[] args)
    {
        int[] digits = {2};
        System.out.println(Arrays.toString(plusOne(digits)));
    }
}
