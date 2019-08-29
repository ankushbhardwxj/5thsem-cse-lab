#include<iostream>
using namespace std;
class stud{
public:
  int roll, sem;
  string name;
  void getdata(){
    cin>>roll>>name>>sem;
  }
  void showdata(){
    cout<<roll<<' '<<name<<' '<<sem;
  }
};
int main(){
  stud s;
  s.getdata();
  s.showdata();
  return 0;
}
