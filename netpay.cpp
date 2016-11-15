#include<iostream>

using namespace std; 

int main ()
{

float grossMonthlyPay;
float federalIncomeTax;
float stateIncomeTax;
float socialSecurityTax;
float mMTax; 
float pensionPlan;
float healthInsurance;
float finalNetPay;

cout<<"What is your gross monthly pay? ";
cin>>grossMonthlyPay;

federalIncomeTax=(grossMonthlyPay*.18);
stateIncomeTax=(grossMonthlyPay*.043);
socialSecurityTax=(grossMonthlyPay*.069);
mMTax=(grossMonthlyPay*.0275);
pensionPlan=(grossMonthlyPay*.06);
healthInsurance=125;

finalNetPay= (grossMonthlyPay-federalIncomeTax-stateIncomeTax-socialSecurityTax
-mMTax-pensionPlan-healthInsurance);  

cout<<"Federal Income Tax is: "<<federalIncomeTax<<endl;
cout<<"State Income Tax is: "<<stateIncomeTax<<endl;
cout<<"Social Security Tax is: "<<socialSecurityTax<<endl;
cout<<"Medicare/Medicaid Tax is: "<<mMTax<<endl;
cout<<"Pension Plan is: "<<pensionPlan<<endl;
cout<<"Health Insurance is: "<<healthInsurance<<endl; 
cout<<"Your final net pay is: "<<finalNetPay<<endl; 

return 0; 
}


