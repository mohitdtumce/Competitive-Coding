import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C869B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long a = in.nextLong();
        long b = in.nextLong();
        if (a == b) {
            System.out.print("1");
        } else if (a+5 <= b) {
            System.out.print("0");            
        } else {
            long res = (a+1)%10;
            for (long i = a+2; i <= b; i++) {
                res = res * (i%10);
            }
            System.out.print(res % 10);
        }
        in.close();
    }
}