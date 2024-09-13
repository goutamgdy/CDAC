class Employee{
	int e_id;
	String name;
	double salary;
	public Employee(){
		e_id = 100;
		name = "NA";
		salary = 10000.00;
	}
	public Employee(int e, String n, double s){
		e_id = e;
		name = n;
		salary = s;
	}
	public Employee(int e, String n){
		this(e, n, 50000.00);
	}
	public void display(){
		System.out.println("ID: " + e_id + " Name: " + name + " Salary: " + salary);
	}
}
class EmployeeDemo{
	public static void create(Employee[] emparr){
		 // create must be static because we are calling it in main without object, same with the displayArr
		emparr[0] = new Employee();
		emparr[1] = new Employee(101, "Satish Patidar", 40000);
		emparr[2] = new Employee(103, "Vijay");
		emparr[3] = new Employee(104, "Ajay");
		emparr[4] = new Employee();
	}
	public  static void displayArr(Employee[] emparr){
		for(int i = 0 ;i<emparr.length;i++){
			emparr[i].display();
		}
	}
	public static void main(String[] args){
		Employee [] emparr = new Employee[5];
		create(emparr);
		displayArr(emparr);
	}
	// public static void main(String[] args){} // it  is same signature method, cant be overloaded
}