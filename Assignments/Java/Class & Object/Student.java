import java.util.Scanner;

class Student{
    private int roll;
    private String name;
    static int NumOfSub;
    private int[] marks;
    static{
        NumOfSub = 4;
    }
    public Student(){
        roll = 100;
        name = "NA";
        NumOfSub  = 4;
        marks = new int[NumOfSub];
    }
    public Student(int roll, String name, int[] marks){
        this.roll = roll;
        //this.name = name; //NullPointerException
        this.name = new String(name);
        this.marks = new int[marks.length];
        for(int i = 0;i<marks.length;i++){
            this.marks[i] = marks[i]; //NullPointerException
        }
    }
    public void AssignMarks(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter marks: ");
        for(int i =0;i<marks.length;i++){
            marks[i] = sc.nextInt();
        }
        sc.close();
    }
    public void display(){
        System.out.println("Roll: " + roll + " Name: " + name + " NumOfSubjects: " + NumOfSub);
        System.out.println("Marks: ");
        for(int i =0;i<marks.length;i++){
            System.out.println(marks[i]);
        }
    }
    
}

class StudentDemo{
    public static void main(String[] args){
        int []marks = new int [Student.NumOfSub]; //If we make NumOfSub as private in Student then it shound be visible 
        Student s1 = new Student(101, "Goutam", marks);
        s1.AssignMarks();
        s1.display();
    }
}