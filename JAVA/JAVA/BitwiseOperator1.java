import java.util.*;

class BitwiseOperator1
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iMask = 4;
        int iRes = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();

        iRes = iNo & iMask;

        if(iRes == iMask)
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