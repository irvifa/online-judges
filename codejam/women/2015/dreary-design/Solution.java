import java.util.*;

public class Solution {

    private String solve(Scanner scanner) {
        long k=scanner.nextLong(), v=scanner.nextLong();
        return String.valueOf((3*v*v+3*v+1)*(k-v)+(v+1)*(v+1)*(v+1));
    }

    public static void main(String[] args) throws Exception {
        Scanner scanner=new Scanner(System.in);
        int times=scanner.nextInt();
        for (int t=1;t<=times;t++) {
            System.out.println(String.format("Case #%d: %s", t, new Solution().solve(scanner)));
        }
    }

}
