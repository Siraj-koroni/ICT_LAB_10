#include<iostream>
using namespace std;

class patient
{
private:
    int age;
    string diseases;
public:
    int getAge(){
        return age;
    }

    void setAge(int a){
        age=a;
    }
     string getDiseases(){
        return diseases;
    }
    void setDiseases(string d){
         diseases=d;
    }
    void patientDetail(){
        cout<<"Patient Age:"<<age<<endl;
        cout<<"Diseases:"<<diseases<<endl;
    }
};
int main(){
    patient p1;
    p1.setAge(24);
    p1.setDiseases("Heart cancer,flu,dengue");
    p1.patientDetail();
}
