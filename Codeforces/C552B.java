import java.util.*; 

public class C552B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        long [] nums = new long [] {0, 9, 90, 900, 9000, 90000, 900000, 9000000, 90000000, 900000000};
        long res = 0, base = 0;
        int digit = digitCounter(n);
        for (int i = 1; i <= digit -1; i++) {
            res += (nums[i]*i);
            base = (base*10) + 9;
        }
        n -= base;
        res += (n*digit);
        System.out.print(res);
        in.close();
    }

    public static int digitCounter(long num) {
        int counter = 0;
        while (num != 0) {
            counter++;
            num /= 10;
        }
        return counter;
    }
}