/*enter the number of total number of student in class
in this we know the or enter the number of boys are 
there in that class
if an exam is conducted and said that a X% of STUDENTS
 are passed in A grade then ...IMP STUDENTS==TOTAL
find the number of girls passed in the grade A in that class*/
#include<iostream>
using namespace std;
int main(){
    int nOfGirls,nOfBoys,totalStu,per;
    cout<<"enter the total no of students in the class ";
    cin>>totalStu;
    cout<<"enter the total percentage of particular grade ";
    cin>>per;
    cout<<"enter the number of boys in the class ";
    cin>>nOfBoys;
    int totalStuInGrade;
    totalStuInGrade=per*totalStu/100;
    //  totalStuInGrade=per*(totalStu/100); IS WRONG
    nOfGirls=totalStuInGrade-nOfBoys;
    cout<<"the number of girls scorred the particular"
    "grade in the class are  "<<nOfGirls;
    return 0;
}
