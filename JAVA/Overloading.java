
class Arithmatic
{
    public int Addition(int A,int B)
    {
        return A+B;
    }
    public int Addition(int A,int B,int C)          //by changing no.of argument
    {
        return A+B+C;
    }
    public double Addition(double A,double B)       //by chaging data type
    {
        return A+B;
    }
    public void Addition(int A,double B)            //by changing sequence
    {
        System.out.println("inside addition 1");
    }
    public void Addition(double A,int B)            //by changing sequence
    {
        System.out.println("inside addition 2");
    }
    
}

class Overloading
{
    public static void main(String arg[])
    {
        Arithmatic aobj = new Arithmatic();

        int iRet = 0;
        double Dret = 0;

        iRet = aobj.Addition(10,11);
        System.out.println("Addition is : "+iRet);

        iRet = aobj.Addition(10,11,27);
        System.out.println("Addition is : "+iRet);

        Dret = aobj.Addition(10.8,11.7);
        System.out.println("Addition is : "+Dret);

        aobj.Addition(10,11.7);
        aobj.Addition(11.7,10);
        
    }
}