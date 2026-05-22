// PRINTF AND SCANF IN CPP
// You can use printf and scanf in cpp also 
// ** BUT YOU CANT SCAN STRUCTURE DATA BY SCANF BEACAUSE IT DOES NOT SUPPORT OPPS BUT CIN DOES SUPPORT **/ 
#include<iostream>
using namespace std;
int main()
{
int x;
printf("Enter the value\n");
scanf("%d",&x);
printf("octal :%#o  hexa : %#x \n",x,x);	// printing value in hexa and octal
}
