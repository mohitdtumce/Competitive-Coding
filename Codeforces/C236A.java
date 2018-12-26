import java.util.*;
public class C236A {
	public static void main(String[] args){
		String name;
		Scanner input = new Scanner(System.in);
		name = input.next();
		Set<Character> test = new HashSet<>();
		for(int i=0;i< name.length();i++){
			test.add(name.charAt(i));
		}
		if(test.size() % 2 == 0){
			System.out.print("CHAT WITH HER!");
		}else if(test.size() % 2 == 1){
			System.out.print("IGNORE HIM!");
		}
		input.close();
	}
}