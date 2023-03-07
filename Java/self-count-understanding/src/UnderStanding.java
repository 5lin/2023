public class UnderStanding {
    public static void main(String[] args) {
        //为了更好的理解自增和自减运算符，于是有了这个项目

        //from chatgpt：a++ 和 ++a 都是 C++ 中的自增运算符，它们的区别在于：
        //
        //a++ 是后置自增运算符，先返回 a 的值，再将 a 的值加 1。
        //++a 是前置自增运算符，先将 a 的值加 1，再返回 a 的值。
        int c=8,d=10;
        d=c++;
        //自己试试调整符号看看输出结果？
        System.out.println("此时d的结果是"+d);
    }
}
