import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("请输入第一个数：");
        int a = input.nextInt();
        System.out.print("请输入第二个数：");
        int b = input.nextInt();
        System.out.println("交换前：a = " + a + ", b = " + b);
        // 交换 a 和 b 的值
        int temp = a;
        a = b;
        b = temp;
        System.out.println("交换后：a = " + a + ", b = " + b);
    }
}