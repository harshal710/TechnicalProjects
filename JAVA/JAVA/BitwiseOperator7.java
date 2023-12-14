import java.util.*;

class BitwiseOperator7
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00004040;      //AND of 7th and 15th bit
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
            System.out.println("7th nd 15th bit is ON");
        }
        else
        {
            System.out.println("7th nd 15th bit is OFF");
        }
        
        sobj.close();
    }
}



// 0000    0000    0000    0000    0100    0000    0100    0000
// since i want to check 7th nd 15th bit

// 0        0        0      0       4        0       4      0
// 00004040