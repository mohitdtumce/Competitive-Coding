import java.util.*;
import java.io.*;

public class mohit_sharma {
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     long n,k;
     n = input.nextLong();
     k= input.nextLong();
     
     if(k <= ((n+1)/2)){
    	 System.out.print(2*k-1);
     }else if(k > ((n+1)/2)){
    	 System.out.print(2*(k-((n+1)/2)));
     }
     
    }
}