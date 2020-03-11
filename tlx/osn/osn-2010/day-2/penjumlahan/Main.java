import java.math.BigInteger;
import java.io.*;
import java.util.*;

public class Main {
	public static void main(String args[]) throws IOException {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String s;
		s = in.readLine();
		BigInteger a = new BigInteger(s);
		s = in.readLine();
		BigInteger f = new BigInteger(s);
		System.out.println(a.add(f));
	}
}
