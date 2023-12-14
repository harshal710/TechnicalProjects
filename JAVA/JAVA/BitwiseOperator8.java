import java.util.*;

class BitwiseOperator8
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000A00;      //AND of 10th and 12th bit
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
            System.out.println("10th nd 12th bit is ON");
        }
        else
        {
            System.out.println("10th nd 12th bit is OFF");
        }
        
        sobj.close();
    }
}



// 0000    0000    0000    0000    0000    1010    0000    0000
// since i want to check 10th and 12th bit

// 0        0        0      0       0        A       0      0
// 00000A00