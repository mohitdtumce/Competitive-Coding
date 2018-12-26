import java.util.*;
public class C467B {

	public static void main(String[] args) {
		int n,m,k,friend=0;
		Scanner mohit = new Scanner(System.in);
		n = mohit.nextInt();
		m = mohit.nextInt();
		k = mohit.nextInt();
		int[] a= new int[m+1];
		for(int i=0;i<m+1;i++){
			a[i]= mohit.nextInt();
		}
		for(int i=0;i<m;i++){
			int count=0,c;
			c = a[i] ^ a[m];
			for(int j=0;j<n;j++){
				if(c%2==1){
					count++;
				}
				c = c>>1;
			}
			if(count<=k){
				friend++;
			}
		}
		System.out.println(friend);
		mohit.close();
	}
}