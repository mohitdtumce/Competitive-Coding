import java.util.Scanner;
public class C514A {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str = in.next();
        char [] num = str.toCharArray();
        int start = (num[0] >= '5' && num[0] <= '8')?0:1;
        for (int i = start; i < str.length(); i++) {
            switch (num[i]) {
                case '5': num[i] = '4'; break;
                case '6': num[i] = '3'; break;
                case '7': num[i] = '2'; break;
                case '8': num[i] = '1'; break;
                case '9': num[i] = '0'; break;
            }
        }
        num.toString();
        System.out.print(num);
        in.close();
    }
}