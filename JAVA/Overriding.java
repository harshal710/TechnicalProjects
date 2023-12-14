
class Base
{
    public void fun()   //1000
    {
        System.out.println("inside base fun");
    }
    public void gun()   //2000
    {
        System.out.println("inside base gun");
    }
    public void sun()   //3000
    {
        System.out.println("inside base sun");
    }
    public void run()   //4000
    {
        System.out.println("inside base run");
    }
}

class Derived extends Base
{
    public void fun()   //5000
    {
        System.out.println("inside derived fun");
    }
    public void sun()   //6000
    {
        System.out.println("inside derived sun");
    }
    public void run(int A)      //7000
    {
        System.out.println("inside derived run with a parameter");
    }
    public void mun()       //8000
    {
        System.out.println("inside derived mun");
    }
}

class Overriding
{
    public static void main(String arg[])
    {
        Base bobj = new Derived();          //upcasting
        // Base bobj = new Base();          //nocasting
        // Derived dobj = new Derived();    //nocasting
        // Derived dobj = new Base();       //downcasting (not allowed)
        bobj.fun();     //Derived fun
        bobj.gun();     //Base gun
        bobj.sun();     //Derived sun
        bobj.run();
        // bobj.run(11);
        // bobj.mun();
    }
}