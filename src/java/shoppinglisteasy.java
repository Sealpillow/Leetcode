import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class shoppinglisteasy
{
    public static void main(String[]args)
    {
        Scanner input1 = new Scanner(System.in);

        int numlist = input1.nextInt();
        int items = input1.nextInt();
        input1.nextLine(); // buffer
        int[] count = new int[numlist*items];
        ArrayList<String> namelist = new ArrayList<String>();  //  unique items
        ArrayList<String> finallist = new ArrayList<String>();  // item contain in all list
        for(int i =0;i<numlist;i++)
        {
            String[] list = input1.nextLine().split(" ",items);
            for(String food:list)
            {
                if (!namelist.contains(food))  // if list not in unique list
                {
                    namelist.add(food);
                }
                count[namelist.indexOf(food)]++;  // add the count of the item 
            }
            //System.out.println(Arrays.toString(list));
        }

        for(int j=0;j<namelist.size();j++)  // check any item found in all the list 
        {
            if(count[j]==numlist)
            {
                finallist.add(namelist.get(j));
            }
        }

        System.out.println(finallist.size());
        Collections.sort(finallist);  // sort it in alphabetical order
        for(String f:finallist)
        {
            System.out.println(f);
        }
    }
}
