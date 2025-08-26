#include<iostream>
using namespace std;
/*Δήλωση συναρτήσεων */
void numb(int *number_1,int *number_2);
int range_of_numbers(int x,int y);
int main()
{
   int number_a,number_b,call_function;
   /*Καλώ την 1η συνάρτηση */
   numb(&number_a, &number_b);
   /*Καλώ την 2η συνάρτηση */
    call_function = range_of_numbers(number_a, number_b);
    return 0; 
}           

/*1η συνάρτηση */
void numb(int *number_1,int *number_2)
{
    cout<<"Δωσε δύο αριθμούς μη αρνητικούς "<<endl;
    do
    {
        cout<<endl<<"Εισήγαγε μου τον πρώτο αριθμό: ";
        cin>>*number_1;
        cout<<endl<<"Εισήγαγε μου τον δευτέρο αριθμό: ";
        cin>>*number_2;
        
    }while (*number_1<0||*number_2<0);
 
   }
 /*2η συνάρτηση */     
 int range_of_numbers(int x,int y)
 {
 int i,k,l;
    for(i=0;i<=10;i++)
    {
        
        
       for(k=1;k<=10;k++)
        {
          l=k*2;
        
           if (i==l)
            {
            cout<<endl<<"Οι αριθμοί που είναι πολλαπλάσια του δευτερού αριθμού ειναι : "<<l;
            }
       }
    }
    return l;
}