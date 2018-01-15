/**
 * cookies.cpp
 *
 * Krit Kosoltrakul
 * kkrit
 *
 * EECS 183: Project 1
 * Winter 2018
 *
 * Algorithm that allows users to input a certain number of people which then outputs the number of batches of "Best Ever" Sugar Cookies required. Which then outputs a list of ingredients needed along with its quantity and total cost.
 */
 
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/**
 * Returns the singular or plural form of a word, based on number
 *
 * Requires: singular is the singular form of the word.
 *           plural is the plural form of the word.
 *           number determines how many things there are; must be >= 1.
 * Modifies: Nothing.
 * Effects:  Returns return the singular form of the word if number == 1.
 *           Otherwise, returns the plural form.
 * Examples:
 *           // prints "bag"
 *           cout << pluralize("bag", "bags", 1);
 *
 *           // prints "pounds"
 *           string temp = pluralize("pound", "pounds", 3);
 *           cout << temp;
 */
string pluralize(string singular, string plural, int number);

int main() {
    //Determines people needed to serve.
    cout << "How many people do you need to serve?";
    int numPeople;
    cin >> numPeople;
    
    cout << endl;
    
    //Calculates number of batches needed.
    double numBatches;
    numBatches = ceil((double)numPeople / 12);
    cout << "You need to make: " << numBatches << " " << pluralize("batch", "batches", numBatches) << " of cookies" << endl;
    
    cout << endl;
    
    //Calculates needed ingredients list.
    cout << "Shopping List for \"Best Ever\" Sugar Cookies" << endl;
    cout << "-------------------------------------------" << endl;
    
    double numCupFlour = 5.5;
    double bagFlour = ceil((numCupFlour * numBatches) / 20);
    cout << bagFlour << " " << pluralize("bag", "bags", bagFlour) << " of flour" << endl;
    
    double numCupsSugar = 1.75;
    double bagSugar = ceil((numCupsSugar * numBatches) / 10);
    cout << bagSugar << " " << pluralize("bag", "bags", bagSugar) << " of granulated sugar" << endl;
    
    double numPoundsButter = 1.75;
    double poundsButter = ceil(numPoundsButter * numBatches / 2);
    cout << poundsButter << " " << pluralize("pound", "pounds", poundsButter) << " of butter" << endl;
    
    double numCupsSourCream = 1.0;
    double containerSourCream = ceil(numCupsSourCream * numBatches);
    cout << containerSourCream << " " << pluralize("container", "containers", containerSourCream) << " of sour cream" << endl;
    
    double numEggs = 2.0;
    double dozenEggs = ceil((numEggs * numBatches) / 12);
    cout << dozenEggs << " dozen eggs" << endl;
    
    double numCupsPowderedSugar = 3.5;
    double bagsPowderedSugar = ceil((numCupsPowderedSugar * numBatches) / 5.5);
    cout << bagsPowderedSugar << " " << pluralize("bag", "bags", bagsPowderedSugar) << " of powdered sugar" << endl;
    
    double numTspnVanillaExtract = 2.75;
    double bottlesVanillaExtract = ceil((numTspnVanillaExtract * numBatches) / 12);
    cout << bottlesVanillaExtract << " " << pluralize("bottle", "bottles", bottlesVanillaExtract) << " of vanilla" << endl;
    
    cout << endl;
    
    // Calculates total price of ingredients.
    double costBagFlour = bagFlour * 2.69;
    double costBagSugar = bagSugar * 3.99;
    double costPoundsButter = poundsButter * 2.79;
    double costContainerSourCream = containerSourCream * 1.48;
    double costDozenEggs = dozenEggs * 1.99;
    double costPowderedSugar = bagsPowderedSugar * 2.29;
    double costBottlesVanillaExtract = bottlesVanillaExtract * 6.79;
    
    double totalPrice = costBagFlour + costBagSugar + costPoundsButter + costContainerSourCream + costDozenEggs + costPowderedSugar + costBottlesVanillaExtract;
    cout << "Total expected cost of ingredients: $" << totalPrice << endl;
    
    cout << endl;
    
    cout << "Have a great party!" << endl;
    
    
    
    
    
    

    return 0;
}

string pluralize(string singular, string plural, int number) {
    if (number == 1) {
        return singular;
    }
    return plural;
}


