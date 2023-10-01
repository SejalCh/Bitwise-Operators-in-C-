/*exp4_3*/

#include<iostream>
int main()
{
   using namespace std;
   int a,a1,a2,bit_to_be_set, bit_to_be_reset;
   a=50;
   cout<<"bit_to_be_set:";
   cin>>bit_to_be_set;
   a1=a|(1<<bit_to_be_set);
   cout<<"bit_to_be_reset:";
   cin>>bit_to_be_reset;
   a2=a & ~(1<<bit_to_be_reset);
   cout<<"after set:"<<a1<<endl;
   cout<<"after reset:"<<a2<<endl;

}
