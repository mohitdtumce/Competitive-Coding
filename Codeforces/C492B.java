import java.util.*;
public class test {
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner mohit = new Scanner(System.in);
		int n;
		long l,temp;
		n = mohit.nextInt();
		l = mohit.nextLong();
		ArrayList al = new ArrayList();
		for(int i=0;i< n;i++){
			temp = mohit.nextLong();
			al.add(temp);
		}
		Collections.sort(al);
		long k1,k2,k3;
		k1 = 2*(long)al.get(0);
		k2 = 2*(l-(long)(al.get(n-1)));
		k1 = k1>k2?k1:k2;
		for(int i=0;i<n-1;i++){
			k2 = (long)al.get(i);
			k3 = (long)al.get(i+1);
			if((k3-k2)>k1){
				k1 = (k3-k2);
			}
		}
		System.out.println((double)(k1)/2);
		mohit.close();
	}
	
}