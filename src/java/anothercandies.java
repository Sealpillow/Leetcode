//https://docs.oracle.com/javase/6/docs/api/java/math/BigInteger.html
/*
Like strings, BigInteger objects are immutable. Methods like add , multiply , and pow all return new BigIntegers,
rather than modify an existing one. Internally, a BigInteger is implemented using an array of int s,
similar to the way a string is implemented using an array of char s.
 */
import java.math.BigInteger;
import java.util.Scanner;

public class anothercandies
{
    public static void main(String[]args)
    {
        Scanner input1 = new Scanner(System.in);
        int numcase = input1.nextInt();
        input1.nextLine(); // buffer
        for (int i=0;i<numcase;i++)
        {
            BigInteger sum = new BigInteger("0");    // initialise sum  = 0
            BigInteger count = new BigInteger("0");  // initialise count = 0
            int numchild = input1.nextInt();
            input1.nextLine();
            for (int j=0;j<numchild;j++)
            {
                String c = input1.nextLine();
                BigInteger candy = new BigInteger(c); // eg: 2197344112366009847
                sum = sum.add(candy);
                count= count.add(BigInteger.ONE);   // increment of count
            }
            if (sum.mod(count).equals(BigInteger.ZERO))   // sum% count == 0
            {
                System.out.println("YES");
            }
            else
            {
                System.out.println("NO");
            }
        }
    }
}
