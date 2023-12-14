import java.util.*;

class BitwiseOperator6
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00010000;      //heaxa decimal....explanation down
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


// 0000    0000    0000    0001    0000    0000    0000    0000
// since i want to check 17th bit

// 0        0        0      1       0        0       0      0
// 00010000