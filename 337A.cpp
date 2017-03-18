import java.util.*;
public class mohit_sharma{
	public static void main(String[] args){
		int n,m;
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		m = input.nextInt();
		
		List<Integer> test = new ArrayList<>();
		for(int i=0;i<m;i++){
			test.add(input.nextInt());
		}
		
		Collections.sort(test);

		int min;
		min = test.get(n-1)-test.get(0);
		for(int i=0;i<m-n+1;i++){
			if(test.get(i+ n-1)-test.get(i+0)<= min){
				min = test.get(i+n-1)-test.get(i);
			}
		}
		
		System.out.print(min);
	}
}