
import java.util.*;

class Factorial
{
    public static int Factorial(int iNo)
    {
        int ifact = 1;
        int i = 0;
        for(i = 1; i <= iNo; i++)
        {
            ifact = ifact*i;
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0 , iAns = 0;

        System.out.println("Enter nummber :");
        iValue = sobj.nextInt();

        iAns = Factorial(iValue);

        System.out.println("Factorial is :"+iAns);
        sobj.close();
    }
}


        