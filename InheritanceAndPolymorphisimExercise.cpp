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
    virtual string toString() {
        return this->name + " - " + to_string(this->age);
    }
};

class Student : public Person{
private:
    int studentNumber;

public: 
    void setStudentNumber(int value) {
        this->studentNumber = value;
    }
    int getStudentNumber() {
        return this->studentNumber;
    }
    string toString() override {
        return this->name + " - " + to_string(this->age) + " - " + to_string(this->studentNumber);
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
    string toString() override {
        return this->name + " - " + to_string(this->age) + " - " + this->lesson;
    }
};

int main(){

    Person obj1 = Person();
    obj1.setName("Nurettin");
    obj1.setAge(22);
    cout << obj1.toString() << endl;

    Teacher obj2 = Teacher();
    obj2.setName("John");
    obj2.setAge(29);
    obj2.setLesson("Programming");
    cout << obj2.toString() << endl;

    Student obj3 = Student();
    obj3.setName("Clara");
    obj3.setAge(19);
    obj3.setStudentNumber(1016);
    cout << obj3.toString() << endl;
     
    return 0;
}
