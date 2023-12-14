
class Demo extends Thread
{
    public void run()   //running state
    {
        String name = Thread.currentThread().getName();
        System.out.println("Current thread is :"+name);
        for(int i = 1;i < 1000; i++)
        {
            System.out.println("Name of thread is : "+Thread.currentThread().getName());
        }
    }
}

class Multi3
{
    public static void main(String Arg[])
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();     //New state
        Demo obj2 = new Demo();     //New state

        obj1.setName("First Thread");
        obj2.setName("Second Thread");

        obj1.start();       //Runnable state
        obj2.start();       //Runnable state

        System.out.println("Thread goes to dead state");   //dead state
    }
}