#include<iostream>
using namespace std;
 void info (int * number);
int main() 
{
    int number;
    info(&number);
    return 0;
    
}
 void info (int * number) 
{
    int sum=0,i=1,plithos=0;
    do
    {
        cout<<"Δώσε μου τον ["<<i<<"] αριθμό ";
        cin>>*number;
        sum=sum+(*number);
        plithos=plithos+1;
        i=i+1;
        if (*number == 0)
        {
          plithos=plithos-1;
        }
        
    }
    while (*number!=0);
    cout<<endl<<"Το αθροίσμα των αριθμών που μου έδωσες ειναι: "<<sum;
    cout<<endl<<"Το πλήθος των αριθμών ειναι: "<<plithos;
}   

/Στην Ασκήση την παραπάνω ο χρήστης δίνει εναν αριθμό εως ότου δώσει τον αριθμό 0, όπου αυτό σημαίνει ο τερματισμός της επιλογής να εισαγει αριθμούς. Με το που τερματίσει/
αυτή η διαδίκασια γίνεται ενας υπολογισμός του αθρόισματος που εχει εισαγει ο χρήστης και δινεται ως πληροφορία και το πλήθος των αριθμών που μας εισηγαγε ο χρήστης. /