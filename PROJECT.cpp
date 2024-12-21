#include <iostream>
#include <exception>
#include <ctime>
using namespace std;
class appliances //Abstract parent class
{
protected:
    int quantity;
    float price;

public:
    virtual void buy()=0; //pure virtual func.
};

class refrigerator : public appliances //Child class
{
protected:
    float amount;
    int quan;
    int no;

public:
    float total=0; //Declared public so can be used in template func.
    char type;
    refrigerator() : type('o'), quan(0) {} // Default constructor

    void buy() // over ridden func.(virtual)
    {

        cout << "Enter the type of refrigerator from the above ones: ";
        cin >> type;

        cout << "Enter the quantity: " << endl;
        cin >> no;
         
         int quantity_1=5; /*declared so that can be incremented or decremented and for exception handling*/
         int quantity_2=3;
         int quantity_3=2;
         int quantity_4=4;
         int quantity_5=7;
        switch (type) // to select type from the given ones.
        {
        case '1':
        {
            

            try //Exception handling 
            {
                int j;

                if (no <= quantity_1)
                {
                    amount = 40000;

                    
                    quantity_1 -= no;
                }
                else
                    throw(j); // if no. >quantity
                    total += (no * amount);
            }
            catch (int x) 
            {
                cout << "OOPS!looks like we are of stock" << endl;
            }
        }
        break;

        case '2':
        {
            
            try
            {
                int j;
                if (no <= quantity_2)
                {
                    amount = 55000;
                    

                    quantity_2 -= no;
                }

                else
                    throw(j);
                  total += (no * amount);
            }

            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '3':
        {
            

            try
            {
                int j;
                if (no <= quantity_3)
                {

                    amount = 62000;
                    

                    quantity_3 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '4':
        {
            

            try
            {
                int j;
                if (no <= quantity_4)
                {
                    amount = 33000;
                    

                    quantity_4 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '5':
        {
            

            try
            {
                int j;

                if (no <= quantity_5)
                {
                    amount = 75000;
                    

                    quantity_5 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;
        default:
            cout << "OOPS!you have entered the wrong option" << endl; 
            break; //If type is not from the above ones 
        }
    }
};

class microwave : public appliances //child class
{
protected:
    float amount;
    int quan;
    int no;

public:
    float total=0;
    char type;
    microwave() : type('o'), quan(0) {}
    int quantity_1=3;
    int quantity_2=3;
    int quantity_3=2;
    int quantity_4=2;
    int quantity_5=4;
    void buy() //declared pure virtual in appliances class
    {

        cout << "Enter the type of microwave from the above ones: ";
        cin >> type;

        cout << "Enter the quantity: " << endl;
        cin >> no;
         
         
        switch (type) //For different types
        {
        case '1':
        {
        

            try //Exception handling 
            {
                int j;

                if (no <= quantity_1)
                {
                    amount = 20000;
                    

                    quantity_1 -= no;
                }

                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '2':
        {
            

            try
            {
                int j;

                if (no <= quantity_2)
                {
                    amount = 35000;
                
                }
                else
                   { throw(j);}
                   quantity_2 -= no;
                 total += (no * amount);  
            }
            catch (int x)

            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '3':
        {
            

            try
            {
                int j;
                if (no <= quantity_3)
                {
                    amount = 22000;
                    

                    quantity_3 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '4':
        {
            

            try
            {

                int j;
                if (no <= quantity_4)
                {
                    amount = 19500;
                    

                    quantity_4 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '5':
        {
            

            try
            {
                int j;
                if (no <= quantity_5)
                {
                    amount = 21200;
                    

                    quantity_5 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;
        default:
            cout << "OOPS!you have entered the wrong option" << endl;
            break;
        }
    }
};

class mobile : public appliances // child class
{
protected:
    float amount;
    int quan;
    int no;

public:
    float total=0;
    char type;
    mobile() : type('o'), quan(0) {}
        int quantity_1=5;
         int quantity_2=4;
         int quantity_3=2;
         int quantity_4=2;
         int quantity_5=1;
    void buy()
    {

        cout << "Enter the type of mobile phone from the above ones: ";
        cin >> type;

        cout << "Enter the quantity: " << endl;
        cin >> no;

         
        switch (type) // For different types
        {
        case '1':
        {
            

            try //exception handling
            {

                int j;
                if (no <= quantity_1)
                {
                    amount = 35000;
                    

                    quantity_1 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '2':
        {
            

            try
            {
                int j;

                if (no <= quantity_2)
                {
                    amount = 47000;
                    

                    quantity_2 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '3':
        {
            

            try
            {
                int j;

                if (no <= quantity_3)
                {
                    amount = 22000;
                    

                    quantity_3 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '4':
        {
            

            try
            {
                int j;
                if (no <= quantity_4)
                {
                    amount = 33000;
                    

                    quantity_4 -= no;
                }

                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '5':
        {
            

            try
            {
                int j;
                if (no <= quantity_5)
                {
                    amount = 25000;
                    

                    quantity_5 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        default:
            cout << "OOPS!you have entered the wrong option" << endl;
            break;
        }
    }
};

class television : public appliances
{
protected:
    float amount;
    int quan;
    int no;

public:
    float total=0;
    char type;
    television() : type('o'), quan(0) {}
         int quantity_1=3;
         int quantity_2=3;
         int quantity_3=2;
         int quantity_4=2;
         int quantity_5=3;
    void buy()
    {

        cout << "Enter the type of television from the above ones: ";
        cin >> type;
        

        cout << "Enter the quantity: " << endl;
        cin >> no;

        switch (type)
        {
        case '1':
        {
           

            try
            {
                int j;
                
                if (no <= quantity_1)
                {
                    amount = 22000;
                    

                    quantity_1 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '2':
        {
            

            try
            {
                int j;
                if (no <= quantity_2)
                {
                    amount = 35000;
                    

                    quantity_2 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }

            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '3':
        {
            
            try
            {
                int j;
                if (no <= quantity_3)
                {
                    amount = 29000;
                    

                    quantity_3 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '4':
        {
            

            try
            {
                int j;
                if (no <= quantity_4)
                {
                    amount = 12000;
                   

                    quantity_4 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of order" << endl;
            }
        }
        break;

        case '5':
        {
            

            try
            {
                int j;
                if (no <= quantity_5)
                {
                    amount = 21700;
                    

                    quantity_5 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of order" << endl;
            }
        }
        break;

        default:
            cout << "OOPS!you have entered the wrong option" << endl;
            break;
        }
    }
};

class air : public appliances
{
protected:
    float amount;
    int quan;
    int no;

public:
    float total=0;
    char type;
    air() : type('o'), quan(0) {}
         int quantity_1=5;
         int quantity_2=5;
         int quantity_3=1;
         int quantity_4=2;
         int quantity_5=2;
    void buy()
    {

        cout << "Enter the type of air conditioner from the above ones: ";
        cin >> type;

        cout << "Enter the quantity: " << endl;
        cin >> no;
        
        switch (type)
        {
        case '1':
        {
            
            try
            {
                int j;
                if (no <= quantity_1)
                {
                    amount = 29500;
                    

                    quantity_1 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS! look like we are out of stock" << endl;
            }
        }
        break;

        case '2':
        {
          try
            {
                int j;
                if (no <= quantity_2)
                {
                    amount = 43000;
                    

                    quantity_2 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS! look like we are out of stock" << endl;
            }
        }
        break;

        case '3':
        {
            
            try
            {
                int j;
                if (no <= quantity_3)
                {
                    amount = 28000;
                    

                    quantity_3 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out of stock" << endl;
            }
        }
        break;

        case '4':
        {
            

            try
            {
                int j;
                if (no <= quantity_4)
                {
                    amount = 45000;
                    

                    quantity_4 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out order" << endl;
            }
        }
        break;

        case '5':
        {
            
            try
            {
                int j;
                if (no <= quantity_5)
                {
                    amount = 37000;
                    

                    quantity_5 -= no;
                }
                else
                    throw(j);
                    total += (no * amount);
            }
            catch (int x)
            {
                cout << "OOPS!looks like we are out order" << endl;
            }
        }
        break;

        default:
            cout << "OOPS!you have entered the wrong option" << endl;
            break;
        }
    }
};

template <class T, class t1, class t2, class t3, class t4>
void bill(T total, t1 total_1, t2 total_2, t3 total_3, t4 total_4)//Bill generation
{
    float TOTAL = total + total_1 + total_2 + total_3 + total_4;
    time_t t = time(NULL);
    tm *tptr = localtime(&t);

    cout << "BILL DATE: ";
    cout << tptr->tm_mday << "/";
    cout << 1 + tptr->tm_mon << "/";
    cout << 1900 + tptr->tm_year << endl;

    cout << "BILL TIME: " << (tptr->tm_hour) << ":" << (tptr->tm_min) << ":" << (tptr->tm_sec) << endl;

    cout << "TOTAL BILL AMOUNT : " << TOTAL << endl;

    if (TOTAL > 25000 && TOTAL < 50000)
    {
        TOTAL -= (TOTAL * 0.05);
        cout << "TOTAL DISCOUNT: 5%" << endl;
    }

    else if (TOTAL >= 50000 && TOTAL < 75000)
    {
        TOTAL -= (TOTAL * 0.10);
        cout << "TOTAL DISCOUNT: 10%" << endl;
    }

    else if (TOTAL >= 75000 && TOTAL < 100000)
    {
        TOTAL -= (TOTAL * 0.25);
        cout << "TOTAL DISCOUNT: 25%" << endl;
    }
    else if (TOTAL >= 100000)
    {
        TOTAL -= (TOTAL * 0.50);
        cout << "TOTAL DISCOUNT: 50%" << endl;
    }
    else if(TOTAL ==0)
    {
        TOTAL =0.0f;
    }

    cout << "TOTAL BILL AMOUNT AFTER DICOUNT: " << TOTAL << endl;
}

int main() //Main Function
{
    mobile p1;
    microwave M1;
    refrigerator R1;
    television t1;
    air a1;
    char choice;
    int i = 1;

    // start:
    cout << "_____WELCOME TO THE ABD. STORE_____" << endl;
start2:
    while (i)
    {
        cout << "Which section you want to enter: " << endl;
        cout << "For Refrigerators, please press R" << endl;

        cout << "For microwave, please press M" << endl;

        cout << "For Mobile phones, please press P" << endl;

        cout << "For Television, please press T" << endl;

        cout << "For air conditioners, please press A" << endl;

        cin >> choice;
        if (choice == 'R' || choice == 'r')
        {

            cout << "_____WELCOME TO THE REFRIGERATOR SECTION_____" << endl;

            cout << "| 1) PELL      => price: 40000 |" << endl;

            cout << "| 2) HAIER     => price: 55000 |" << endl;

            cout << "| 3) DAWLANCE  => price: 62000 |" << endl;

            cout << "| 4) LG        => price: 33000 |" << endl;

            cout << "| 5) PANASONiC => price: 75000 |" << endl;

            appliances *ptr;

            ptr = &R1;
            ptr->buy();
        }

        else if (choice == 'm' || choice == 'M')
        {
            cout << "____Welcome To Microwave Section____" << endl;
            cout << "| 1) PELL      => price: 20000 |" << endl;

            cout << "| 2) HAIER     => price: 35000 |" << endl;

            cout << "| 3) DAWLANCE  => price: 22000 |" << endl;

            cout << "| 4) LG        => price: 19500 |" << endl;

            cout << "| 5) PANASONiC => price: 21200 |" << endl;

            appliances *ptr;

            ptr = &M1;
            ptr->buy();

            // M1.buy();
        }
        else if (choice == 'P' || choice == 'p')
        {
            cout << "____Welcome To Mobile Phone Section____" << endl;
            cout << "| 1) INFINIX      => price: 35000 |" << endl;

            cout << "| 2) REDMI        => price: 47000 |" << endl;

            cout << "| 3) ITEL         => price: 22000 |" << endl;

            cout << "| 4) HUAWEI       => price: 33000 |" << endl;

            cout << "| 5) NOKIA        => price: 25000 |" << endl;

            appliances *ptr;

            ptr = &p1;
            ptr->buy();
        }

        else if (choice == 'T' || choice == 't')
        {
            cout << "____Welcome To Television Section____" << endl;
            cout << "| 1) SONY      => price: 22000 |" << endl;

            cout << "| 2) HAIER     => price: 35000 |" << endl;

            cout << "| 3) LENOVO    => price: 29000 |" << endl;

            cout << "| 4) LG        => price: 12000 |" << endl;

            cout << "| 5) PANASONiC => price: 21700 |" << endl;

            appliances *ptr;

            ptr = &t1;
            ptr->buy();
        }

        else if (choice == 'A' || choice == 'a')
        {
            cout << "____Welcome To Air conditioner Section____" << endl;
            cout << "| 1) SONY      => price: 29500 |" << endl;

            cout << "| 2) HAIER     => price: 43000 |" << endl;

            cout << "| 3) LENOVO    => price: 28000 |" << endl;

            cout << "| 4) LG        => price: 45000 |" << endl;

            cout << "| 5) PANASONiC => price: 37000 |" << endl;

            appliances *ptr;

            ptr = &a1;
            ptr->buy();
            // a1.bill(a1.total);
        }
        else
        {
            cout << "OOPS! Invalid option. please try again" << endl;
            goto start2;
        }

        cout << "Do you want to shop again yes(y) or no(n)?: ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
        {
        }
        // goto start;

        else
        {
            i = 0;
            cout << "Thankyou for shopping." << endl
                 << "your bill will be generated in a moment" << endl;

            bill(R1.total, M1.total, p1.total, t1.total, a1.total);
        }
    }
}
