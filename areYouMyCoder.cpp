// Hello! This is a program that is in search of it's coder! are you their coder? run or read the code to find out!

#include <iostream>

using namespace std;

int main()
{
 
    //The name and age of the person who coded this.
    string coderName = "Alyson";    
    int coderAge = 500;

    //empty variables that we will assign user input to. 
    string name;
    int age;
    
    //This is called a boolean data type. these are either true or false. ours is set to false because we don't know if the user is our coder yet!
    bool coderFound = false;
    
    // This is a while loop. This program will not stop asking for the users name and age until they have found their coder!
    while(coderFound = false) {


        // Program introduces itself and asks user for their name
        cout << "I am in search of my coder! please enter your name and age so I can determine if you are them!\nName:" << endl;
        // the user's input is then assigned to the string variable "name"
        cin >> name;

        //asks the user for their age
        cout << "Age:" << endl;
        // The user's input is assigned to the integer (int) variable "age"
        cin >> age;


        //This is an if statement that checks to see if the name of the user is the same name as the coder.
        if(name == coderName){ // if the name the user entered is the same as the coders name then it will output "oh wow that's their name!"
            cout << "Oh wow that's their name!" << endl;
        } else if(name != coderName){  // else if the name the user entered is not the same as the coders name then it will output the users name and say that it isnt the name of their coder.
            cout << name << "? That isn't the name of my coder :(" << endl;
        }

        
        //Another id statement that checks to see if the age of the user is the same as the coder
        if(age == coderAge){ // if the age the user entered is the same as the coders age then it will output "That's how old they are"
            cout << "That's how old they are!" << endl ;
        } else if (age != coderAge){// else if the age the user entered is not the same as the coders age then it will output the users age and express how their coder was a different age.
            cout << "You are " << age << " years old... My coder was " << coderAge <<" years old :(" << endl;
        }

        //this if statement uses a logic statement (&& and) to compare to conditional statements (==). reach out if you have any questions!
        // this statement checks to see if both the users age and name are the same as the coders
        if ((age == coderAge) && (name == coderName) ){ // if both the age and name are the same then the program is very happy and will end its search for its coder
            
            cout << "You must be the person who coded me! I can finally stop my search :DDDD!! ";
            coderFound = true;
        } else { // else if age and name don't match the coder was not found and the program will start over again. 

            cout << "Alas! you are not my coder! I must search on! ;(" << endl ;

        }
    }

}
