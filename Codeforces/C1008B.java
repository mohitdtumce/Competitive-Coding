import java.util.Scanner;
public class C1008B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long currHeight = 0, height, width;
        boolean res = true;
        for (int i = 0; i < n; i++) {
            width = in.nextLong();
            height = in.nextLong();
            if (i == 0) {
                currHeight = Math.max(height, width);
            } else {
                if (currHeight < Math.min(height, width)) {
                    res = false;
                } else {
                    if(currHeight >= Math.max(height, width)) {
                        currHeight = Math.max(height, width);
                    } else {
                        currHeight = Math.min(height, width);
                    }
                }
            }
        } 
        if (res) {
            System.out.print("YES");
        } else {
            System.out.print("NO");
        }
        in.close();
    }
}