import java.util.ArrayList;
import java.util.Scanner;
import java.util.Vector;
public class C732B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int a;
        int [] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }
        int count = 0;
        for (int i = 1; i < n; i++) {
            if(arr[i] + arr[i-1] < k) {
                count += (k - arr[i] - arr[i-1]);
                arr[i] += (k - arr[i] - arr[i-1]);
            }
        }
        System.out.println(count);
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}