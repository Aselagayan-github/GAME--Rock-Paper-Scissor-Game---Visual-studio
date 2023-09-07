// rock paper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;



int main()
{

    int level;  // Discribe the level
    level = 1;
    level = 2;
    level = 3;
    level = 4;
    level = 5;
    level = 6;


    //discribe th player score and computer score
    int pleyer_score = 0, Computer_score = 0;
    //used instead of the name
    string p_name, l_name;

    //start game 
    cout << "________________________ROCK  PAPER  SCISSORS___________________________" << endl;
    cout << "Enter your First Name =  "; // enter the the first name
    cin >> p_name;
    system("cls");
    cout << "Enter Your last name =    "; // enter last name
    cin >> l_name;
    system("cls");
    cout << "Player name =    " << p_name  << endl << endl; // Show the name


    //discribe the level
    cout << "         Select Your  Playing  LEVEL      " << endl;
    cout << "                level  1" << endl;
    cout << "                level  2" << endl;
    cout << "                level  3" << endl;
    cout << "                level  4" << endl;
    cout << "                level  5" << endl;
    cout << "                level  6" << endl << endl;
    cout << "     Select your Level =   ";
    cin >> level; // select the level



    int round;
    int Rock, paper, scissors;
    Rock = 1;
    paper = 2;
    scissors = 3;



    for (round = 1; round <= level; round++) {
        int player_choise, Computer_choise; // discribe player choise and computer choise
        cout << "   Round no = " << round << endl<<endl;
        cout << "level score " << endl;
        cout << p_name << "'s score = " << pleyer_score << endl; //show the player score
        cout << "computer_score = " << Computer_score << endl << endl; //show the computer score
        
        cout << "-----------MENU-----------" << endl; // discribe the menu
        

        cout << "1.) Rock " << endl; // discribe the item
        cout << "2.) Paper" << endl;
        cout << "3.) Scissors" << endl << endl;

        //enter your choise
        cout << "Select Your choise :-   ";
        cin >> player_choise;

        // player choise equal one
        if (player_choise == 1) {
            cout << ("Your Choise  is  :-     Rock") << endl;
        }
        // player choise equal tw0
        else if (player_choise == 2) {
            cout << ("Your Choise  is  :-     Paper") << endl;
        }
        // player choise equal three
        else if (player_choise == 3) {
            cout << ("Your Choise  is  :-     Scissors") << endl;
        }
        // player choise not equal
        else {
            cout << ("Invalid input !!!!!!") << endl;
        }


        //computer select the its choise using randam number generrater
        srand(time(0));
        Computer_choise = (rand() % 3) + 1;
        // computer choise equal one
        if (Computer_choise == 1) {
            cout << ("Computer choise is  :-   Rock") << endl;
        }
        // computer choise equal two
        else if (Computer_choise == 2) {
            cout << ("Computer choise is  :-   Paper") << endl;
        }
        // computer choise equal three
        else if (Computer_choise == 3) {
            cout << ("Computer choise is  :-   Scissors") << endl;
        }
        // computer choise not equal 
        else {
            cout << ("Not Valid !!!!!") << endl << endl << endl;
        }

        // how you win the game
        if (player_choise == 1 && Computer_choise == 3 || player_choise == 2 && Computer_choise == 1 || player_choise == 3 && Computer_choise == 2) {
            cout << " YOU WON THE GAME" << endl << endl<<endl;
            pleyer_score++;
        }
        // player choise equal to computer choise
        else if (player_choise == Computer_choise) {
            cout << " THE GAME IS DRAW" << endl << endl;
        }
        // how to win the computer
        else {
            cout << " SORRY !!!!!! COMPUTER WIN THE GAME" <<endl<<endl;
            Computer_score++;
        }
        

        // seperating level by level
        cout << ("---------------------------------------------------------------------------------------") << endl << endl;
        
    }
    cout << "Your Level is over " << endl << endl << endl <<endl;
    cout << "press enter";//exit the window
    system("cls");//go to the new window

    // discribe the final score
    cout << "--------------------FINAL SCORE------------------------"<<endl;
    // Full name display
    cout << "Player Name Is       =  " << p_name <<" " << l_name << endl << endl;
    // select the winner
    cout << "_______________WHO IS WINNER_________________" << endl << endl;

    // higher player score than computer score
    if (pleyer_score > Computer_score) {
        cout << "     YOU WIN THE GAME " << endl;  // player win the match
        cout << "     Your score Is      =  " << pleyer_score << endl << endl; // show player score
    }
    //player score equal computer score
    else if (pleyer_score == Computer_score) {
        cout << "     THE GAME IS DRAW       " << endl << endl;
    } 
    // higher computer score than player score
    else {
        cout << "     COMPUTER WIN THE GAME " << endl;
        cout << "     Compuer Score Is       =    " << Computer_score << endl; // show computer score
    }


    


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
