import java.io.*;
import java.util.*;

public class bfs {
    public static int N,M;
    public static int [][] board = new int [200][200];
    public static int dx[] = {-1, 1, 0, 0};
    public static int dy[] = {0, 0, -1, 1};

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        Queue<Node> q = new LinkedList<>();
        N = scanner.nextInt();
        M = scanner.nextInt();
        scanner.nextLine();

        for(int i = 0; i < N; i++) {
            String str = scanner.nextLine();
            for(int j = 0; j< M; j++) {
                board[i][j] = str.charAt(j) - '0';
            }
        }
        scanner.close();

        q.add(new Node(0, 0));

        while (!q.isEmpty()) {
            Node pos = q.poll();
            for (int i = 0; i < 4; ++i) {
                int nx = pos.getX() + dx[i];
                int ny = pos.getY() + dy[i];
                if (nx < 0 || ny < 0 || nx >= M || ny >= N || board[ny][nx] == 0 || board[ny][nx] > 1) continue;
                board[ny][nx] = board[pos.getY()][pos.getX()] + 1;
                if (ny == M - 1 && nx == N - 1) return;
                q.add(new Node(nx, ny));
            }
        }

        System.out.println(board[N-1][M-1]);
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

