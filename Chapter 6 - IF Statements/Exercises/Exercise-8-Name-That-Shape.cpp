#include <iostream>
using namespace std;

int main() {

    cout << "A Program to Check the Name of the Shape from the Number of Its Sides! \n\n"; // Outputs the title of the program.

    int side;

    cout << "Enter the number of sides for a shape (FROM 3-10 ONLY): \n";  // Asks the user to enter the number of sides for a shape.
    cin >> side; // User inputs number of sides.


    // Note: The output is written like this because the instructions said to report the appropriate name as part of a meaningful message.

    if (side < 3) {

        cout << "The number of sides is too low! What are you doing? I told you to input a number from 3-10 only. \n"; // This statement prints if the user inputs a number less than 3.

    }

    else if (side == 3) {

        cout << "Love is made up of three main qualities: \n" << "1. Intimacy \n" << "2. Commitment \n" << "3. Intimacy \n\n" <<
            "Take away any of the three, and the TRIANGLE will come apart. \n\n" << "So, please maintain the TRIANGLE by keeping our love whole. \n"; // This statement prints if the user inputs a number 3.

    }

    else if (side == 4) {

        cout << "What makes QUADRILATERAL-shaped books special is that they let you travel without having to move your feet.\n";  // This statement prints if the user inputs a number 4.

    }

    else if (side == 5) {
        cout << "A PENTAGON-shaped diamond isn't born polished and gleaming. It used to be nothing exceptional, but with pressure and time, it transforms into something spectacular.\n"; // This statement prints if the user inputs a number 5.

    }

    else if (side == 6) {

        cout << "You're like a snowflake, prettier than any other HEXAGON in the sky. \n"; // This statement prints if the user inputs a number 6.
    }

    else if (side == 7) {

        cout << "Words are similar to HEPTAGON-shaped arrows. Once you let it go, you can't get them back. That's why you should use your words wisely.  \n"; // This statement prints if the user inputs a number 7.

    }

    else if (side == 8) {

        cout << "It's amusing that an OCTAGON-shaped stop sign is a guideline that teaches you that continuing in the same route will not lead you to anywhere new. \n"; // This statement prints if the user inputs a number 8.

    }

    else if (side == 9) {

        cout << "You are a person who keeps me secure and safe, a person who keeps my demons and fears away. You are like my personal NONAGON-shaped dreamcatcher.\n"; // This statement prints if the user inputs a number 9.


    }
    else if (side == 10) {

        cout << "Our fate is not in the hands of DECAGON-shaped stars, but in our own hands.\n"; // This statement prints if the user inputs a number 10.


    }
    else {

        cout << "The number of sides is too high! What are you doing? I told you to input a number from 3-10 only. \n"; // This statement prints if the user inputs a number greater than 10.

    }
    cin.get(); // Keeps the console window open
    return 0;

}
