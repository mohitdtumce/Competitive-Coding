import java.util.ArrayList;
import java.util.Collections;
import java.util.*;

import javafx.util.Pair;

public class C492C {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n, r, avg, a, b;
        n = in.nextLong();
        r = in.nextLong();
        avg = in.nextLong();
        avg *= n;
        ArrayList<Pair<Long, Long> > arr = new ArrayList<>();
        for (long i = 0; i < n; i++) {
            a = in.nextLong();
            b = in.nextLong();
            arr.add(new Pair<Long, Long>(b, a));
            avg -= a;
        }
        if(avg <= 0) {
            System.out.print("0");
        } else {
            Collections.sort(arr, new Comparator<Pair<Long, Long> >(){
                @Override
                public int compare(Pair<Long, Long> p1, Pair<Long, Long> p2) {
                    return p1.getKey().compareTo(p2.getKey());
                }
            });
            long res = 0;
            for (Pair<Long, Long> p : arr) {
                if ((r - p.getValue()) >= avg) {
                    res += (p.getKey()*avg);
                    avg = 0;
                    break;
                } else {
                    res += (p.getKey()*(r - p.getValue()));
                    avg -= (r - p.getValue());
                }
            }
            System.out.print(res);
        }
    }
}