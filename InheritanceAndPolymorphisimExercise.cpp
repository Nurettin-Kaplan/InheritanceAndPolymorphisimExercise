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

    Person item1 = Person();
    item1.setName("Nurettin");
    item1.setAge(22);

    cout << item1.toString() << endl;
     
    return 0;
}
