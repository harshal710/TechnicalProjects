
class Array1
{
    public static void main(String arg[])
    {
        // 1 way to create array......static memory allocation
        int Arr1[] = {11,21,31,41};

        // 2 way to create array......dynamic memory allocation
        int Arr2[] = new int[4];
        Arr2[0] = 11;
        Arr2[1] = 21;
        Arr2[2] = 31;
        Arr2[3] = 41;

        System.out.println("Length of Array is : "+Arr1.length);

        int iCnt = 0;

        for(iCnt = 0; iCnt <Arr1.length; iCnt++)
        {
            System.out.println(Arr1[iCnt]);
        }
    }

}