package leetcode.Easy;

public class AddBinary
{
    static StringBuilder result;
    public static String addBinary(String a, String b)
    {
        result = new StringBuilder("");
        char[] num1 = a.toCharArray();
        char[] num2 = b.toCharArray();
        int len1 = num1.length;
        int len2 = num2.length;
        int digit;
        boolean carry = false;
        while(len1!=0&& len2!=0)
        {
            digit = num1[len1-1]-'0'+num2[len2-1]-'0';
            carry = cal(digit,carry);
            len1--;
            len2--;
        }
        for(int i=len1-1;i>=0;i--)
        {
            digit = num1[i]-'0';
            carry = cal(digit,carry);
        }
        for(int i=len2-1;i>=0;i--)
        {
            digit = num2[i]-'0';
            carry = cal(digit,carry);
        }
        if(carry)
            result.append(1);
        return result.reverse().toString();
    }
    public static boolean cal(int digit, boolean carry)
    {
        if(carry)
            digit++;
        if(digit==2)
        {
            carry = true;
            result.append(0);
        }
        else if(digit==3)
        {
            carry = true;
            result.append(1);
        }
        else
        {
            carry = false;
            result.append(digit);
        }
        return carry;
    }
    public static void main(String[] args)
    {
        String a = "11", b = "1";

        System.out.println(addBinary(a,b));
    }
}
