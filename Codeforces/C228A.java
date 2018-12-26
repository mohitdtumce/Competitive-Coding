import java.util.*;

public class C228A {
	public static void main(String[] args){
	
		Set<Long> test = new HashSet<>();
		Scanner input = new Scanner(System.in);
		
		for(int i=0;i<4;i++){
			test.add(input.nextLong());
		}
		System.out.print(4- test.size());
		
	}
}