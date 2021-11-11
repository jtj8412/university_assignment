import java.util.*;

public class problem2{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt(), answer, hour = (15 * 45) + (60 * 15);
        answer = (n + 1) * hour;
        if (answer >= 3) answer = (answer - hour) + 3600;
        System.out.println(answer);
    }
}