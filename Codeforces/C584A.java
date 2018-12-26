import java.util.*;

public class C584A {
	public static void main(String[] args){
		
		int n,t;
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		t = input.nextInt();
		
		if(n ==1 && t == 10){
			System.out.print(-1);
			return;
		}
		List<Integer> vec = new ArrayList<>();
		if(t != 10){
			vec.add(t);
			for(int i=1;i<n;i++){
				vec.add(0);
			}
		}else if( t == 10){
			vec.add(1);
			for(int i=1;i < n;i++){
				vec.add(0);
			}
		}
		
		for(int  i=0;i< n;i++){
			System.out.print(vec.get(i));
		}
	}
}