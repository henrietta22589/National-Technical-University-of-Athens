/*Δημιουργία μιας απλής λίστας απλά συνδεδεμένης,για την ακρίβεια θα ήθελα να εχει η λίστα μου τα στοιχεία 6,9,8,5,5,0,0,8,9,8*/
#include<iostream>
using namespace std;
struct mobile_of_erietta /*Σε κάθε κόμβο θα υπαρχει η πληροφορία του αριθμού που ειναι μέρος ενος κινητου τηλεφώνου*/
{
    int info_of_each_number;
    mobile_of_erietta*next;
};
int main()
{
    mobile_of_erietta * numb_1  = new mobile_of_erietta{6,nullptr};
    mobile_of_erietta * numb_2  = new mobile_of_erietta{9,nullptr};
    mobile_of_erietta * numb_3  = new mobile_of_erietta{8,nullptr};
    mobile_of_erietta * numb_4  = new mobile_of_erietta{5,nullptr};
    mobile_of_erietta * numb_5  = new mobile_of_erietta{5,nullptr};
    mobile_of_erietta * numb_6  = new mobile_of_erietta{0,nullptr};
    mobile_of_erietta * numb_7  = new mobile_of_erietta{0,nullptr};
    mobile_of_erietta * numb_8  = new mobile_of_erietta{8,nullptr};
    mobile_of_erietta * numb_9  = new mobile_of_erietta{9,nullptr};
    mobile_of_erietta * numb_10 = new mobile_of_erietta{8,nullptr};
    /*Συνδεση των κόμβων της λίστας */
    numb_1  -> next = numb_2;
    numb_2  -> next = numb_3;
    numb_3  -> next = numb_4;
    numb_4  -> next = numb_5;
    numb_5  -> next = numb_6;
    numb_6  -> next = numb_7;
    numb_7  -> next = numb_8;
    numb_8  -> next = numb_9;
    numb_9  -> next = numb_10;
    numb_10 -> next =nullptr; /*Δείχνει στο τέλος της λίστας*/
    /*Πάμε να δημιουργήσουμε εναν δείκτη ο οποίος θα δείχνει στο 1ο στοιχείο της λίστας */
    mobile_of_erietta*head = numb_1;
    /*Πάμε να φτιαξούμε εναν δεικτή ο οποίος θα μας βοήθησει να διατρέξουμε σε όλα τα στοιχεία της λίστας */
    mobile_of_erietta *read_all_list;
    /*Θέλουμε αυτός ο δείκτης να ξεκινάει απο κάπου όποτε θα πούμε */
    read_all_list = head ;
    /*Το τέλος μίας λίστας είναι το στοιχείο null στην συγκεκριμένη περίπτωση το nullptr οπότε λέμε */
    do
    {
        /*Εμφάνισε τα στοιχεία του κάθε κόμβου*/
        cout<<endl<<read_all_list -> info_of_each_number ;
        /*Προχώρα στο επόμενο στοιχείο */
        read_all_list = read_all_list ->next;
    } while (read_all_list != nullptr);
    
    return 0;
}