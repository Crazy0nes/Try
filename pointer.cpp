#include <iostream>
using namespace std;

int main(){
    //int *p, *q, *r;
    //int n=10;
    //p=&n;

    //cout << *p <<endl;
    //cout << p;

    //int array[3]={10,20,30};
    //int i;
   // int *k;

 //   k=array;
   //
  //  for(i=0;i<3;i++){

       // cout << *(k+i) << " ";
   // }

   char kota[]= "yogyakarta";
   cout << kota << endl;
   
   char *j = kota;

   int i;
   for(i=0;i<10;i++){
    cout << *(j+i) << " ";
   }


   int x=20;
   int *i=&x;
   int **ii =&i;
   cout <<**ii<<endl;
   cout <<"Alamat x: " << &x <<endl;
   cout <<"Alamat *i: " << &i <<endl;
   cout <<"Alamat **ii: " << &ii <<endl;
    return 0;
}