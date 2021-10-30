# Table of Contents

## Exercise 1 - Reverse 9 Times Table
Using a while loop, and appropriate increment/decrement operators. Write a while loop that prints to console all values of the 9 times table from 108 to 9.

Expected result:

     108
     99
     90
     81
     72
     63
     54
     45
     36
     27
     18
     9
    
Use the startercode below to complete this exercise, filling in the gaps to complete the solution.

    #include <iostream>
    using namespace std;
    
    int main(){
      int num = 108; //declare and initalise variable
      
      while( ){ //while conditional check
      
      //code to output then decrease number
      
     }
     
      cin.get(); //keeps console window open in Visual
    Studio
      return 0;
    }
    
    
    
## Exercise 2 - The Pointless Box

You are tasked to make an (almost) useless
contraption that tells the user when they have entered
either the number 1 or 2 to console.

When the user enters 1 the message “you have
entered the number 1” should print to console, and
when the user enters 2 the message “you have
entered the number 2” should print to console.

Hint: This can be solved by having two conditions in the
while loop. You will also need an if statement within the
loop.

## Exercise 3 - Input Improvement

Copy out the code from
do-while example
presented in class (see
below). Run and test this
code. Do you notice any
errors while testing it?
How might you improve
it?

    #include <iostream>
    using namespace std;
     int main() {
     
        char input;
        do{
      
        cout << "Would you like to Quit (Y/N)?" <<
        endl;
      
        cin >> input;
      
      }while( (input != 'Y') && (input != 'N') );
      
      return 0;
    }
