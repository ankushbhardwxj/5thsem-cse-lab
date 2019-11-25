#include<iostream>
using namespace std;
class emp{
public: int empid, salary;
        char name[10], dept[10];
        void getdata(){
          cin>>name;
          cin>>dept;
          cin>>empid;
          cin>>salary;
        }
        void showdata(){
          cout<<"name"<<name<<endl;
          cout<<"dept"<<dept<<endl;
          cout<<"empid"<<empid<<endl;
          cout<<"salary"<<salary<<endl;
        }
};

int main(){
  emp e[5];
  for(int i=0;i<5;i++){
    e[i].getdata();
  }
  for(int i=0;i<5;i++){
    cout<<"Emp no"<<i+1<<"details"<<endl;
    e[i].showdata();
  }
  return 0;
}
