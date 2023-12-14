import java.util.*;

class BitwiseOperator5
{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000004;      //heaxa decimal....explanation down
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


// 0000    0000    0000    0000    0000    0000    0000    0100
// since i want to check 3rd bit

// 0        0        0      0       0        0       0      4
// 00000004