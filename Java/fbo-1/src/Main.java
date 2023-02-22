import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
//        printf("请问你需要求第几位斐波那契数？\n");		//1,1,2,3,5,8,13
        System.out.print("请问你需要求第几位斐波那契数?");
//        scanf("%d",&fbo);
        Scanner test=new Scanner(System.in);
                int fbo= test.nextInt();
        if(fbo==1||fbo==2)
        {
            fbo=1;
        }
        else{
            //fbo=3》》斐波那契=2 				//1,1,2,3,5,8,13
            fbo=calfbo(1,1,fbo-2);
        }
//        printf("你所求的斐波那契数是：%d\n",fbo);
        System.out.print("你所求的斐波那契数是："+fbo);
    }

    //calfbo-detail-function
    static int calfbo(int a,int b,int count){
        count--;
        //	三目运算符   count用来计算所需次数
//	printf("a=%d b=%d count=%d\n",a,b,count);
        return count != 0 ? calfbo(b,a+b,count) : a+b;
    }
}