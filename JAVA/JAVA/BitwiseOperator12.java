import java.util.*;

class BitwiseOperator12
{
    public static int ToggleBit(int iNo)
    {
        int iMask = 0X00000040;      //heaxa decimal....explanation down
        return (iNo ^ iMask);
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int bret = 0;

        System.out.println("Enter the number :");
        iNo = sobj.nextInt();

        bret = ToggleBit(iNo);

        System.out.println("Updated bit is :"+bret);
        
        
        sobj.close();
    }
}


// 0000    0000    0000    0000    0000    0000    0100    0000
// since i want to check 7th bit

// 0        0        0      0       0        0       4      0
// 00000040