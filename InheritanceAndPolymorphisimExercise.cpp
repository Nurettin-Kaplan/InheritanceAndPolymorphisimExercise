#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void setName(string value) {
        this->name = value;
    }
    string getName() {
        return name;
    }
    void setAge(int value) {
        this->age = value;
    }
    int getAge() {
        return age;
    }
};

class Student : public Person{
private:
    int studentsNumber;

public: 
    void setStudentsNumber(int value) {
        this->studentsNumber = value;
    }
    int getStudentsNumber() {
        return this->studentsNumber;
    }
};

class Teacher : public Person {
private:
    string lesson;
public:
    void setLesson(string value) {
        this->lesson = value;
    }
    string getLesson() {
        return this->lesson;
    }
};

int main(){

    return 0;
}
