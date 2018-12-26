import java.util.*;
public class C263A {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int i,j,p=0,q=0,num;
		for(i=1;i<=5;i++){
			for(j=1;j<=5;j++){
				num = input.nextInt();
				if(num != 0){
					p=i;
					q=j;
				}
			}
		}
		System.out.print(Math.abs(p-3)+ Math.abs(q-3));
	}
}