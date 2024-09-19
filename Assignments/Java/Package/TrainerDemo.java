import office.staff.trainer.Trainer;
import office.student.Student;
public class TrainerDemo {
    public static void main(String[] args){
        Trainer t1 = new Trainer(1000, "Bakul", "Core Java");
        t1.display();
        int []marks = new int[3];
        Student s1 = new Student(1000, "Bakul", marks);
        s1.AssignMarks();
        s1.display();   
    }
}
