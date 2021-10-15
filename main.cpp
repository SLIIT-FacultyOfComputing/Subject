#include <iostream>
using namespace std;

class Subject{

//data member
private:
int subjectId;
string subjectName;
string description;

//member function
public:
 void setsubject(int sid,string sName);
 void setsubject();


};
void Subject::setsubject(int sid,string sName){
   subjectId = sid;
   subjectName = sName;

}
void Subject::setsubject(){
    return setsubject();
}

int main() {
  
  
//object of student class
Subject sub1;
Subject sub2;

sub1.setSubjectId(1201);
sub1.setSubjectName("IWT");

sub2.setSubjectId(1202);
sub2.setSubjectName("OOC");

cout<<sub1.setSubject()<<endl;
cout<<sub2.setSubject()<<endl;

}



