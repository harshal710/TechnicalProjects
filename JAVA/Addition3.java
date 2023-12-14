import java.util.*;

class Addition3
{
    public static int Addition(int Brr[])
    {
        int i = 0, iSum = 0;

        for(i = 0; i < Brr.length; i++)
        {
            iSum = iSum + Brr[i];
        }
        return iSum;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner (System.in);

        int isize = 0, i = 0, iret = 0;
        System.out.println("Enter the number of elememts :");
        isize = sobj.nextInt();

        int Arr[] = new int[isize];

        System.out.println("Enter Elements in array");
        for(i = 0; i < isize; i++)
        {
            Arr[i]= sobj.nextInt();
        }
        
        iret = Addition(Arr);
        System.out.println("Addition of all element is: "+iret);

        sobj.close();
    }
}