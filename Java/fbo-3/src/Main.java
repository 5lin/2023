import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int a=1,b=1,c=0,num=2;
        System.out.println("请输入需要的斐波那契数：");
        Scanner test=new Scanner(System.in);
                int fbo= test.nextInt();
        if(fbo==1||fbo==2){
            System.out.println("所求斐波那契数为：1");
            return;
        }
        else{
            while(num<fbo)
            {
                c=a+b;
                a=b;
                b=c;
                num++;
            }
        }
        System.out.println("所求斐波那契数是："+c);
    }
}