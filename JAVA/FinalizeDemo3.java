
class Employee implements Cloneable
{
    public String Name;
    public int Salary;
    public int Age;
    public String Address;

    Employee(String str, int amount, int A, String addr)
    {
        this.Name = str;
        this.Salary = amount;
        this.Age = A;
        this.Address = addr;
    }

    
    void Display()
    {
        System.out.println("Emplyee name : "+this.Name);
        System.out.println("Emplyee Age : "+this.Age);
        System.out.println("Emplyee salary : "+this.Salary);
        System.out.println("Emplyee address : "+this.Address);
    }

    public Object clone() throws CloneNotSupportedException
    {
        return super.clone();
    }
}

class FinalizeDemo3
{
    public static void main(String arg[]) 
    {
        try
        {
            Employee eobj1  = new Employee("Amit", 78000,28,"Karve road pune");
            
            Employee eobj2 = (Employee)eobj1.clone();

            eobj1.Display();
            eobj2.Display();
            System.out.println("Hash code of eobj is :"+eobj1.hashCode());
            System.out.println("Hash code of eobj is :"+eobj2
            .hashCode());

        }
        catch(CloneNotSupportedException obj)
        {
            System.out.println("inside catch");
        }
    }
}