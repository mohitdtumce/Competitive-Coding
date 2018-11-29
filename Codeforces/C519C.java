import java.util.Scanner;
public class C519C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long ep = in.nextLong();
        long np = in.nextLong();
        
        System.out.print(Math.min((ep + np)/3, Math.min(ep, np)));
    }
}