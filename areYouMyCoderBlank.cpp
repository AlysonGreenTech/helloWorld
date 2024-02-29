#include <iostream>
#include <chrono> 
#include <thread>

using namespace std;

int main()
{
 
    string coderName = "Alyson";    
    int coderAge = 500;
 
    string name;
    int age;  
   
    bool coderFound = false;
    
    cout << "Starting"<<endl;

   while(coderFound == false) {

        cout << "I am in search of my coder! please enter your name and age so I can determine if you are them!\nName:" << endl;
        cin >> name;
        
        cout << "Age:" << endl;
        cin >> age;

        if(name == coderName){ 
            cout << "Oh wow that's their name!" << endl;
        } else if(name != coderName){  
            cout << name << "? That isn't the name of my coder :(" << endl;
        }
    
        if(age == coderAge){ 
            cout << "That's how old they are!" << endl ;
        } else if (age != coderAge){
            cout << "You are " << age << " years old... My coder was " << coderAge <<" years old :(" << endl;
        }

        if ((age == coderAge) && (name == coderName) ){  
            cout << "You must be the person who coded me! I can finally stop my search :DDDD!! ";
            coderFound = true;
        } else { 
            cout << "Alas! you are not my coder! I must search on! ;(\nI will start back up in 10 seconds\n__________________________________________________\n" << endl ;
            cout << ""<< endl; 
            this_thread::sleep_for(chrono::seconds(10));
        }
    
    }
}
