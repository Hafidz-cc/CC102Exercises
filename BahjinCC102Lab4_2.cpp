#include <iostream>
using namespace std;

int main() {
       char choice;
    int Salesperson = 0, Amount = 0, Product = 0;
    double array[5][4]={


    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0},
    {0,0,0,0}



    };
    do{
    for(int i=0 ; i<=5; i++) {

            cout << "Salesperson: " ;
            cin >> Salesperson;
            Salesperson-=1;
            cout<<"Product: ";
            cin>>Product;
            Product-=1;
            cout<<"Amount: ";
            cin>>Amount;
            array[Product][Salesperson] += Amount;
            cout<<"end process?[y/n]";
            char end;
            cin>>end;
            if(end == 'y') break;

    }
    //table
        for(int i=0; i<1; i++){
            cout<<"Product "<<"         1 "<<"          2 "<<"          3 "<<"          4 " <<" Total";
        }
        cout<<endl;

        for(int i = 0; i < 5; i++) {

        for(int j = 0; j < 4; j++) {
            cout <<"                "<<array[i][j];
        }
            cout << endl;
    }

    cout<<"repeat process?(y/n)"<<endl;
    cin>>choice;
    }while(choice=='y');
    return 0;
}
