import java.math.BigInteger;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String args[]) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String s = in.readLine();
		BigInteger val = new BigInteger(s);
		BigInteger f = new BigInteger("1000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000");  
		BigInteger a = new BigInteger("0");
		BigInteger b = new BigInteger("1");
		BigInteger i = new BigInteger("1");
		for(; i.compareTo(f) < 0; i = i.add(new BigInteger("1"))) {
			if(a.compareTo(val) == 0) {
				System.out.println(i);
				break;
			} 
			if(a.compareTo(val) == 1) {
				System.out.println("0");
				break;
			}
			BigInteger tmp = b.add(a);
			a = b;
			b = tmp;
		}
		
	}
}
