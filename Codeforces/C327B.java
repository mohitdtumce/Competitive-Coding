import java.util.*; 

public class C327B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long counter = 10000000 - n + 1;
        while (n > 0) {
            System.out.print(counter + " ");
            counter += 1;
            n -= 1;
        }
        in.close();
    }
}