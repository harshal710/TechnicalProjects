
class Demo implements Runnable
{
    public void run()
    {
        System.out.println("Thread is running...\n");
    }
}
class Multi2
{

    public static void main(String Arg[])
    {
        System.out.println("Inside main Thread...\n");

        Demo obj1  = new Demo();
        Thread t1 = new Thread(obj1);
        Demo obj2  = new Demo();
        Thread t2 = new Thread(obj2);

        obj1.start();
        obj2.start();
    }

}