import java.io.*;
import java.util.Scanner;

public class problem {
    public static int dx[] = {0, 0, -1, 1}, dy[] = {-1, 1, 0, 0};
    public static int N, M;
    public static int [][] board;

    public static void dfs(int x, int y) {
        board[y][x] = 1;
        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || nx >= M || ny < 0 || ny >= N || board[ny][nx] == 1) continue;
            dfs(nx, ny);
        }
    }

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int answer = 0;

        N = scanner.nextInt();
        M = scanner.nextInt();
        scanner.nextLine();

        board = new int[N][M];
        for(int i = 0; i < N; i++) {
            String str = scanner.nextLine();
            for(int j = 0; j < M; j++) {
                board[i][j] = str.charAt(j) - '0';
             }
        }
        scanner.close();
        
        for(int i = 0; i < N; i++) for(int j = 0; j < M; j++){
            if (board[i][j] == 1) continue;
            dfs(j, i);
            ++answer;
        }
        System.out.println(answer);
    }
}