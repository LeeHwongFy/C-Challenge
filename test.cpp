# include <iostream>
# include<cmath>
using namespace std;
bool songuyento(long long n){
   if(n<2) return false;
   for (int i=2;i<=sqrt(n);i++){
      if(n%i==0) return false;
   }
   return true;
}
bool ladaytang(long long n){
   while(n>=10){
      int chusocuoi=n%10;
      int chusotruoc=n/10%10;
      if(chusocuoi>=chusotruoc) return false;
      n/=10;
   }
   return true;
}
bool ladaygiam(long long n){
   while(n>=10){
      int chusocuoi=n%10;
      int chusotruoc=n/10%10;
      if(chusocuoi<=chusotruoc) return false;
      n/=10;
   }
   return true;
}
int main(){
   int sum=0;
   int n;
   cout<<"nhap n: ";
   cin>>n;
   int canduoi=pow(10,n-1);
   int cantren=pow(10,n)-1;
   for( int i=canduoi;i<=cantren;i++){
      if(songuyento(i)==true && (ladaytang(i)==true || ladaygiam(i)==true)){
         sum++;
      }
   }
   cout<<"so chu so hoan hao la:"<<sum;
}