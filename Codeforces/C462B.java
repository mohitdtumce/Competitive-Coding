import java.util.Scanner;
import java.util.Collections;
import java.util.Arrays;
public class C462B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n, k;
        n = in.nextInt();
        k = in.nextInt();
        String str;
        str = in.next();
        long [] hash = new long [26];
        for (int i = 0; i < n; i++) {
            hash[(int)(str.charAt(i) - 'A')]++;
        }
        Arrays.sort(hash);
        long res = 0;
        for (int i = 25; i >= 0; i--) {
            if (k > hash[i]) {
                res += ((long)hash[i])*((long)hash[i]);
                k -= hash[i];
            } else {
                res += ((long)k)*((long)k);
                k = 0;
                break;
            }
        }
        System.out.print(res);
    }
}