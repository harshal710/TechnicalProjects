import java.util.*;

class BitwiseOperator15
{
    public static int ToggleBit(int iNo, int iPos)
    {
        int iRes = 0;
        if(iPos >= 0 && iPos <= 32)
        {
            int iMask = 0X00000001;     
            iMask = iMask << (iPos -1);
            iRes = (iNo ^ iMask);
        }
        return iRes;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iPos = 0;
        int bret = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();

        System.out.println("Enter the Position to be toggled :");
        iPos = sobj.nextInt();

        bret = ToggleBit(iNo,iPos);

        System.out.println("Updated bit is :"+bret);
        
        
        sobj.close();
    }
}

// iMask:
// 0000    0000    0000    0000    0000    0000    0000    0001

// iPos : 6
// imask = imask << (ipos-1)
// imask = imask << 5

// 0000    0000    0000    0000    0000    0000    0010    0000
// 0        0        0      0       0       0        2      0
// 00000020