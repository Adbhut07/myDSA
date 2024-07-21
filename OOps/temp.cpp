#include<iostream>
using namespace std;

class Hero{
  private:
    //char name[100];
    int health;
  public:
    char level;

  Hero() {
    cout<< "Constructor Called"<<endl;
  }

  //parameterised constructor 
  Hero(int health){
    cout<<"this-> "<<this<<endl;
    this -> health = health;
  }

  int getHealth(){
    return health;
  }

  char getLevel(){
    return level;
  }

  void setHealth(int h){
    health = h;
  }
  void setLevel(char l){
    level = l;
  }
    
};

// access modifiers:--
//  1. Public
//  2. Private  (it is default)
//  3. Protected