import java.util.*;
public class testfile {

	public static void main(String[] args) {
		Scanner mohit = new Scanner(System.in);
		// declaring
		long mod = 1000000007;
		long x,y,n,i=1;
		int c;
		x = mohit.nextLong();
		y = mohit.nextLong();
		n = mohit.nextLong();
		long[] arr = new long[6];
		arr[0] = (x-y);
		arr[1] = (x);
		arr[2] = (y);
		arr[3] = (y-x);
		arr[4] = (-x);
		arr[5] = (-y);
		c= (int)(n%6);
		if(arr[c] >= 0){
			System.out.print(arr[c]%mod);
		}else{
			while(true){
				if(mod*i+arr[c]>=0)
				 	break;
				 	i++;
			}
			System.out.print(mod*i+arr[c]);
		}
		mohit.close();
	}

}