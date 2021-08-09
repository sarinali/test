import java.io.*;
import java.util.*;

public class postfix {
    static BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
    static StringTokenizer st;
    static Stack<Double> j = new Stack<Double>();
    static String h;
    static ArrayList<String> ar = new ArrayList<String>();
    public static void main(String[] args) throws Exception{
        h = readLine();
        StringTokenizer s = new StringTokenizer(h);
        while(s.hasMoreTokens()) {
            ar.add(s.nextToken());
        }
        for (int i = 0; i < ar.size(); i++) {
            String g = ar.get(i);
            if(g.equals("*")) {
                double x = j.pop(); double y = j.pop();
                j.push(x*y);
            } else if (g.equals("+")) {
                double x = j.pop(); double y = j.pop();
                j.push(x+y);
            } else if (g.equals("^")) {
                double x = j.pop(); double y = j.pop();
                j.push(Math.pow(y, x));
            } else if (g.equals("/")) {
                double x = j.pop(); double y = j.pop();
                j.push(y/x);
            } else if (g.equals("%")) {
                double x = j.pop(); double y = j.pop();
                j.push(y%x);
            } else if (g.equals("-")) {
                double x = j.pop(); double y = j.pop();
                j.push(y-x);
            }else {
                j.push(Double.parseDouble(g));
            }
        }
        System.out.println(j.peek());
    }
    static String next() throws IOException {
        while (st == null || !st.hasMoreTokens())
            st = new StringTokenizer(br.readLine().trim());
        return st.nextToken();
    }

    static long readLong() throws IOException {
        return Long.parseLong(next());
    }

    static int readInt() throws IOException {
        return Integer.parseInt(next());
    }

    static double readDouble() throws IOException {
        return Double.parseDouble(next());
    }

    static char readCharacter() throws IOException {
        return next().charAt(0);
    }

    static String readLine() throws IOException {
        return br.readLine().trim();
    }
}