import java.util.Scanner;
public class Main {
    public static void main(String[] args)
    {
        int i,j,k;
        System.out.println("请在下面输入输入所构建金字塔的高度：");
        Scanner test=new Scanner(System.in);
        int high = test.nextInt();
        for(i=1;i<=high;i++)
        {
            for(j=1;j<=high-i;j++)
            {
                System.out.print(" ");
            }
            for(k=1;k<=2*i-1;k++)
            {
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}