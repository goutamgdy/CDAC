
#include <iostream>
#include <string>
using namespace std;
class Player
{
    int id;
    int runs;
    int wicketsTaken;
    int inningsPlayed;
    char name[20];

    static int playerCount;

public:
    Player();
    Player(int, int, int, const char *);
    void display();
};


Player :: Player(){
    this->id = this->playerCount;
    this->runs = 0;
    this->inningsPlayed = 0;
    this-> wicketsTaken = 0;
    strcpy(this->name, "new player");
    this->playerCount++;
}

Player :: Player(int runs, int inningsPlayed, int wicketsTaken, const char* name){
    this->id = this->playerCount;
    this->runs = runs;
    this->inningsPlayed = inningsPlayed;
    this->wicketsTaken = wicketsTaken;
    strcpy(this->name, name);

    this->playerCount++;
}

void Player::display()
{
    cout << endl
         << "Player Details" << endl
         << "id: " << this->id << endl
         << "runs: " << this->runs << endl
         << "inningsPlayed: " << this->inningsPlayed << endl
         << "wickets taken: " << this->wicketsTaken << endl
         << this->name << endl;
}


int main(){
    Player p1;
    Player p2(100, 1, 1, "Jayesh");
    Player p3(100, 1, 1, "Satyam");

    p1.display();
    p2.display();
    p3.display();
}