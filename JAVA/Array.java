import java.util.*;

class Array
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner (System.in);

        int isize = 0, i = 0;
        System.out.println("Enter the number of elememts :");
        isize = sobj.nextInt();

        int Arr[] = new int[isize];

        System.out.println("Enter Elements in array");
        for(i = 0; i < isize; i++)
        {
            Arr[i]= sobj.nextInt();
        }
        System.out.println(" Elements in array are");
        for(i = 0; i < isize; i++)
        {
            System.out.print(Arr[i]+"\t");
        }
        System.out.println();
        
        sobj.close();
    }
}