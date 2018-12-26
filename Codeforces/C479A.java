import java.util.*;
public class C479A {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int a = input.nextInt();
		int b = input.nextInt();
		int c = input.nextInt();		
		
		List<Integer> test = new ArrayList<>();
		test.add(a*b+c);
		test.add(a+b*c);
		test.add((a+b)*c);
		test.add(a*(b+c));
		test.add(a+b+c);
		test.add(a*b*c);
		Collections.sort(test);
		System.out.println(test.get(test.size()-1));
		input.close();
	}
}