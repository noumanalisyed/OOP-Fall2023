#include <iostream>
#include <string>
#include <cstring>
#include <cstdlib>

using namespace std;

class Person{
    friend ostream & operator<<(ostream& out, Person p);
public:
        Person(){
            name = "";
            address = "";
            cout<<"Person -- Default Constructor called"<<endl;
        }
        Person(string name,string address){
            Person::name = name;
            Person::address = address;
            cout<<"Person -- Overloaded Constructor called"<<endl;
        }

        const string &getName() const {
            return name;
        }

        void setName(const string &name) {
            Person::name = name;
        }

        const string &getAddress() const {
            return address;
        }

        void setAddress(const string &address) {
            Person::address = address;
        }
        string toString(){
            return "Name : "+name+" , Address : "+address+"\n";
        }
private:
    string name;
    string address;
};
ostream & operator<<(ostream& out, Person p){
    out<<p.toString();
    return out;
}


class Student : public Person{
    friend ostream & operator<<(ostream& out, Student s);
public:

    Student(string name, string address):Person(name,address){
        cout<<"Student -- Overloaded Constructor called"<<endl;
    }
    Student(string name, string address, int num):Person(name,address){
        string c[] = {"English","Science","Math","Urdu","Gen Knowledge"};
        numOfCourses = num;
        cout<<"Student -- Overloaded Constructor called"<<endl;
        grades = new int[numOfCourses];
        courses = new string [numOfCourses];
        for (int i = 0; i < numOfCourses; ++i) {
            courses[i] =  c[i];
            grades[i] = 0;
        }
    }
    void addCourseGrade(string course, int grade){
        for (int i = 0; i < numOfCourses; ++i) {
            if(courses[i].compare(course)==0){
                grades[i] = grade;
            }
        }
    }
    double getAverageGrade(){
        totalMarks = 0;
        int count = 0;
        for (int i = 0; i < numOfCourses; ++i) {
            if(grades[i] > 0) {
                totalMarks = totalMarks + grades[i];
                count++;
            }
        }
        return (double)(totalMarks/count);
    }
    void print(){
        cout<<toString();
    }
    string toString(){
        string strMessage = Person::toString();
        for (int i = 0; i < numOfCourses; ++i) {
            strMessage += courses[i]+" Grade = "+ to_string(grades[i])+"\n";
        }
        return strMessage;
    }
private:
    int numOfCourses;
    string *courses;
    int  *grades;
    double totalMarks;
};
ostream & operator<<(ostream& out, Student s){
    out<<s.toString();
    return out;
}

class Teacher : public Person{
    friend ostream & operator<<(ostream& out, Teacher t);
public:

    Teacher(string name, string address):Person(name,address){
        cout<<"Student -- Overloaded Constructor called"<<endl;
    }
    Teacher(string name, string address, int num):Person(name,address){
        count = 0;
        numOfCourses = num;
        cout<<"Teacher -- Overloaded Constructor called"<<endl;
        courses = new string [numOfCourses];
    }
    bool addCourseGrade(string course){
        if(count < numOfCourses) {
            courses[count++] = course;
            return true;
        }
        else{
            return false;
        }
    }
    bool removeCourseGrade(string course){
        if(count < numOfCourses) {
            for (int i = 0; i < count; ++i) {
                if((courses[i].compare(course)) == 0) {
                    courses[i] = "";
                    count--;
                    return true;
                }
            }
        }
        else{
            return false;
        }
    }
    void print(){
        cout<<toString();
    }
    string toString(){
        string strMessage = Person::toString();
        for (int i = 0; i < count; ++i) {
            strMessage += "Subject "+ to_string(i+1)+" = "+courses[i]+"\n";
        }
        return strMessage;
    }
private:
    int count;
    int numOfCourses;
    string *courses;
};
ostream & operator<<(ostream& out, Teacher s){
    out<<s.toString();
    return out;
}
int main() {
    Person person("Ahmad","DHA Lahore");
    cout<<person<<endl;
    Student student("Shahid","Gulberg Lahore",5);
    student.print();
    student.addCourseGrade("Math",90);
    student.addCourseGrade("Science",80);
    student.addCourseGrade("Gen Knowledge",65);
    student.addCourseGrade("English",55);
    student.addCourseGrade("Urdu",60);
    cout<<student<<endl;
    student.print();
    cout<<"Average = "<<student.getAverageGrade()<<endl;
    Teacher teacher("Saqib","Lahore",3);
    teacher.addCourseGrade("Science");
    teacher.addCourseGrade("Math");
    teacher.addCourseGrade("Urdu");
    cout<<teacher;
    return 0;
}
