import java.util.Scanner;
import java.util.Calendar;
public class C200B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n;
        n = in.nextInt();
        int percent; double res = 0;
        for (int i = 0; i < n; i++) {
            percent = in.nextInt();
            res += percent;
        }
        res /= n;
        System.out.print(res);
    }
}