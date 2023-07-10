#include <iostream>
#include <string>
using namespace std;
class Bank{
      string name,address;
      char acc_type;
      float balance=0;
      float amount=0;
    public:
        void open_Account();
        void deposit_Money();
        void withdraw_Money();
        void balance_enquiry();
        void display_Account();
};
void Bank :: open_Account(){
    cout << "\n-------------------------------------------------------------------------------------------------------------";
    cout << "\nEnter Your Details To Open Account"<<endl;
    cout << "Enter Your Name:";
    cin.ignore();
    getline(cin,name);
    cout << "Enter Your Address:";
    getline(cin,address);
    cout << "Enter Bank Account Type - Savings Account(S) or Current Account(C):";
    cin >> acc_type;
    cout << "Enter The Amount Deposited:";
    cin >> balance;
    cout <<"Your Account Is Created Successfully";
}
void Bank :: deposit_Money(){
    cout << "\n-------------------------------------------------------------------------------------------------------------";
    cout << "\nEnter The Amount Deposited:";
    cin >>  amount;
    cout <<"\n"<<amount<<"Rs Is Successfully Credited Into Your Account\n"<<endl;
    balance+=amount;
    cout << "\nAvailable Balance:";
    cout << balance<<"Rs";
}
void Bank :: withdraw_Money(){
    cout << "\n-------------------------------------------------------------------------------------------------------------";
    cout << "\nEnter The Amount Withdraw:";
    cin >> amount;
    if(amount>balance){
        cout<<"\nSufficient Funds Not Available\n"<<endl;
    }
    else{
    balance-=amount;
    }
    cout << "\n\nAvailable Balance:";
    cout << balance<<"Rs";
}
void Bank :: display_Account(){
    cout << "\n-------------------------------------------------------------------------------------------------------------";
    cout << "\nNAME:"<<name<<endl;
    cout << "ACCOUNT TYPE:"<<acc_type<<endl;
    cout << "ADDRESS:"<<address<<endl;
    cout << "AVAILABLE BALANCE:"<<balance<<"Rs";
}
void Bank :: balance_enquiry(){
    cout << "\nAVAILABLE BALANCE:"<<balance<<"Rs";
}
int main() {
    int value,i;
    Bank customer;
cout << "--------------------------------------------------------------------------------------------------------------";
cout << "\n                                        WELCOME TO STATE BANK OF INDIA                                         ";
cout << "\n-------------------------------------------------------------------------------------------------------------";
while(i!=1){
cout << "\n Select Bank Service";
cout << "\n 1.Open Account";
cout << "\n 2.Deposit Money";
cout << "\n 3.Withdraw Money";
cout << "\n 4.Balance Enquiry";
cout << "\n 5.Display Account ";
cout << "\n 6.Exit";
cout << "\n Enter a number:";
cin >> value;
cout << "\n-------------------------------------------------------------------------------------------------------------\n";
switch(value){
    case 1:
    customer.open_Account();
    break;
    case 2:
    customer.deposit_Money();
    break;
    case 3:
    customer.withdraw_Money();
    break;
    case 4:
    customer.balance_enquiry();
    break;
    case 5:
    customer.display_Account();
    break;
    case 6:
    i=1;
    break;
    default:
    cout << "\nInvalid Input";
}
 cout << "\n-------------------------------------------------------------------------------------------------------------";
}
return 0;
}