import java.util.Scanner;
public class C734B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int k2 = in.nextInt();
        int k3 = in.nextInt();
        int k5 = in.nextInt();
        int k6 = in.nextInt();
        int num256 = 0, num32 = 0;
        num256 = Math.min(k2, Math.min(k5, k6));
        k2 -= num256; k5 -= num256; k6 -= num256;
        num32 = Math.min(k2, k3);
        long res = (long)(256*num256) + (long)(32*num32); 
        System.out.print(res);
        in.close();
    }  
}