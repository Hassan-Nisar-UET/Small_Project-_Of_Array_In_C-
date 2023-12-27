#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
string admin="hassan";
string pin="123";
string adminName;
string adminPin;
const int size=10;
string employerName[size];
string employerPin[size];
int currentEmployer=0;
int currentProduct=0;
string stockName[size];
int stockQuantity[size];
int stockPrice[size];
int main(){
    int option=-1;
     while(option != 4){
    cout<<"***********************************"<<endl;
    cout<<"          point of sales           "<<endl;
    cout<<"***********************************"<<endl;
    cout<<"1.login as admin"<<endl;
    cout<<"2.login as employer"<<endl;
    cout<<"3.login as customer"<<endl;
    cout<<"4.exit"<<endl;
    
    cout<<"enter ypur option"<<endl;
    cin>>option;
        
        system("cls");
        if(option == 1){

        
            cout<<"enter the admin name"<<endl;
            cin>>adminName;
            cout<<"enter admin password"<<endl;
            cin>>adminPin;
            if(adminName == admin && adminPin == pin){
                cout<<"login sucessfully"<<endl;
                getch();
            }

             int option1=-2;
            while(option1 != 5){
            cout<<"1.add employer"<<endl;
            cout<<"2.delete empoyer"<<endl;
            cout<<"3.view employer list "<<endl;
            cout<<"4.view stock"<<endl;
            cout<<"5.logout"<<endl;
            cout<<"enter your option"<<endl;
            cin>>option1;
            
           
                system("cls");
                if(option1 == 1){
                    cout<<"enter the employer name"<<endl;
                    cin>>employerName[currentEmployer];
                    cout<<"enter the employer password"<<endl;
                    cin>>employerPin[currentEmployer];
                    currentEmployer++;
                }
                else if(option1 == 2){
                    string deletEmployer,newEmployer,newPin,deletePin;
                    cout<<"enter the name of employer which you want to delete"<<endl;
                    cin>>deletEmployer;
                    cout<<"enter the password of employer which you want to delete"<<endl;
                    cin>>deletePin;
                    for(int p=0; p<=currentEmployer; p++){
                       if(deletEmployer == employerName[p] && deletePin == employerPin[p] ){
                           cout<<"enter new employer"<<endl;
                           cin>>newEmployer;
                           cout<<"enter new pin"<<endl;
                           cin>>newPin;
                           employerName[p]=newEmployer;
                           employerPin[p]=newPin;
                       }
                    }
                }
                else if(option1 == 3){
                    cout<<"employer"<<"\t"<<"\t"<<"password"<<endl;
                   for(int l=0;l<currentEmployer;l=l+1){
                       cout<<employerName[l]<<"\t"<<"\t"<<"\t"<<employerPin[l]<<endl;
                   }
                }
            }
        }
        else if(option == 2){
            string employerLogin,loginPin;
            cout<<"enter the employer name"<<endl;
            cin>>employerLogin;
            cout<<"enter the employer pin"<<endl;
            cin>>loginPin;
            for(int i=0; i<=currentEmployer; i++){
                if(employerLogin == employerName[i] && employerPin[i] == loginPin){
                    cout<<"login sucessfully"<<endl;
                    getch();
                }
                int option3=-2;
                while(option3 != 4){
                    cout<<"1.add stock"<<endl;
                    cout<<"2.delete stock"<<endl;
                    cout<<"3.view stock"<<endl;
                    cout<<"4.logout"<<endl;
                    cout<<"enter your option"<<endl;
                    cin>>option3;
                    system("cls");
                    if(option3 == 1){
                        cout<<"enter the stock"<<endl;
                        cin>>stockName[currentProduct];
                        cout<<"enter the stock quantity"<<endl;
                        cin>>stockQuantity[currentProduct];
                        cout<<"enter the stock price"<<endl;
                        cin>>stockPrice[currentProduct];
                        currentProduct++;
                    }
                        else if(option3 == 2){
                        string deletStock,newEmStock;
                        int newPrice,deletePrice,deleteQuantity,newQuantity;
                        cout<<"enter the name of stock which you want to delete"<<endl;
                        cin>>deletStock;
                        cout<<"enter the quantity of stock which you want to delete"<<endl;
                        cin>>deleteQuantity;
                        cout<<"enter the price of stock which you want to delete"<<endl;
                        cin>>deletePrice;
                            for(int p=0; p<=currentProduct; p++){
                                if(deletStock == stockName[p] && deleteQuantity == stockQuantity[p] && deletePrice == stockPrice[p]){
                                    cout<<"enter new stock"<<endl;
                                    cin>>newEmStock;
                                    cout<<"enter new quantity"<<endl;
                                    cin>>newQuantity;
                                    cout<<"enter new price"<<endl;
                                    cin>>newPrice;
                                    stockName[p]=newEmStock;
                                    stockQuantity[p]=newQuantity;
                                    stockPrice[p]=newPrice;
                                }
                            }
                               if(option3 == 3){
                                cout<<"stock"<<"\t"<<"\t"<<"quantity"<<"\t"<<"\t"<<"price"<<endl;
                                for(int l=0;l<currentEmployer;l=l+1){
                                  cout<<stockName[l]<<"\t"<<"\t"<<"\t"<<stockQuantity[l]<<"\t"<<"\t"<<"\t"<<stockPrice[l]<<endl;
                                }
                            }
                        }
                }
            }
        }
        else if(option == 3){
            int option4 =-5;
            while(option4 != 3){
                    cout<<"1.view stock"<<endl;
                    cout<<"2.buy items"<<endl;
                    cout<<"3.exit"<<endl;
                    cout<<"enter your option"<<endl;
                    cin>>option4;
                    system("cls");
                    if(option4 == 1){
                       cout<<"stock"<<"\t"<<"\t"<<"quantity"<<"\t"<<"\t"<<"price"<<endl;
                                for(int l=0;l<currentEmployer;l=l+1){
                                  cout<<stockName[l]<<"\t"<<"\t"<<"\t"<<stockQuantity[l]<<"\t"<<"\t"<<"\t"<<stockPrice[l]<<endl;
                                }
                    }
                    else if(option4 == 2){
                        string buyItem;
                        int buyPrice;
                        float totalPrice;
                        cout<<"enter the item"<<endl;
                        cin>>buyItem;
                        cout<<"enter price"<<endl;
                        cin>>buyPrice;
                        for(int i=0; i<=currentProduct; i++){
                            if(stockName[i]==buyItem && stockPrice[i]==buyPrice){
                               totalPrice=stockQuantity[i]*stockPrice[i];
                               cout<<"total price is.."<<totalPrice<<endl;
                            }
                            else{
                                cout<<"item is not present in stock"<<endl;
                            }
                        }
                }    }
        }
    }
}
   
