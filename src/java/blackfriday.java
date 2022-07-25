import java.util.ArrayList;
import java.util.Scanner;
public class blackfriday
{
    public static void main(String[]args)
    {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        input.nextLine();
        int[] list = new int[6]; // dice roll
        ArrayList<Integer> queue = new ArrayList<Integer>();
        for(int i=0;i<n;i++)
        {
            int outcome = input.nextInt();
            queue.add(outcome);
            list[outcome-1]++;
        }
        if(!checknone(list))
        {
            unique(list,queue);
        }
        else
        {
            System.out.println("none");
        }

    }
    public static boolean checknone(int[] list)
    {
        for(int item:list)
        {
            if (item == 1)
            {
                return false;
            }
        }
        return true;
    }
    public static void unique(int[] list, ArrayList<Integer> queue)
    {
        for(int j=5;j>=0;j--)
        {
            if(list[j]==1)
            {
                // j+1 as prev outcome-1,  indexOf(j+1)+1 as it start of from 0
                System.out.println(queue.indexOf(j+1)+1);
                break;
            }
        }
    }
}

