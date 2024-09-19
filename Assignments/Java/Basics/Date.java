class Date{
	private int day;
	private int month;
	private int year;
	public void display(){
		System.out.println(day + "/" + month +"/" + year);
	}
	Date(){
		day = 1;
		month = 1;
		year = 2000;
	}
	void getDate(){
		System.out.println(day + "/" + month + "/" + year);
	}
	void setDate(int day, int month, int year){
		this.day = day;
		this.month = month;	
		this.year = year;
	}
}