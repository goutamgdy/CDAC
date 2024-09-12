#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
# include<cstring>
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
    void accept();
    int getRuns();
    char* getName() { return name; }
    int getWickets(){
        return wicketsTaken;
    }
};


int Player :: getRuns(){
    return runs;
}

Player::Player()
{
    this->id = this->playerCount;
    this->runs = 0;
    this->inningsPlayed = 0;
    this->wicketsTaken = 0;
    strcpy(this->name, "New Player");

    this->playerCount++;
}

Player::Player(int runs, int inningsPlayed, int wicketsTaken, const char *name)
{
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

void Player::accept()
{
    cout << endl
         << "Enter the name of the player\t";
    cin >> this->name;

    cout << endl
         << "Enter the total runs of player\t";
    cin >> this->runs;

    cout << endl
         << "Enter the innings played by the player\t";
    cin >> this->inningsPlayed;

    cout << endl
         << "Enter the wickets taken by the player\t";
    cin >> this->wicketsTaken;
}


Player getMaxRuns(Player arr[], int size){
    Player mx = arr[0];
    for(int i = 1;i<size;i++){
        if(arr[i].getRuns() > mx.getRuns()){
            mx = arr[i];
        }
    }
    return mx;
}

Player getMaxWicketTaker(Player arr[], int size){
    Player mx = arr[0];
    for(int i =1;i<size;i++){
        if(arr[i].getWickets() > mx.getWickets()){
            mx = arr[i];
        }
    }
    return mx;
}
int Player::playerCount = 0;

int main()
{
    Player players[3];

    for (int i = 0; i < 3; i++)
    {
        players[i].accept();
    }

    for (int i = 0; i < 3; i++)
    {
        players[i].display();
    }
    Player maxRunPlayer = getMaxRuns(players, 3);
    Player maxWicketTaker =  getMaxWicketTaker(players, 3);
    cout << endl
         << "Player with the maximum runs is: " << maxRunPlayer.getName() 
         << " with " << maxRunPlayer.getRuns() << " runs." << endl;
    cout << endl
         << "Player with the maximum wickets is: "<< maxWicketTaker.getName()
         << " with " << maxWicketTaker.getWickets()<<" wickets. "<<endl;
    return 0;

}