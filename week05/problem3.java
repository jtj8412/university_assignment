import java.util.*;

public class problem3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.nextLine();
        int[] dx = {-2, -1, 1, 2, 2, 1, -1, -2};
        int[] dy = {-1, -2, -2, -1, 1, 2, 2, 1};
        int r = s.charAt(1) - '0', c = s.charAt(0) - 'a' + 1, ans = 0, nc, nr;        

        for (int i = 0; i < 8; ++i) {
            nr = r + dx[i];
            nc = c + dy[i];
            if (nr >= 1 && nr <= 8 && nc >= 1 && nc <= 8) ans++;
        }
        System.out.println(ans);
    }
}