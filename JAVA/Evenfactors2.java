
import java.util.*;

class Evenfactors2
{
    public static void Evenfactors(int iNo)
    {
        int i = 0;
        int iSumE = 0;
        int iSumO = 0;

        for(i = 1; i <= iNo; i++)
        {
            if(iNo% i == 0)
            {
                if(i%2 == 0)
                {
                    
                    iSumE = iSumE+ i;
                }
                else
                {
                    
                    iSumO =iSumO + i;
                }

            }
            System.out.println("Even factor"+iSumE);
            System.out.println("Odd factor"+iSumO);
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


        