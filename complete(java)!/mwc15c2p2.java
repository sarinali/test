import java.io.*;
import java.util.*;

public class mwc15c2p2 {
	static int n;
	static int ar[];
	static int ind[];
	static Stack<Integer> s;
	public static void main(String args[]) throws Exception {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		n = Integer.parseInt(br.readLine());
		String in[] = br.readLine().split(" ");
		ar = new int[n]; ind = new int[n];
		s = new Stack<Integer>();
		s.push(0);
		System.out.print(0);
		for (int i = 1; i < n; i++) {
			ar[i] = Integer.parseInt(in[i]);
			ind[i] = 0;

			while (s.size() > 0 && ar[i] >= ar[s.peek()]) {
				s.pop();
			}
			if (s.isEmpty() || ar[i] < ar[s.peek()]) {
				s.push(i);
				if (s.size() == 1) {
					ind[i] = i;
				}else {
					ind[i] = i - s.get(s.size() -2);
				}
			}
			System.out.print(" " + ind[i]);
		}
	}
}