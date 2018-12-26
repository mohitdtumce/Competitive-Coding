import java.util.*; 

public class C456B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String n = in.next();
        int res = 0;
        int len = n.length();
        if (len == 1) {
            if (n.charAt(0) == '0' || n.charAt(0) == '4' || n.charAt(0) == '8') {
                res = 4;
            }
        } else if (len > 1){
            int lastTwo = (n.charAt(len - 2) - '0')*10 + (n.charAt(len - 1) - '0') ;
            if (lastTwo % 4 == 0)
                res = 4;
        }

        System.out.print(res);
        in.close();
    }
}