#include <iostream>
using namespace std;

//
//Encapsulation
// 

class Man
{
  //Perfect Encapsulation
   private:
      int age;
      int weight;
   public:
      void eat(){
        cout << "Not Eating!!" << endl;
      }
   //Using getters and setters for accessing private states
      int getAge(){
        return this->age;
      }
      void setAge(int age){
        this->age = age;
      }
      int getWeight(){
        return this->weight;
      }
      void setWeight(int weight){
        this->weight = weight;
      }
        
};

//
//Inheritance
//

//Parent Class
class Animal
{
   public: 
      int age;
      int weight;

      void eat(){
        cout << "Not in a condition of eating. "<<endl;
      }
};

//Child Class
class dog:public Animal{

};

//
//Types of Inheritance
//

//Single level Inheritance

class Car1 {
  public:
    string brand;
    int weight;
    int age;

    void speedUp() {
      cout << "Speeding Up!!" << endl;
      cout << "Speed increased to : 150 km/h" <<endl;
    }
    void breakDown() {
      cout << "Breaking Down!!" << endl;
      cout << "Speed decreased to : 20 km/h" << endl;
    }
};

class Scorpio1: public Car1 {

};

// Multi-level

class fruit{

   public: 
   string name;
};

class mango:public fruit{
    public:
    int weight;
};

class Alphanso:public mango{
    public:
    int sugarLevel;
};

//Multiple

class A {
   public: 
     int physics;
     int chemistry;
     A(){
       chemistry = 100;
     }
};

class B {
   public: 
     int chemistry;
    B(){
      chemistry = 98;
    }
};

class C: public A, public B {
   public: 
     int maths;
     
};

//Hierarchical

class Car{
  public:
    int age;
    int weight;

    void speedUp(){
      cout << "Trying to speed up !!" << endl;
    }
};

class Scorpio:public Car{
 
};
class Fortuner:public Car{

};


//
//Polymorphism
//

class Maths{
  public:
    int sum(int a, int b) {
      cout << "Ist process executed. " << endl;
      return a+b;
    }
    int sum(int a, int b, int c) {
      cout << "IIst process executed. " << endl;

      return a+b+c;
    }
   int sum(int a, float b) {
     cout << "IIIst process executed. " << endl;
      return a+b;
    }
};


class Param{
  public:
   int val;

  void operator+(Param& obj2) {
    int value1 = this->val;
    int value2 = obj2.val;
    cout << (value2-value1) << endl;
  }

};
int main() {

  // Inheritance
  
  dog d1;
  d1.eat();

  // Types of Inheritance

  //Single Inheritance
  
  Scorpio1 Amolaks11;
  Amolaks11.speedUp();

   // Multi-level Inheritance

  Alphanso a;
  a.name = "Alphanso";
  a.weight = 2;
  a.sugarLevel = 120;
  cout << a.name << " " << a.weight << " " << a.sugarLevel << endl;

  // Multiple Inheritance
  
  C sub;
  sub.physics = 98;
  sub.A::chemistry = 96;
  sub.maths = 100;
  cout << "Sub's Physics Marks: " << sub.physics << endl;
  cout << "Sub's Chemistry Marks: " << sub.A::chemistry << endl; //Diamond Problem
  cout << "Sub's Maths Marks: " << sub.maths << endl;

  // Hierarchical Inheritance

  Scorpio s11;
  s11.speedUp();
  Fortuner legender;
  legender.speedUp();

  //
  // Polymorphism
  // 

  //Compile-time Polymorphism

  //Doing Function Overloading
  
  Maths obj;

  cout << obj.sum(2,5) << endl;
  cout << obj.sum(2,5,6) << endl;
  cout << obj.sum(2,5.6f) << endl;

  // //Doing Operator Overloading

  Param obj1, obj2;
  obj1.val = 7;
  obj2.val = 9;
  //It should print the difference between them
  obj1+obj2;
}