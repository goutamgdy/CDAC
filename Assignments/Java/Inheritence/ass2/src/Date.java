package  dates;
public class Date {
    int day , month, year;

    public Date() {
    }

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public Date(Date dob) {
        this.day = dob.day;
        this.month = dob.month;
        this.year = dob.year;
    }

    @Override
    public String toString() {
        return "Date{" +
                "day=" + day +
                ", month=" + month +
                ", year=" + year +
                '}';
    }
    public void display(){
        System.out.println("Date: " + day +"/" + month + "/" +year);
    }
}
