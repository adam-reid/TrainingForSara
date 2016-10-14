#include <iostream>
#include <vector>

const static int DECKSZ = 52;

using namespace std;

void DisplayDeck(std::vector<int> &deck)
{
    for(auto card: deck)
        std::cout<<card<<'\n';
}

void InitializeDeck(std::vector<int> &deck)
{
    for(unsigned i = 0; i < DECKSZ; i++)
        deck.push_back(i);
}

void RunProgram()
{
    std::vector<int> deck;

    InitializeDeck(deck);
    DisplayDeck(deck);
}

int main()
{
    RunProgram();
    return 0;
}
