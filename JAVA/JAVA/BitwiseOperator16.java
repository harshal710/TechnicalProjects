import java.util.*;

class BitwiseOperator16
{
    public static int OffBit(int iNo, int iPos)
    {
        int iRes = 0;
        int iMask = 0X00000001;
        iMask = iMask << (iPos -1);
        int iCheck = iNo & iMask;
        

        if(iCheck == iMask)
        {     
            
            iRes = (iNo ^ iMask);
            return iRes;
        }
        else
        {
            return iNo;
        }
        
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

        bret = OffBit(iNo,iPos);

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