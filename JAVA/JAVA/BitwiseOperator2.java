import java.util.*;

class BitwiseOperator2
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 4;
        int iRes = 0;

        iRes = iNo & iMask;

        if(iRes == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        boolean bret = false;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();

        bret = CheckBit(iNo);

        if(bret == true)
        {
            System.out.println("3rd bit is ON");
        }
        else
        {
            System.out.println("3rd bit is OFF");
        }
        
        sobj.close();
    }
}