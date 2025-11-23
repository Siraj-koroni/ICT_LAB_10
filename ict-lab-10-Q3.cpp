#include<iostream>
using namespace std;

class Book{
    private:
     double price;

     public:
      string title;

      int getPrice(){
       return price;
      }
      void setPrice(int i){
        price=i;
      }
      
      void updated(){
        cout<<"Book title: "<<title<<endl;
        cout<<"Updated price: "<<price<<endl;

      }
      
};
int main(){
    Book B;
    B.title="ICT";

    B.setPrice(2300);
    B.updated();
}