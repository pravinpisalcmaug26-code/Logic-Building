#include <iostream>
#include <string>
using namespace std;

double reorderCost(int qty, double unitPrice)
{
    return qty * unitPrice;


}
double reorderCost(double qty, double unitPrice)
{
    return qty * unitPrice;
}

double reorderCost(int qty, double unitPrice, double taxRate)
{
    double cost = qty * unitPrice;
    return cost + (cost * taxRate / 100);
}

double applyDiscount(double price, double discountPercent = 10.0)
{
    return price - (price * discountPercent / 100);
}


class Product
{
private:
    int productId;
    string name;
    double price;
    int quantity;

public:

    
    void acceptDetails()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }
     void displayDetails()
    {
      cout<<"productID:"<<productId<<endl;
      cout<<"name:"<<name<<endl;
      cout<<"price:"<<price<<endl;
      cout<<"quantity:"<<quantity<<endl;
      cout<<"total:"<<totalValue()<<endl;

    }

    
    
    double totalValue() const
    {
        return price * quantity;
    }

    
    bool isLowStock(int threshold) const
    {
        return quantity < threshold;
    }
};

int main()
{
    
    Product arr[5];

    
    for(int i = 0; i < 5; i++)
    {
        cout << "\nEnter details for Product " << i + 1 << endl;
        arr[i].acceptDetails();
    }

    
    cout << "======= INVENTORY REPORT ======="<<endl;


    
    for(int i = 0; i < 5; i++)
    {
        arr[i].displayDetails();
    }

    
    int highestIndex = 0;

    for(int i = 1; i < 5; i++)
    {
        if(arr[i].totalValue() >
           arr[highestIndex].totalValue())
        {
            highestIndex = i;
        }
    }

    cout << "\nHighest Value Product:\n";
    arr[highestIndex].displayDetails();

    
    int threshold;

    cout << "\nEnter low stock threshold: ";
    cin >> threshold;

    cout << "\nLow Stock Products:\n";

    for(int i = 0; i < 5; i++)
    {
        if(arr[i].isLowStock(threshold))
        {
            arr[i].displayDetails();
        }
    }
    cout << "Integer Quantity Cost: "
         << reorderCost(10, 50.0) << endl;

    cout << "Fractional Quantity Cost: "
         << reorderCost(2.5, 100.0) << endl;

    cout << "Cost With Tax: "
         << reorderCost(10, 50.0, 18.0) << endl;

    cout << "Discount With Default 10%: "
         << applyDiscount(1000) << endl;

    cout << "Discount With 20%: "
         << applyDiscount(1000, 20.0) << endl;

    

    return 0;
}