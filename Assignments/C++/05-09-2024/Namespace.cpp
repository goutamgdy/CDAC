#include <iostream>
using namespace std;

namespace KnowIT{
    namespace PGDAC{
        void countStudent(){
            cout<<"\n\n\t Count: 120";
        }
        int numOFSubjects = 8;
        class Student{
            int PRN;
            char name{20};
        };
    }
    namespace PGDBDA{
        void countStudent(){
            cout<<"\n\n\t Count: 60";
        }
        int numOFSubjects = 6;
        class Student{
            int PRN;
            char name[20];
        };
    }
}
using namespace KnowIT;
int main(){
    PGDAC::countStudent();
    using namespace KnowIT;
    PGDBDA::countStudent();
    return 0;
}