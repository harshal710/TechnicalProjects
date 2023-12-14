
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

    public String toString()
    {
        return Name+" "+Salary+" "+Age+" "+Address;
    }
}

class FinalizeDemo5
{
    public static void main(String arg[]) 
    {
        Employee eobj1  = new Employee("Amit", 78000,28,"Karve road pune");
          
        System.out.println(eobj1);  //it calls toString method internally
    }
}