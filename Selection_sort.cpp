#include<iostream>
using namespace std;
int selectionsort(int number[],int n){
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(number[j]<number[i]){
               int temp=number[j];
               number[j]=number[i];
               number[i]=temp;
           }
       }
   }
   for(int j=0;j<n;j++){
   cout<<"Sorted array "<<(char)26<<" "<<number[j]<<endl;
   }
}
int main(){

    int n;
   cout<<"How many element do you want to store "<<(char)26<<" ";
   cin>>n;
   int number[n];
   for(int i=0;i<n;i++){
       cout<<"Enter "<<i+1<<" element for array "<<(char)26<<" ";
       cin>>number[i];
   }
   selectionsort(number,n);


   //Selection sort without using function
//    for(int i=0;i<n-1;i++){
//        for(int j=i+1;j<n;j++){
//            if(number[j]<number[i]){
//                int temp=number[j];
//                number[j]=number[i];
//                number[i]=temp;
//            }
//        }
//    }
//    for(int i=0;i<n;i++){
//    cout<<"Sorted array "<<(char)26<<" "<<number[i]<<endl;
//    }

   return 0;
}