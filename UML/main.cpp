
#include <iostream>
#include "Shop.h"
#include "Book.h"
#include "Apple.h"
#include "VideoGame.h"

using namespace std;
    int main()
    {
        Shop s;
        s.Add(new Book(100, 3, "Dune", "Frank Herbert")).Add(new Apple(20, 100, "Romania"));
        s.Add(new VideoGame(10, 2, "Nintendo", "Super Mario"));
        s.Add(new Apple(12, 15, "Germany"));
        cout << "Total price   : " << s.GetTotalPrice() << endl;
        cout << "Apple quantity: " << s.GetQuantity("Apple") << endl;
        cout << "Items" << std::endl;
        s.List();
        return 0;
    }