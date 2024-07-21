#include<iostream>
//#include "temp.cpp"
using namespace std;

// empty class ka size 1 byte hota hai 
// agar koi class empty hai to use 1 byte memory assign ho jati hai 

class Hero{
  private:
    //char name[100];
    int health;
  public:
    char *name;
    char level;
    static int timeToComplete;  // we use static keyword where the field does not depend on class; 

  Hero() {
    cout<< "Constructor Called"<<endl;
    name = new char[100];
  }

  //parameterised constructor 
  Hero(int health){
    cout<<"this-> "<<this<<endl;
    this -> health = health;
  }

  Hero(int health, char level){
    cout<<"this-> "<<this<<endl;
    this -> level = level;
    this -> health = health;
  }

  // copy constructor
  //this shellow copy constructor
  /*
  Hero(Hero &temp){   //copy krne me pass by reference krte hai na ki pass by value  
    cout<<"copy constructor called"<<endl;
    this->health = temp.health;
    this->level = temp.level;
    this->name = temp.name;
  }
  */

  //This is deep copy constructor
  Hero(Hero &temp){   

    char *ch = new char[strlen(temp.name)+1];
    strcpy(ch, temp.name);
    this->name = ch;

    cout<<"copy constructor called"<<endl;
    this->health = temp.health;
    this->level = temp.level;
  }

  void print(){
    cout<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"health "<<this->health<<endl;
    cout<<"level "<<this->level<<endl;
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

  void setName(char name[]){
    strcpy(this->name, name);
  }

  //Destructor
  ~Hero(){
    cout<<"Destructor called "<<endl;
  }
    
};

int Hero::timeToComplete = 5;

int main(){

    cout<<Hero::timeToComplete<<endl;

    Hero c;
    cout<< c.timeToComplete<<endl;


    // statically constructed 
    Hero a;
    // in static allocation the destructor called himself automatically

    // Dynamically constructed
    Hero *b = new Hero();
    //in dynamic allocation we have to call destructor evry time
    delete b;


    /*
    Hero hero1;
    hero1.setHealth(20);
    hero1.setLevel('C');
    char name[7] = "Adbhut";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor (shellow copy constructor)
    
    Hero hero2(hero1);
    // Hero hero2 =  hero1;
    hero2.print();

    // This is shellow copy if we change something in hero1 then it will also change in hero2, to overcome  this issue we use deep copy constructor 
    hero1.name[0] = 'G';
    hero1.setHealth(30);
    hero1.print();

    hero2.print();
    */



    // Hero suresh(70, 'C');
    // suresh.print();

    // Hero ritesh(suresh);
    // ritesh.print();
    


    // Hero h1;   // This is statically allocation of memory block

     //h1.health = 40;
    // h1.setHealth(70);
    // h1.level = 'A';

    // cout << "Health is: "<< h1.getHealth()<<endl;
    // cout<<"Level is: "<< h1.getLevel()<<endl;

    //dynamic allocaton of memory block
    /*
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(80);

    cout<< "Size of b is: "<<sizeof(b)<<endl;  
    cout<< "address of b is: "<<b<<endl;

    cout<<"level is "<<(*b).level<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;

    cout<<"level is "<<b->level<<endl;
    cout<<"Health is "<<b->getHealth()<<endl;
    */

   //statically
//    Hero ramesh(10);
//    cout<<"Address of ramesh "<<&ramesh<<endl;
//    ramesh.getHealth();

   //dynamically 
//    Hero *h = new Hero(11);

//    Hero temp(22, 'B');
   

    return 0;
}
