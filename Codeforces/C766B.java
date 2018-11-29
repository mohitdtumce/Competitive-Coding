import java.util.Arrays;
import java.util.Scanner;
public class C766B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        Long [] arr = new Long[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextLong();
        }
        Arrays.sort(arr);
        int i;
        boolean res = false;
        for (i = 2; i < n; i++) {
            if (arr[i] < arr[i-1] + arr[i-2]) {
                res = true; break;
            }
        }

        if(res) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }
    }
}