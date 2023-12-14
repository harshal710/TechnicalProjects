import java.util.*;

class ExceptionDemo1X
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the first number :");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the second number :");
        int iNo2 = sobj.nextInt();

        int iAns = 0;
        try
        {
            System.out.println("Inside try block");
            iAns = iNo1 / iNo2;
        }
        catch(ArithmeticException obj)
        {
            System.out.println("Inside catch block"+obj);
        }
        catch(ArrayIndexOutOfBoundsException obj)
        {
            System.out.println("Array Index Out Of Bounds Exception"+obj);
        }
        catch(Exception obj)
        {
            System.out.println("Inside Generic Catch block"+obj);
        }
        finally
        {
            System.out.println("Inside finally block");
        }
        System.out.println("Division is :"+iAns);
    }
}