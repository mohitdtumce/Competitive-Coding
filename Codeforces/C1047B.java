import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C1047B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long x, y;
        long minSideLength = 0;
        for (int i = 0; i < n; i++) {
            x = in.nextLong();
            y = in.nextLong();
            minSideLength = Math.max(minSideLength, x+y);
        }
        System.out.print(minSideLength);
        in.close();
    }
}