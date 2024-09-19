package assignment1;
class Team {
    int size;
    Player[]p;
    public Team(int size){
        this.size = size;
        p = new Player[size];
        for(int i =0;i<size;i++){
            p[i] = new Player();
        }
    }
    public void accept(){
        for(int i =0;i<size;i++){
            p[i].accept();
        }
    }
    public void display(){
        for(int i=0;i<size;i++){
            p[i].display();
        }
    }
}
