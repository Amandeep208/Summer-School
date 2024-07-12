// #include<iostream>
// #include<string>
// using namespace std;
// class string{

// };

// int main(){
//     std::string s1="sbv";
//     cout<<s1.length();
//     return 0;
// }

/*
Create a class student having following data members:
1. Student id
2. name
3. total marks
and implement function addGrade(), getAverage(), and setStudentDetails()
*/

#include<iostream>
#include<string>
using namespace std;
class student{
private:
    int student_id;
    char name[30];
    int total_marks;
public:
    student(){
        cout<<"Enter the ID of the Student: ";
        cin>>student_id;
        cout<<"Enter the Name of the Student: ";
        cin>>name;
        cout<<"Enter the Total Marks of the Student: ";
        cin>>total_marks;
    }
    int getdata(){
        cout<<"The Student with ID: "<<student_id;
        cout<<" and Name: "<<name;
        cout<<" scored "<<total_marks<<" marks"<<endl;
    }
    int average(){
        cout<<"Percentage: "<<total_marks/5<<"%" ;
    }
    void getGrade(){
        float avg = total_marks/5;
        if (avg>90){
            cout<<"Grade: A+ \n";
        }
        else if(avg>80){
            cout<<"Grade: A \n";
        }
        else{
            cout<<"You Get Less Marks \n";
        }
    }
};
int main(){
    student s = student();
    s.getdata();
    s.getGrade();
    s.average();
}