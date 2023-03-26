public class Student {
    private String sNO;
    private String sName;
    private String sSex;
    private int sAge;
    private int sJava;

    // 构造方法
    public Student(String no, String name, String sex, int age, int java) {
        sNO = no;
        sName = name;
        sSex = sex;
        sAge = age;
        sJava = java;
    }

    // Getter方法
    public String getNo() {
        return sNO;
    }

    public String getName() {
        return sName;
    }

    public String getSex() {
        return sSex;
    }

    public int getAge() {
        return sAge;
    }

    public int getJava() {
        return sJava;
    }

    public static void main(String[] args) {
        // 创建五个学生对象
        Student s1 = new Student("001", "张三", "男", 20, 80);
        Student s2 = new Student("002", "李四", "女", 19, 90);
        Student s3 = new Student("003", "王五", "男", 22, 75);
        Student s4 = new Student("004", "赵六", "女", 21, 85);
        Student s5 = new Student("005", "钱七", "男", 20, 82);

        // 输出每个学生的信息
        System.out.println(s1.getNo() + "\t" + s1.getName() + "\t" + s1.getSex() + "\t" + s1.getAge() + "\t" + s1.getJava());
        System.out.println(s2.getNo() + "\t" + s2.getName() + "\t" + s2.getSex() + "\t" + s2.getAge() + "\t" + s2.getJava());
        System.out.println(s3.getNo() + "\t" + s3.getName() + "\t" + s3.getSex() + "\t" + s3.getAge() + "\t" + s3.getJava());
        System.out.println(s4.getNo() + "\t" + s4.getName() + "\t" + s4.getSex() + "\t" + s4.getAge() + "\t" + s4.getJava());
        System.out.println(s5.getNo() + "\t" + s5.getName() + "\t" + s5.getSex() + "\t" + s5.getAge() + "\t" + s5.getJava());

        // 计算平均值
        double avg = (s1.getJava() + s2.getJava() + s3.getJava() + s4.getJava() + s5.getJava()) / 5.0;
        System.out.println("Java语言平均成绩：" + avg);

        // 计算最大值和最小值
        int max = s1.getJava();
        int min = s1.getJava();
        if (max < s2.getJava()) {
            max = s2.getJava();
        }
        if (max < s3.getJava()) {
            max = s3.getJava();
        }
        if (max < s4.getJava()) {
            max = s4.getJava();
        }
        if (max < s5.getJava()) {
            max = s5.getJava();
        }
        if (min > s2.getJava()) {
            min = s2.getJava();
        }
        if (min > s3.getJava()) {
            min = s3.getJava();
        }
        if (min > s4.getJava()) {
            min = s4.getJava();
        }
        if (min > s5.getJava()) {
            min = s5.getJava();
        }
        System.out.println("Java语言最高成绩：" + max);
        System.out.println("Java语言最低成绩：" + min);
    }
}
