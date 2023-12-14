import java.util.*;

class Display2
{
    public static void Display(int Brr[])
    {
        int i = 0;

        for(i = 0; i < Brr.length; i++)
        {
            System.out.print(Brr[i]+"\t");
        }
        System.out.println();
    }
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
        
        Display(Arr);

        sobj.close();
    }
}