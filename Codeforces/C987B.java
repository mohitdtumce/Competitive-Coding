import java.lang.*; 
import java.io.*; 
import java.util.*; 

public class C987B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long x = in.nextLong();
        long y = in.nextLong();
        if (x == y) {
            System.out.print("=");
        } else {
            if (x == 1 & y > 1) {
                System.out.print("<");
            } else if (x > 1 & y == 1) {
                System.out.print(">");
            } else if (x == 2 && y == 3) {
                System.out.print("<");
            } else if (x == 3 && y == 2) {
                System.out.print(">");
            } else if ((x == 2 && y == 4 )|| ((x == 4 && y == 2))) {
                System.out.print("=");
            } else if (x < y){
                System.out.print(">");
            } else if (x > y){
                System.out.print("<");
            }
        }
        in.close();
    }
}