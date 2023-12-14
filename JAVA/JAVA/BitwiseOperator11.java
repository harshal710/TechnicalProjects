import java.util.*;

class BitwiseOperator11
{
    public static int OffBit(int iNo)
    {
        int iMask = 0X00020000;      //heaxa decimal....explanation down
        int iRes = 0;

        iRes = iNo & iMask;

        if(iRes == iMask)
        {
            return (iNo ^ iMask);
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
        int bret = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();

        bret = OffBit(iNo);

        System.out.println("Updated bit is :"+bret);
        
        
        sobj.close();
    }
}


// 0000    0000    0000    0010    0000    0000    0000    0000
// since i want to check 18th bit

// 0        0        0      2       0        0       0      0
// 00020000