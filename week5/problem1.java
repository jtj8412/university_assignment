import java.util.*;

public class problem1{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int dx[] = {0, -1, 1, 0}, dy[] = {-1, 0, 0, 1};
        int n = scanner.nextInt(), i, nx, ny, x = 1, y = 1, idx;
        scanner.nextLine();
        String s = scanner.nextLine();

        for (i = 0; i < s.length() ; ++i) {
            if (s.charAt(i) == ' ') continue;
            idx = s.charAt(i) % 5;
            nx = x + dx[idx]; ny = y + dy[idx];
            if (nx < 1 || nx > n || ny < 1 || ny > n) continue;
            x = nx; y = ny;
        }

        System.out.println(x + " " + y);
    }
}