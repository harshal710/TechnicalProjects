
class Demo extends Thread
{
    public void run()   //running state
    {
        
       
    }
    synchronized public void Display()
    {

    }
}

class Multi4
{
    public static void main(String Arg[]) throws Exception
    {
        System.out.println("Current thread is : "+Thread.currentThread().getName());

        Demo obj1 = new Demo();     //New state

        obj1.start();       //Runnable state
        obj1.join();
        System.out.println("End of main thread");   //dead state
    }
}