#include<iostream>
using namespace std; 
#define pi 3.14
float cylinder_area( float h,float r);

int main()
{
    float upsos,aktina,call_function;
    cout<<"Δωσε μου το ύψος του κλίνδρου";
    cin>>upsos;
    cout<<"Δωσε μου την ακτίνα του κλίνδρου";
    cin>>aktina;
    call_function = cylinder_area(upsos,aktina);
    
    return 0;

}
float cylinder_area( float *h,float *r)
{
    float emvadon = 2*pi*r*(h+r);
    cout<<endl<<"Το εμβαδόν είναι  "<<emvadon;
    return emvadon;
}