package leetcode.Medium;

public class ZigzagConversion
{
    public static String convert(String s, int numRows)
    {
        if(numRows==1)
            return s;
        StringBuilder word = new StringBuilder();
        int pos;
        boolean d;
        for(int row=0;row<numRows;row++)
        {
            d = true;
            pos = row;
            while(pos<s.length())  // 3->1 space 4-> 2 space
            {
                System.out.println(pos);
                word.append(s.charAt(pos));
                if(row==0|| row==numRows-1) // first and last row
                {
                    pos += (numRows-1)*2;
                }
                else if (d) // alternate
                {
                    pos += (numRows-1)*2-(row*2);
                    d = false;
                }
                else // alternate
                {
                    pos += row*2;
                    d = true;
                }
            }
        }
        return word.toString();

    }
    public static void main(String[] args)
    {
        /*
        Input: s = "PAYPALISHIRING", numRows = 4
        Output: "PINALSIGYAHRPI"

        P     I    N
        A   L S  I G
        Y A   H R
        P     I

        Main formula: (numRows-1)*2
        Alternate: (numRows-1)*2-(row*2),  row*2
        use status as to alternate
        P<--6-->I<--6-->N         <-if(row==0|| row==numRows-1)
        A<-4->L<2>S<-4->I<2>G
        Y<2>A<-4->H<2>R
        P<-6->I                   <-if(row==0|| row==numRows-1)

        Going row by row, e.g n = 4
        For first or last row,
        Use the main formula: (numRows-1)*2 = (4-1)*2 = 6
        which jump to the next pos of string to append the char

        For the remaining row, e.g row = 1
        Use the Alternate formula: (numRows-1)*2-(row*2),  row*2
        Starting of with, status = true;

        if status = true
        next position to jump: pos+= (numRows-1)*2-(row*2) += (4-1)*2-(1*2) += 4
        set status = false

        if status = false
        next position to jump: pos+= row*2 += 1*2 += 2
        set status = true
        index: 1  ->   5  ->   7  ->  11  ->  13
        hence  A <-4-> L <-2-> S <-4-> I <-2-> G

        row = 2:
        if status = true
        next position to jump: pos+= (numRows-1)*2-(row*2) += (4-1)*2-(2*2) += 2

        if status = false
        next position to jump: pos+= row*2 += 2*2 += 4
        
        index:  2  ->   4  ->   8  ->  10
        hence   Y <-2-> A <-4-> H <-2-> R
         */
        String s = "PAYPALISHIRING";
        int numRows = 2;
        System.out.println(convert(s,numRows));
    }
}
