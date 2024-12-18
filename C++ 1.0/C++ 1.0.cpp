#include <iostream>

using namespace std;

class Mobile {
protected:
    bool presenceOfButton;
public:
    Mobile() {
        presenceOfButton = 1;
    }
    virtual void Info() {
        cout << "Power button: " << presenceOfButton << endl;
    }
    virtual void Behavior() {
        cout << "Call." << endl;
    }
};

class Smartfone : public Mobile {
public:
    Smartfone() {
        presenceOfButton = 0;
    }
    void Info() override {
        cout << "Touch screen: " << presenceOfButton << endl;
    }
    void Behavior() override {
        cout << "Play video games." << endl;
    }
};

class Camerafone : public Mobile {
public:
    Camerafone() {
        presenceOfButton = 1;
    }
    void Info() override {
        cout << "The presence of a cool camera: " << presenceOfButton << endl;
    }
    void Behavior() override {
        cout << "Shoot tiki talkies." << endl;
    }
};

int main()
{
    Mobile* obj = new Smartfone();
    obj->Info();
    obj->Behavior();

    obj = new Camerafone();
    obj->Info();
    obj->Behavior();
}