// Black Jack Game Created by Braxton Walk

#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <time.h>
using namespace std;


int main(void)
{
    int num_wins = 0;
    int num_losses = 0;
    int num_ties = 0;


    top:
    bool ace_1_user = false;
    bool ace_2_user = false;
    bool ace_1_dealer = false;
    bool ace_2_dealer = false;
    srand(time(NULL));
    vector<int> cards = {1,1,1,1,2,2,2,2,3,3,3,3,4,4,4,4,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,9,9,9,9,10,10,10,10,11,11,11,11,12,12,12,12,13,13,13,13};
    string user_input = "";
    while(user_input != "exit")
    {
        int card1_user = cards[rand() % cards.size()]; // First card dealt to user
        for (int i=0; i<cards.size(); i++)
        {
            if (cards[i] == card1_user)
            {
                cards.erase(cards.begin()+(i));
                break;
            }
        }
        int card1_dealer = cards[rand() % cards.size()];  // First card dealt to dealer
        for (int i=0; i<cards.size(); i++)
        {
            if (cards[i] == card1_dealer)
            {
                cards.erase(cards.begin()+(i));
                break;
            }
        }
        int card2_user = cards[rand() % cards.size()];  // Second card dealt to user
        for (int i=0; i<cards.size(); i++)
        {
            if (cards[i] == card2_user)
            {
                cards.erase(cards.begin()+(i));
                break;
            }
        }
        int card2_dealer = cards[rand() % cards.size()];  // Second card dealt to dealer
        for (int i=0; i<cards.size(); i++)
        {
            if (cards[i] == card2_dealer)
            {
                cards.erase(cards.begin()+(i));
                break;
            }
        }
        string card1_user_name;
        string card1_dealer_name;
        string card2_user_name;
        string card2_dealer_name;
        int total_user = 0;
        int total_dealer = 0;
        if (card1_user == 1)  // Assigning a name for card 1 user
        {
            card1_user_name = "A";
            total_user = total_user + 11;
        }else if (card1_user == 2){
            total_user = total_user + card1_user;
            card1_user_name = "2";
        }else if (card1_user == 3){
            total_user = total_user + card1_user;
            card1_user_name = "3";
        }else if (card1_user == 4){
            total_user = total_user + card1_user;
            card1_user_name = "4";
        }else if (card1_user == 5){
            total_user = total_user + card1_user;
            card1_user_name = "5";
        }else if (card1_user == 6){
            total_user = total_user + card1_user;
            card1_user_name = "6";
        }else if (card1_user == 7){
            total_user = total_user + card1_user;
            card1_user_name = "7";
        }else if (card1_user == 8){
            total_user = total_user + card1_user;
            card1_user_name = "8";
        }else if (card1_user == 9){
            total_user = total_user + card1_user;
            card1_user_name = "9";
        }else if (card1_user == 10){
            total_user = total_user + card1_user;
            card1_user_name = "10";
        }else if (card1_user == 11){
            total_user = total_user + 10;
            card1_user_name = "J";
        }else if (card1_user == 12){
            total_user = total_user + 10;
            card1_user_name = "Q";
        }else if (card1_user == 13){
            total_user = total_user + 10;
            card1_user_name = "K";
        }
        if (card2_user == 1)  // Assigning a name for card 2 user
        {
            card2_user_name = "A";
            if (card1_user == 1) // If first card was an ace (11), then second ace must be a 1 so the user doesn't go over 21
            {
                total_user = total_user + 1;
                ace_2_user = true;
            }
            else
            {
                total_user = total_user + 11;
            }
        }else if (card2_user == 2){
            total_user = total_user + card2_user;
            card2_user_name = "2";
        }else if (card2_user == 3){
            total_user = total_user + card2_user;
            card2_user_name = "3";
        }else if (card2_user == 4){
            total_user = total_user + card2_user;
            card2_user_name = "4";
        }else if (card2_user == 5){
            total_user = total_user + card2_user;
            card2_user_name = "5";
        }else if (card2_user == 6){
            total_user = total_user + card2_user;
            card2_user_name = "6";
        }else if (card2_user == 7){
            total_user = total_user + card2_user;
            card2_user_name = "7";
        }else if (card2_user == 8){
            total_user = total_user + card2_user;
            card2_user_name = "8";
        }else if (card2_user == 9){
            total_user = total_user + card2_user;
            card2_user_name = "9";
        }else if (card2_user == 10){
            total_user = total_user + card2_user;
            card2_user_name = "10";
        }else if (card2_user == 11){
            total_user = total_user + 10;
            card2_user_name = "J";
        }else if (card2_user == 12){
            total_user = total_user + 10;
            card2_user_name = "Q";
        }else if (card2_user == 13){
            total_user = total_user + 10;
            card2_user_name = "K";
        }
        if (card1_dealer == 1)  // Assigning a name for card 1 dealer
        {
            total_dealer = total_dealer + 11;
            card1_dealer_name = "A";
        }else if (card1_dealer == 2){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "2";
        }else if (card1_dealer == 3){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "3";
        }else if (card1_dealer == 4){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "4";
        }else if (card1_dealer == 5){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "5";
        }else if (card1_dealer == 6){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "6";
        }else if (card1_dealer == 7){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "7";
        }else if (card1_dealer == 8){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "8";
        }else if (card1_dealer == 9){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "9";
        }else if (card1_dealer == 10){
            total_dealer = total_dealer + card1_dealer;
            card1_dealer_name = "10";
        }else if (card1_dealer == 11){
            total_dealer = total_dealer + 10;
            card1_dealer_name = "J";
        }else if (card1_dealer == 12){
            total_dealer = total_dealer + 10;
            card1_dealer_name = "Q";
        }else if (card1_dealer == 13){
            total_dealer = total_dealer + 10;
            card1_dealer_name = "K";
        }


        if (card2_dealer == 1)  // Assigning a name for card 2 dealer
        {
            card2_dealer_name = "A";
            if (card1_dealer == 1) // If first card was an ace (11), then second ace must be a 1 so the dealer doesn't go over 21
            {
                total_dealer = total_dealer + 1;
                ace_2_dealer = true;
            }
            else
            {
                total_dealer = total_dealer + 11;
            }
        }else if (card2_dealer == 2){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "2";
        }else if (card2_dealer == 3){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "3";
        }else if (card2_dealer == 4){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "4";
        }else if (card2_dealer == 5){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "5";
        }else if (card2_dealer == 6){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "6";
        }else if (card2_dealer == 7){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "7";
        }else if (card2_dealer == 8){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "8";
        }else if (card2_dealer == 9){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "9";
        }else if (card2_dealer == 10){
            total_dealer = total_dealer + card2_dealer;
            card2_dealer_name = "10";
        }else if (card2_dealer == 11){
            total_dealer = total_dealer + 10;
            card2_dealer_name = "J";
        }else if (card2_dealer == 12){
            total_dealer = total_dealer + 10;
            card2_dealer_name = "Q";
        }else if (card2_dealer == 13){
            total_dealer = total_dealer + 10;
            card2_dealer_name = "K";
        }


        if (total_user == 21) // If user initial draw is 21
        {
            num_wins ++;
            cout << "\nDealer First Card: " << card1_dealer_name << " / Dealer Second Card: " << card2_dealer << " / Dealer Total: " << total_dealer << endl;
            cout << "User First Card: " << card1_user_name << " / User Second Card: " << card2_user_name << " / User Total: " << total_user << endl;
            cout << "You WIN!\n" << "Play Again? (y / n)" << endl;
            top_21:
            cin >> user_input;
            if (user_input == "n")
            {
                cout << "\nNumber of Wins: " << num_wins << endl;
                cout << "Number of Losses: " << num_losses << endl;
                cout << "Number of Ties: " << num_ties << endl;
                exit(0);
            }
            else if (user_input == "y")
            {
                goto top;
            }
            else
            {
                cout << "Incorrect Input, try again" << endl;
                goto top_21;
            }
        }
        else if (total_dealer == 21) // If dealer initial draw is 21
        {
            num_losses ++;
            cout << "\nDealer First Card: " << card1_dealer_name << " / Dealer Second Card: " << card2_dealer_name << " / Dealer Total: " << total_dealer << endl;
            cout << "User First Card: " << card1_user_name << " / User Second Card: " << card2_user_name << " / User Total: " << total_user << endl;
            cout << "You LOSE\n" << "Play Again? (y / n)" << endl;
            goto top_21;
        }
        else // If initial draw is not 21
        {
            string h_or_s = "";
            cout << "\nDealer First Card: " << card1_dealer_name << endl;
            cout << "User First Card: " << card1_user_name << " / User Second Card: " << card2_user_name << " / User Total: " << total_user << endl;
            top_not_21:
            cout << "Hit or Stand? (h / s)" << endl;
            cin >> h_or_s;

            int new_card = 0;
            string new_card_name;

            if (h_or_s == "h") // If user chooses to hit
            {
                bool ace_change = false;
                new_card = cards[rand() % cards.size()];
                if (new_card == 1)  // Assigning a name for the dealer's new card
                {
                    total_user = total_user + 11;
                    new_card_name = "A";
                }else if (new_card == 2){
                    total_user = total_user + new_card;
                    new_card_name = "2";
                }else if (new_card == 3){
                    total_user = total_user + new_card;
                    new_card_name = "3";
                }else if (new_card == 4){
                    total_user = total_user + new_card;
                    new_card_name = "4";
                }else if (new_card == 5){
                    total_user = total_user + new_card;
                    new_card_name = "5";
                }else if (new_card == 6){
                    total_user = total_user + new_card;
                    new_card_name = "6";
                }else if (new_card == 7){
                    total_user = total_user + new_card;
                    new_card_name = "7";
                }else if (new_card == 8){
                    total_user = total_user + new_card;
                    new_card_name = "8";
                }else if (new_card == 9){
                    total_user = total_user + new_card;
                    new_card_name = "9";
                }else if (new_card == 10){
                    total_user = total_user + new_card;
                    new_card_name = "10";
                }else if (new_card == 11){
                    total_user = total_user + 10;
                    new_card_name = "J";
                }else if (new_card == 12){
                    total_user = total_user + 10;
                    new_card_name = "Q";
                }else if (new_card == 13){
                    total_user = total_user + 10;
                    new_card_name = "K";
                }


                if (total_user > 21)  // If total user value is over 21
                {
                    if ((card1_user_name == "A") && (ace_1_user == false)) // If first user card was an ace
                    {
                        cout << "\nUser Next Card: " << new_card_name << " / User Total: " << total_user << endl;
                        total_user = total_user - 11;
                        total_user = total_user + 1;
                        ace_1_user = true;
                        ace_change = true;
                        cout << "\nChanged user's 1st card: " << card1_user_name << " from 11 -> 1 / New User Total: " << total_user << endl;
                    }
                    else if ((card2_user_name == "A") && (ace_2_user == false)) // If second user card was an ace
                    {
                        cout << "\nUser Next Card: " << new_card_name << " / User Total: " << total_user << endl;
                        total_user = total_user - 11;
                        total_user = total_user + 1;
                        ace_2_user = true;
                        ace_change = true;
                        cout << "\nChanged user's 2nd card: " << card2_user_name << " from 11 -> 1 / New User Total: " << total_user << endl;
                    }
                    else if (new_card_name == "A") // If new card is an ace
                    {
                        cout << "\nUser Next Card: " << new_card_name << " / User Total: " << total_user << endl;
                        total_user = total_user - 11;
                        total_user = total_user + 1;
                        ace_change = true;
                        cout << "\nChanged user's new card: " << new_card_name << " from 11 -> 1 / New User Total: " << total_user << endl;
                    }
                }
                
                if (total_user == 21)
                {
                    num_wins++;
                    cout << "User Total: " << total_user << endl;
                    cout << "\nYou WIN!\n" << "Play Again? (y / n)" << endl;
                    goto top_21;
                }
                else if (total_user > 21)
                {
                    num_losses++;
                    cout << "User Total: " << total_user << endl;
                    cout << "\nYou LOSE!\n" << "Play Again? (y / n)" << endl;
                    goto top_21;
                }
                else if ((total_user < 21) && (ace_change == false))
                {
                    cout << "\nUser Next Card: " << new_card_name << " / User Total: " << total_user << endl;
                    goto top_not_21;
                }
            }

            else if (h_or_s == "s") // If user chooses to stand
            {
                cout << "\nDealer First Card: " << card1_dealer_name << " / Dealer Second Card: " << card2_dealer_name << " / Dealer Total: " << total_dealer << endl;
                while (total_dealer < 16)
                {
                    bool ace_change = false;
                    new_card = cards[rand() % cards.size()];
                    if (new_card == 1)  // Assigning a name for the dealer's new card
                    {
                        total_dealer = total_dealer + 11;
                        new_card_name = "A";
                    }else if (new_card == 2){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "2";
                    }else if (new_card == 3){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "3";
                    }else if (new_card == 4){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "4";
                    }else if (new_card == 5){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "5";
                    }else if (new_card == 6){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "6";
                    }else if (new_card == 7){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "7";
                    }else if (new_card == 8){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "8";
                    }else if (new_card == 9){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "9";
                    }else if (new_card == 10){
                        total_dealer = total_dealer + new_card;
                        new_card_name = "10";
                    }else if (new_card == 11){
                        total_dealer = total_dealer + 10;
                        new_card_name = "J";
                    }else if (new_card == 12){
                        total_dealer = total_dealer + 10;
                        new_card_name = "Q";
                    }else if (new_card == 13){
                        total_dealer = total_dealer + 10;
                        new_card_name = "K";
                    }     

                    if (total_dealer > 21)  // If dealer's cards are over 21
                    {

                        if ((card1_dealer_name == "A") && (ace_1_dealer == false)) // If first card was an ace, decrease value to 1
                        {
                            cout << "Dealer Next Card: " << new_card_name << " / Dealer Total: " << total_dealer << endl;
                            total_dealer = total_dealer - 11;
                            total_dealer = total_dealer + 1;
                            ace_1_dealer = true;
                            ace_change = true;
                            cout << "\nChanged dealer's 1st card: " << card1_dealer_name << " from 11 -> 1 / New Dealer Total: " << total_dealer << endl;
                        }
                        else if ((card2_dealer_name == "A") && (ace_2_dealer == false)) // If second card was an ace, decrease value to 1
                        {
                            cout << "Dealer Next Card: " << new_card_name << " / Dealer Total: " << total_dealer << endl;
                            total_dealer = total_dealer - 11;
                            total_dealer = total_dealer + 1;
                            ace_2_dealer = true;
                            ace_change = true;
                            cout << "\nChanged dealer's 2nd card: " << card2_dealer_name << " from 11 -> 1 / New Dealer Total: " << total_dealer << endl;
                        }
                        else if (new_card_name == "A")
                        {
                            cout << "Dealer Next Card: " << new_card_name << " / Dealer Total: " << total_dealer << endl;
                            total_dealer = total_dealer - 11;
                            total_dealer = total_dealer + 1;
                            ace_change = true;
                            cout << "\nChanged dealer's new card: " << new_card_name << " from 11 -> 1 / New Dealer Total: " << total_dealer << endl;
                        }
                    }

                    if (ace_change == false)
                    {
                        cout << "Dealer Next Card: " << new_card_name << " / Dealer Total: " << total_dealer << endl;
                    }
                }
                
                if (total_dealer > 21)
                {
                    num_wins++;
                    cout << "Dealer BUST!" << endl;
                    cout << "User Total: " << total_user << endl;
                    cout << "\nYou WIN!\n" << "Play Again? (y / n)" << endl;
                    goto top_21;
                }
                else if (total_dealer < total_user)
                {
                    num_wins++;
                    cout << "User Total: " << total_user << endl;
                    cout << "\nYou WIN!\n" << "Play Again? (y / n)" << endl;
                    goto top_21;
                }
                else if (total_dealer > total_user)
                {
                    num_losses++;
                    cout << "User Total: " << total_user << endl;
                    cout << "\nYou LOSE!\n" << "Play Again? (y / n)" << endl;
                    goto top_21;
                }
                else if (total_dealer == total_user)
                {
                    num_ties++;
                    cout << "User Total: " << total_user << endl;
                    cout << "\nYou TIE!\n" << "Play Again? (y / n)" << endl;
                    goto top_21;
                }
            }
            else
            {
                cout << "Incorrect input, try again" << endl;
                goto top_not_21;
            }
        }
    }
}