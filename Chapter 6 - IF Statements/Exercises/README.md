# Table of Contents

## Exercise 1 - It's my Birthday

Look at the following code snippet then describe its
operation fully in words (write it down).

    bool myBirthday = true;
    int age = 18;
    
    if (myBirthday == true) {
      age++;
      cout << "It is my birthday. I am " <<
    age << " years old";
    } else {
      cout << "It is not my birthday" <<
    endl;
    }
    

## Exercise 2 - It's my Birthday

Write a program that tells the user
whether it is AM or PM.

For the
purposes of this program we are
using a 24 hour clock.
Declare a variable called
currentTime and initialise it with
the value 3.


Write an if-else statement that
compares the currentTime to the
value, 12.


If currentTime is greater than or
equalto 12 then print“itis PM”to
the console.


If currentTime is less than 12 then
print "it isAM” to the console.


Use the starter code to complete
this exercise, filling in the gaps to
complete the solution

    #include <iostream>
    
    using _ _ std;
    
    int main() {
     = 3; //declare and initialise variable
      for time
      
      if( _){ //check if 'currentTime' is
      greater than 12
      
      cout << "It's PM" << endl; //output PM message
      
      }else{ //else 'currentTime' must be less than 12
      
      //output AM message
     }
     
    cin.get(); //keeps console window open on Visual
    //Studio
    
    return 0;
    }
    
## Exercise 3 - Extension Problem

Extend the program to include greetings similar to the
example in the “Checking multiple conditions with
ELSE-IF” section above

• “Good Morning”for times before 12

• “Good Afternoon”for times before 18

• “Good Evening”for times before 21

• “Good Night”for time before 24

• “Time notValid”for all other times


## Exercise 4 - Can I Vote?

Write a programme that tells the
user whether or not they are eligible
to vote.

The programme should declare an
appropriate variable with the value
of 16.

It should use an if-else statement to
compare this value to the UK voting
age, which is 18.

The programme should print a
response to the user for each
possible outcome.

Use the starter code to complete this
exercise, filling in the gapsto complete
the solution

    int main() {
        _ //declare and initialise age
        variable
        if( ){ //check if age is greater
        than or equal to 18
        //output can vote
        message
        }else{ //age must be less that 18
        //output can vote
        message
        }
    cin.get(); //keeps console window open on
    Visual Studio
    }
    
    
## Exercise 5 - Odd or Even

Write a program that works out if a numberis odd or
even

Extension Problem (optional):
Assign the values of the variable via user input.
Include appropriate input error checking

## Exercise 6 - Number Checker
Write a program to check whether a number is positive, negative or zero.
    
## Exercise 7 - Profit or Loss

Write a program to calculate profit or loss. The program should ask the user
for the purchase price and sale price then calculate whether profit or loss was
made on the sale.

For example:

Purchase Price: AED 1250

Sale Price: AED 1000

Loss = AED 250


## Exercise 8 - Name that Shape

Write a program that determines the name of a shape from its number of
sides. Read the number of sides from the user and then report the appropriate
name as part of a meaningful message. Your program should support shapes
with anywhere from 3 up to (and including) 10 sides. If a number of sides
outside of this range is entered then your program should display an
appropriate error message
