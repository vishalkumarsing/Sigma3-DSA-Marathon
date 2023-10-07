import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.StringTokenizer;

public class B {
	
	static IOHandler sc = new IOHandler();
	static PrintWriter out = new PrintWriter(System.out);
	
	public static void main(String[] args) throws IOException {
		
        new Thread(null, new Solution(), "whatever", 1 << 26 ).start();
    }
	
	private static class Solution implements Runnable {

		public void run() {
			// TODO Auto-generated method stub
			int testCases = sc.nextInt();
			
			for (int i = 1; i <= testCases; ++i) {
				solve(i);
			}
			
			out.flush();
		}
		
		private void solve(int t) {
			int n = sc.nextInt();
			
			int result = Integer.MAX_VALUE;
			
			int d, s, val;
			
			for (int i = 0; i < n; ++i) {
				d = sc.nextInt();
				s = sc.nextInt();
				
				val = d + (s - 1) / 2;
				
				result = Math.min(result, val);
			}
			
			out.println(result);
		}
	}
	
	private static class IOHandler {
      BufferedReader br;
      StringTokenizer st;
 
      public IOHandler() {
         br = new BufferedReader(new InputStreamReader(System.in));
      }
 
      String next() {
          while (st == null || !st.hasMoreElements()) {
              try {
                  st = new StringTokenizer(br.readLine());
              } catch (IOException e) {
                  e.printStackTrace();
              }
          }
          return st.nextToken();
      }
 
      int nextInt() {
          return Integer.parseInt(next());
      }
      
      int [] readArray(int n) {
    	  int [] res = new int [n];
    	  
    	  for (int i = 0; i < n; ++i)
    		  res[i] = nextInt();
    	  
    	  return res;
      }
      
      int [] readArray2(int n) {
    	  int [] res = new int [n + 1];
    	  
    	  for (int i = 1; i <= n; ++i)
    		  res[i] = nextInt();
    	  
    	  return res;
      }
      
      int [][] readGraph(int n, int m, int c) {
    	  int [][] graph = new int [n + 1][];
    	  
    	  int [] count = new int [n + 1];
    	  int [][] arr = new int [m][1 + c];
    	  
    	  int a, b;
    	  
    	  for (int i = 0; i < m; ++i) {
    		  a = sc.nextInt();
    		  b = sc.nextInt();
    		  
    		  arr[i][0] = a;
    		  arr[i][1] = b;
    		  
    		  ++count[a];
    		  ++count[b];
    		  
    		  for (int j = 2; j <= c; ++j) {
    			  arr[i][j] = sc.nextInt();
    		  }
    	  }
    	  
    	  for (int i = 0; i <= n; ++i) {
    		  graph[i] = new int [count[i] * c];
    		  count[i] = 0;
    	  }
    	  int swap;
    	  
    	  for (int [] tArr : arr) {
    		  for (int j = 1; j < tArr.length; ++j) {
    			  graph[tArr[0]][count[tArr[0]]++] = tArr[j]; 
    		  }
    		  
    		  swap = tArr[0];
    		  tArr[0] = tArr[1];
    		  tArr[1] = swap;
    		  
    		  for (int j = 1; j < tArr.length; ++j) {
    			  graph[tArr[0]][count[tArr[0]]++] = tArr[j]; 
    		  }
    	  }
    	  
    	  return graph;
      }
 
      long nextLong() {
          return Long.parseLong(next());
      }
 
      double nextDouble() {
          return Double.parseDouble(next());
      }
 
      String nextLine(){
          String str = "";
		  try {
		     str = br.readLine();
		  } catch (IOException e) {
		     e.printStackTrace();
		  }
		  return str;
      }

   }

}

