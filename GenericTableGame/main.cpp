#include <iostream>
#include <vector>

const static int DECKSZ = 52;

template<class T>
void DisplayDeck(const std::vector<T> &deck)
{
    for(auto card: deck)
        std::cout<<card<<'\n';
}

template<class T>
void InitializeDeck(std::vector<T> &deck)
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
