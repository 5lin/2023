public class Main {
    //↓新建一个新类，作为对象
    static public class Person{
        String name;
        int age;
        String sex;
    }
    public static void main(String[] args) {
    Person p1=new Person();
    Person p2=new Person();
    p1.name="小明";
    p1.age=18;
    p1.sex="Male";
    p2.name="李华";
    p2.age=20;
    p2.sex="Male";
        System.out.println("姓名"+"\t"+"性别"+"\t"+"年龄");
        System.out.println(p1.name+"\t"+p1.sex+" "+p1.age);
        System.out.println(p2.name+"\t"+p2.sex+" "+p2.age);
    }
}