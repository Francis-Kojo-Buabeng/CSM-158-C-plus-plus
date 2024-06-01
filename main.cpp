#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int hourWorked, numberOfChildren;
double salary, incomeTax, NHLC, districtTax, totalDeduction, netPay, eduFund;
int hourWorkedRequired = 40;
int main()
{
    cout<<"Input number of hours worked: ";
    cin>>hourWorked;

    if(hourWorked <= hourWorkedRequired)
    {
        salary = hourWorkedRequired * 5;
    }
    else
        salary = (hourWorkedRequired * 5) + ((hourWorked - hourWorkedRequired) * 1.5);

    cout<<"Enter number of children: ";
    cin>>numberOfChildren;

    if (numberOfChildren > 3)
    {
        eduFund = (numberOfChildren -3) * 0.5;

    }

    incomeTax = salary * 0.15;
    NHLC = salary * 0.025;
    districtTax = salary * 0.01;

    totalDeduction = (incomeTax + NHLC + districtTax + eduFund);
    netPay = salary - totalDeduction;

    //cout <<" Gross pay: "<< salary <<"\n"<<" Total deduction: "<< totalDeduction <<"\n"<<" Net pay: "<< netPay <<"\n";//

    cout<<"Gross pay "<<  "Total deduction " << "  Net pay "<<endl;
    cout<<"  "<<salary <<"\t\t"<<totalDeduction <<"\t\t"<<netPay<<"\n";







}
