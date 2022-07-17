import java.util.Scanner;

public class averagecharacter
{
    public static void main(String[]args)
    {
        Scanner input = new Scanner(System.in);
        String word = input.nextLine();
        int sum = 0;
        for(int i =0;i<word.length();i++)
        {
            sum+= word.charAt(i);
        }
        char alpha = (char)(sum/word.length());
        System.out.print(alpha);
    }
}
