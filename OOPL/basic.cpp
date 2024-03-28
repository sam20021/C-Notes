 #include<iostream>
#include<vector>
using namespace std;
class Hero {
    // Properties
    public:
    int health;
    public:
    char level;
    char *name;
    static int timetocomplete; // Static Keyword
    
    // Parameterzied Constructor
    // Hero(int Health){
    //     this-> health = health; // This Parameter
    // }

    // this pointer points to the memory address of the object
    Hero(){
       cout<<"Default Constructor"<<endl;
       name = new char[100];
    }
    // Parameterized constructor
    Hero(int health,int level){
        this->health = health;
        this->level = level;
    }

    void print(){
        cout<<"name "<<this->name<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
    }

    // Copy constructor
    Hero (Hero& temp){
        // char *ch = new char[strlen(temp.name)+1]; // Deep copy
        // strcpy(ch, temp.name); // deep copy
        // this->name = ch; // deep copy   

        cout<<"Copy constructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }
// Destructor is used to free resources assosiated with the object
    ~Hero() {
        cout<<"This is Distrutor"<<endl;
    }

    // Static Function
    static int random(){
        return timetocomplete;
    }

    char getlevel() {
        return level;
    }
    int gethealth(){
        return health;
    }
    void setlevel(char ch){
        level = ch;
    }
    void sethealth(int h){
        health = h;
    }

    void setname(char name[]){
        strcpy(this->name,name);
    }
    int Hero::timetocomplete = 5; // Static Keyword initialisation
};
int main(){

    cout<<Hero::random()<<endl; // Static function 
    // cout<<Hero::timetocomplete<<endl;  Static Keyword






    // Hero hero1;
    // hero1.sethealth(12);
    // hero1.setlevel('D');
    // char name[7] = "chintu";
    // hero1.setname(name);
    // hero1.print();
    // Hero hero2;

    // Hero hero1(hero2);

    // // Copy Assignement Operator
    // hero1 = hero2;
    // hero1.print();
    // hero2.print();









    // Hero suresh(70,'C');
    // suresh.print();

    // // to copy value of suresh into another hero and this is an example of Copy Constructor 
    // Hero Ritesh(suresh);
    // Ritesh.print(); 










    // Creation of Object
    // Static Allocation
    // Hero chintu;

    // // Dynamic Allocation
    // Hero *b = new Hero;
    // // cout<<"Ramesh level is: "<<chintu.getlevel()<<endl;
    // // cout<<"Chintu health is: "<<chintu.gethealth()<<endl;
    // // // Use Setter
    // // chintu.setlevel('A');
    // // chintu.sethealth(70);
    // // cout<<"health is: "<<chintu.level<<endl;
    return 0;
}