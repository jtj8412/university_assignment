import java.io.*;
import java.util.*;

public class bfs {
    public static int N, M, answer = 0;
    public static int [][] board = new int [200][200];
    public static int dx[] = {-1, 1, 0, 0};
    public static int dy[] = {0, 0, -1, 1};


    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        M = scanner.nextInt();
        scanner.nextLine();

        for(int i = 0; i < N; i++) {
            String str = scanner.nextLine();
            for(int j = 0; j< M; j++) {
                board[i][j] = str.charAt(j) - '0';
                if (board[i][j] == 1) board[i][j] = 0x7fffffff;
            }
        }
        board[0][0] = 1;
        scanner.close();

        dfs(0, 0);

        System.out.println(answer);
    }

    public static void dfs(int x, int y) {
        if (x == M - 1 && y == N - 1) {
            answer = board[y][x];
            return;
        }

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i], ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= M || ny >= N || board[ny][nx] == 0 || board[ny][nx] <= board[y][x] + 1) continue;
            board[ny][nx] = board[y][x] + 1;
            dfs(nx, ny);
        }
    }

    public static class Node{
        final private int x;
        final private int y;
        Node(int x, int y){
            this.x = x;
            this.y = y;
        }
        public int getX() { return x; }
        public int getY() { return y; }
    } 
}

