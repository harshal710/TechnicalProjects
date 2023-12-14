import java.io.*;

class CreateFile
{
    public static void main(String arg[]) throws Exception
    {
        File fobj = new File("PPA.txt");
        fobj.createNewFile();
    }
}