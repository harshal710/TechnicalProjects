import java.util.*;

class CountCapital1
{

    public static int CountCapital(String str)
    {
        int iCnt = 0;
        int iCount = 0;

        char Arr[] = str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;

    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner (System.in);
        int iret = 0;

        String str = null;

        System.out.println("Enter your name :");
        str = sobj.nextLine();
        
        iret = CountCapital(str);
        System.out.println("Count of capital letter is :"+iret);
        sobj.close();
    }
}