
import java.util.*;

class Evenfactors1
{
    public static void Evenfactors(int iNo)
    {
        int ifact = 1;
        int i = 0;
        for(i = 1; i <= iNo; i++)
        {
            if(iNo% i == 0)
            {
                if(i%2 == 0)
                {
                    System.out.println("Even factor"+i);
                }
                else
                {
                    System.out.println("Odd factor"+i);
                }
            }
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0;

        System.out.println("Enter nummber :");
        iValue = sobj.nextInt();

        Evenfactors(iValue);

        sobj.close();
    }
}


        