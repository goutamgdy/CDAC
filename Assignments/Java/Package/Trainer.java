package office.staff.trainer;
public class Trainer{
    private int id;
    private String name;
    private String subject;
    public Trainer(){
        id = 100;
        name = "NA";
        subject = "NULL";
    }
    public Trainer(int id, String name, String subject){
        this.id = id;
        this.name = new String(name);
        this.subject = new String(subject);
    }
    public void  display(){
        System.out.println("Trainer ID: " + id + " Name: " + name + " Subject: " + subject);
    }
}