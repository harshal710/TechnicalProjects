import java.util.*;

class Additionmethod
{
    public static int Addition(int iValue1, int iValue2)    //static here wriiten is due to a static method(Addition(iNo1,iNo2)) is calling non static method(Addition(int iValue1, int iValue2)) is static is not written
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0, iNo2 = 0;
        int iAns = 0;

        System.out.println("Enter first number :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number :");
        iNo2 = sobj.nextInt();

        iAns = Addition(iNo1,iNo2);
        System.out.println("Addition is :"+iAns);
    }
}