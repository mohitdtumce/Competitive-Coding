import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C688B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String a = in.next();
        System.out.print(a);
        for (int i = a.length()-1; i >= 0; i--) {
            System.out.print(a.charAt(i));
        }
    }
}