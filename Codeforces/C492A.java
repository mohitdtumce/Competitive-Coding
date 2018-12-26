import java.util.*;

public class C492A  {
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     int n;
     n = input.nextInt();
     int i=0,count;
     do{
    	 i++;
    	 count =(((i)*(i+1)*(i+2))/6);
     }while(count <= n);
     System.out.print(i-1);
     input.close();
    }
}