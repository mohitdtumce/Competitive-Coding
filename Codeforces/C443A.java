import java.util.*;
public class C443A {
	public static void main(String[] args){
		HashSet<Character> test = new HashSet<>();
		Scanner input = new Scanner(System.in);
		String given = input.nextLine();
		
		for(int i=0;i<given.length();i++){
			if(given.charAt(i)> 96 && given.charAt(i)< 123)
				test.add(given.charAt(i));
		}
		System.out.print(test.size());
	
	}
}