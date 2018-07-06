import java.util.*;
public class Set{
	public static void main(String[] args){
		
		Scanner input = new Scanner(System.in);
		int x1, y1, x2, y2;
		x1 = input.nextInt();
		y1 = input.nextInt();
		x2 = input.nextInt();
		y2 = input.nextInt();
		int x3, y3, x4, y4;
		if( x1 == x2 && y1 != y2){
			
			x3 =  x1 + (y2 -y1);
			y3 = y1;
			x4 =  x2 + (y2 -y1);
			y4 =y2;
			
			
		}else if( x1 != x2 && y1 == y2){
			x3 = x1;
			y3 = y1 + (x2 -x1);
			x4 = x2;
			y4 =  y2 + (x2 -x1);
			
		}else if(x1 != x2 && y1 != y2 && Math.abs(x1-x2) == Math.abs(y1-y2)){
			
			x3 = x1;
			y3 = y2;
			x4 = x2;
			y4 = y1;
		}else{
			System.out.print(-1);
			return;
		}
		System.out.print(x3 + " " + y3 + " " + x4 +" "+y4);
	}
}