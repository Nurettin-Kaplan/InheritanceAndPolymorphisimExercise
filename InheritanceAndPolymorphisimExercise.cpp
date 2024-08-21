#include <iostream>

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
    Person() {
        cout << "An instance has been derived from Person." << endl;
    }
};

int main(){



    return 0;
}
