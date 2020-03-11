import java.util.*;

public class Solution {

    private String solve(Scanner scanner) {
        int r=scanner.nextInt(), c=scanner.nextInt();
        long[][] dp=new long[r+1][c+1];
        for (int i=1;i<=c;i++)
            dp[1][i]=1;
        for (int i=1;i<=r;i++)
            dp[i][1]=1;
        for (int i=2;i<=r;i++) {
            for (int j=2;j<=c;j++) {
                dp[i][j]=1;
                for (int x=2;x<=i;x++) {
                    for (int y=2;y<=j;y++) {
                        dp[i][j]+=dp[x-1][y-1];
                    }
                }
            }
        }
        return String.valueOf(dp[r][c]);
    }

    public static void main(String[] args) throws Exception {
        Scanner scanner=new Scanner(System.in);
        int times=scanner.nextInt();
        for (int t=1;t<=times;t++) {
            System.out.println(String.format("Case #%d: %s", t, new Solution().solve(scanner)));
        }

    }

}
