#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Pizza {
    //variables
public:
    char crustType; //stores P for pan, T for thin, and H for hand-tossed
    char pizzaSize; //stores S for small, M for medium, and L for large
    double sausage; //stores # of sausages on the pizza
    double pepperoni; //stores # of pepperonis on the pizza
    double peppers; //stores # of peppers on the pizza
    double sardines; //stores # of sardines on the pizza
    char cheese; // stores # of cheese orders
    double totalToppings; //stores # of totalToppings on the pizza

    //functions
    void setCrustType(char crustType1);

    void setPizzaSize(char pizzaSize1);

    void setCheese(char cheeseOption);
    void setSausage(double sausageQuantity);

    void setPepperoni(double pepperoniQuantity);

    void setPeppers(double pepperQuantity);

    void setSardines(double sardinesQuantity);

    const char getCrustType();

    const char getPizzaSize();

    void resetToppings();


    const double calcCost();

    const double totalToppings1();
};



int main() {
    Pizza customPizza;
    char sausageYorN;
    char pepperoniYorN;
    char peppersYorN;
    char sardinesYorN;
    char cheeseYorN;

    //Crust Type input
    cout << "Welcome to Morris Big Pizza Shack!" << endl;





    cout << "Please take time to look over our menu and make your choice through this awesome POS System. \r\n"<<endl;
    cout << "Pan Crust Small = $10.00;\n"<< "Pan Crust Medium = $14.00;\n"<< "Pan Crust Large = $17.00;\n"<< "Thin Crust Small = $10.00;\n"<< "Thin Crust Medium = $14.00;\n"<< "Thin Crust Large = $27.00;\n"<< "Hand-tossed Small = $10.00;\n"<< "Hand-tossed Medium = $14.00;\n"<< "Hand-tossed Large = $17.00;\n"<< "Toppings = $2.00 \r\n";
    cout<< "Press enter to continue";
    getchar();







    cout << "Enter P for pan, T for thin, or H for hand-tossed " << endl;
    cin >> customPizza.crustType;

    //Pizza Size input
    cout << "Enter S for small, M for medium, or L for large" << endl;
    cin >> customPizza.pizzaSize;

    //Sausage option input

        cout << "Would you like sausage on your pizza (Enter Y for Yes or Enter N for No)?" << endl;
        cin >> sausageYorN;
        if (sausageYorN == 'y' || sausageYorN == 'Y'){
            cout << "How many sausages can you handle?" <<endl;
        cin >> customPizza.sausage;}
        else{
            cout<< "Ok thats cool cuh......weirdo"<<endl;}





    //Pepperoni option input

        cout << "Would you like pepperoni on your pizza (Enter Y for Yes or Enter N for No)?" << endl;
        cin >> pepperoniYorN;
        if (pepperoniYorN == 'y' || pepperoniYorN == 'Y'){
            cout << "How many pepperoni can you handle?" << endl;
        cin >> customPizza.pepperoni;
}
else{
cout<< "Ok thats cool cuh......weirdo"<<endl;}




//Peppers option input
        cout << "Would you like peppers on your pizza (Enter Y for Yes or Enter N for No)?" << endl;
        cin >> peppersYorN;
        if (peppersYorN == 'y' || peppersYorN == 'Y'){
            cout << "How many peppers can you handle?" << endl;
        cin >> customPizza.peppers;
}
else{
cout<< "Ok thats cool cuh......weirdo"<<endl;}




//Sardines option input

        cout << "Would you like sardines on your pizza (Enter Y for Yes or Enter N for No)?" << endl;
        cin >> sardinesYorN;
        if (sardinesYorN == 'y' || sardinesYorN == 'Y'){
            cout << "How many sardines can you handle?" << endl;
        cin >> customPizza.sardines;
}
else{
cout<< "Ok thats cool cuh......weirdo"<<endl;}




//cheese option input
        cout << "Enter Y for cheese or Enter N for no cheese" << endl;
        cin >> cheeseYorN;
        if (cheeseYorN == 'y' || cheeseYorN == 'Y'){
            cout << "Hell yeah, Great Choice!" << endl;
            getchar();
            cout<<"Press 'enter' to display your price and number of toppings!"<<endl;
            getchar();

        }
else{
            getchar();
            cout<<"Press 'enter' to display your price and number of toppings!"<<endl;
            getchar();
        }



    int protoPrice;
    cout<<"Each topping is worth $2 and The total number of toppings you ordered are: "<<customPizza.totalToppings1()<<endl;
    cout << "\r\n So, the total cost of your pizza is $"<<customPizza.calcCost()<<".00\r\n\r\n";
return 0;




}

const double Pizza::calcCost() {
    const double PanCrustSmall = 10.00;
    const double PanCrustMedium = 14.00;
    const double PanCrustLarge = 17.00;
    const double ThinCrustSmall = 10.00;
    const double ThinCrustMedium = 14.00;
    const double ThinCrustLarge = 27.00;
    const double HandtossedSmall = 10.00;
    const double HandtossedMedium = 14.00;
    const double HandtossedLarge = 17.00;
    const double Toppings12=2.00;
    double costOfPizza;
    double totalCostofMeal;
    double costOfToppings;

    if(crustType == 'P' && pizzaSize == 'S')
        costOfPizza = PanCrustSmall;
    if(crustType == 'P' && pizzaSize == 'M')
        costOfPizza = PanCrustMedium;
    if(crustType == 'P' && pizzaSize == 'L')
        costOfPizza = PanCrustLarge;
    if(crustType == 'T' && pizzaSize == 'S')
        costOfPizza = ThinCrustSmall;
    if(crustType == 'T' && pizzaSize == 'M')
        costOfPizza = PanCrustMedium;
    if(crustType == 'T' && pizzaSize == 'L')
        costOfPizza = PanCrustLarge;
    if(crustType == 'H' && pizzaSize == 'S')
        costOfPizza = HandtossedSmall;
    if(crustType == 'H' && pizzaSize == 'M')
        costOfPizza = HandtossedMedium;
    if(crustType == 'H' && pizzaSize == 'L')
        costOfPizza = HandtossedLarge;

   costOfToppings = Pizza::totalToppings1() * Toppings12; //the cost of all of the toppings
            totalCostofMeal = costOfPizza + costOfToppings;
            return totalCostofMeal;
}


const double Pizza::totalToppings1() {
    totalToppings = pepperoni + sausage + peppers + sardines;
    return totalToppings;
}

void Pizza::setCrustType(char crustType1) {
    crustType = crustType1;
}

const char Pizza::getCrustType() {
    return crustType;
}

void Pizza::setPizzaSize(char pizzaSize1) {
    pizzaSize = pizzaSize1;
}

const char Pizza::getPizzaSize() {
    return pizzaSize;
}

void Pizza::setPepperoni(double pepperoniQuantity) {
    pepperoni = pepperoniQuantity;
}

void Pizza::setSausage(double sausageQuantity) {
    sausage = sausageQuantity;
}

void Pizza::setPeppers(double pepperQuantity) {
    peppers = pepperQuantity;
}

void Pizza::setSardines(double sardinesQuantity) {
    sardines = sardinesQuantity;
}

void Pizza::setCheese(char cheeseOption) {
    cheese = cheeseOption;
}

void Pizza::resetToppings() {
    pepperoni = 0;
    sardines = 0;
    peppers = 0;
    sausage = 0;
}
