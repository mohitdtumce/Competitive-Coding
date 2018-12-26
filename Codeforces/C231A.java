import java.util.*;
public class C231A {
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     long n;
     n = input.nextLong();
     
     int count=0;
     for(int i=0;i<n;i++){
    	 int sum=0;
    	 for(int j=0;j<3;j++){
    		 sum += input.nextInt();
    	 }
    	 if(sum >= 2)
    		 count++;
     }
     System.out.print(count);
     
    }
}