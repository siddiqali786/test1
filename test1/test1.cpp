#include <iostream>
#include <memory>
using namespace std;
class A {
public:
	virtual void tree(){
		cout << "base class tree" << endl;
	}
	void tree1() {
		cout << "base class" << endl;
	}
};
class B :public A {
public:
	void tree() {
		cout << "derived class" << endl;
	}
	void tree1() {
		cout << "derived class" << endl;
	}
};
void main() {
	unique_ptr<A> ptr(new B());
	ptr->tree();
	ptr->tree1();
	//testing the github
}