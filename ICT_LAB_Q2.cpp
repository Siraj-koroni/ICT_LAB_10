#include<iostream>
using namespace std;
class member
{

public:
   string name;
   int validity;
   member(string n,int v){
     name=n;
     validity=v;
   }
   void extendMembership(int month){
    validity+=month;
   }
   void showDetails(){
      cout<<"Member name: "<<name<<endl;
      cout<<"Validty: "<<validity<<endl;
   }
};

int main(){
    member m1("Asif",4);
    member m2("Hamid",8);
    m1.extendMembership(5);
    m2.extendMembership(3);

    m1.showDetails();
    m2.showDetails();
    return 0;
}

