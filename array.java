import java.lang.*;
import java.util.*;
class array
{
    public static void main(String[] arg)
    {
        int[] ar = {5,6,8,2,4,3,8,9}, i,temp;
        System.out.println("Sorting the array:");
        for(i=0;i<7;i++)
        {
            if(ar[i]>ar[i+1])
            {
//                 int temp;
                temp=ar[i+1];
                ar[i+1]=ar[i];
                ar[i]=temp;
            }
        }
        for(i=0;i<8;i++)
        System.out.println(+ar[i]);
    }
}
