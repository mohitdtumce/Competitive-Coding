import java.util.*;
import java.lang.*;
import java.io.*;
public class TestClass {

	public static void main(String[] args) throws java.lang.Exception {
		char a;
        int temp=0;
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        String line,out;
        while((line = in.readLine())!=null){
    		out="";
    		temp=0;
    		for(int i = 0; i < line.length(); i++)
    		{
    			if(i!=line.length()-1){
    				char c = line.charAt(i);
    			 	char d = line.charAt(i+1);
    				if(c=='-' && d =='>' && temp < 1){
    					out=out+'.';
    					i++;
    				}
    				else if( c == '/' && d == '/'){
    					out+=c;
    					out+=d;
    					i++;
    					temp=temp+1;
    				}else{
    					out+=c;
    				}
    				
    			}else{
    				char c = line.charAt(i);
    				out+=c;
    			}
			 	
    		}
    		System.out.println(out);
        }
	}
}