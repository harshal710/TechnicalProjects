
import java.util.*;

class Display1
{
    public static void Display(int iNo)
    {
        int i = 0;

        for(i = 1; i <= iNo; i++)
        {
            System.out.print(i+"\t"+"*\t");
        }
        System.out.println();
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iValue = 0;

        System.out.println("Enter nummber :");
        iValue = sobj.nextInt();

        Display(iValue);

        sobj.close();
    }
}


        