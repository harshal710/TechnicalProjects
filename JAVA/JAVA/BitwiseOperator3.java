import java.util.*;

class BitwiseOperator3
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 65536;
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
            System.out.println("17th bit is ON");
        }
        else
        {
            System.out.println("17th bit is OFF");
        }
        
        sobj.close();
    }
}