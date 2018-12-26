import java.util.*;
import java.io.*;

public class C520B {
    public static void main(String[] args) {
     Scanner input = new Scanner(System.in);
     int n;
     n = input.nextInt();
     String test;
     test = input.next();
     test = test.toLowerCase();
     Set<Character> mohit = new HashSet<>();
     for(int  i=0; i< test.length();i++){ 	 
    	 mohit.add(test.charAt(i));
     }
     if(mohit.size() == 26){
    	 System.out.print("YES"); 
     }else{
    	 System.out.print("NO");
     }
     
    }
}