#include <iostream>

int main()
{
    int First = 5, Second = 10, Term;
    std::cin>>First>>Second;
    Term = First;
    First = Second;
    Second = Term;

    std::cout<<First<<","<<Second;

}
