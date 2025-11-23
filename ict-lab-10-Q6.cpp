#include<iostream>
using namespace std;

class attendance
{
private:
    int clockInTime=0;
    int clockOutTime=0;
public:
void setClockIn(int tin){
   if (clockInTime==0)
   {
      clockInTime=tin;
   }
   else
    cout<<"\nclock in time is already set."<<endl;
   
}
void setClockOut(int tout){
   if (clockOutTime==0)
   {
      clockOutTime=tout;
   }
   else
     cout<<"\nclock out time is already set."<<endl;
}

int getClockIn(){
 return clockInTime;
}
int getClockOut(){
    return clockOutTime;
}
  void showDetail(){
    cout<<"Clock-in-time:"<<clockInTime<<endl;
    cout<<"Clock-out-time:"<<clockOutTime<<endl;
  }
};

int main(){
 attendance myatt;
 myatt.setClockIn(100);
 myatt.setClockOut(400);
 myatt.showDetail();

 cout << "Access via getter - Clock-in: " << myatt.getClockIn() << endl;
 cout << "Access via getter - Clock-out: " << myatt.getClockOut() << endl;
return 0;
}
