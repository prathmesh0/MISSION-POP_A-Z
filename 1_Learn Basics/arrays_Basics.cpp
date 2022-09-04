#include<iostream>
using namespace std;

void printArray(int arr[], int n){
   for (int i = 0; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }
   cout<<endl;
   
}

int main(){
   //declaration
   int arr[5] = {10,20,30,40,50};
   printArray(arr, 5);
   //accesing array element 
   cout<<arr[0]<<endl;
   cout<<arr[2]<<endl;
   cout<<arr[3]<<endl;

   //initializing array with same elemnt
   int arr1[4] = {0};
   printArray(arr1, 4);
   int m = 5, val  = 2;
   int arr2[m];
   for (int  i = 0; i < m; i++)
   {
      arr2[i] = val;
   }
   printArray(arr2, m);
   
   //using fill function
   int arr4[m];
   fill_n(arr4, m, 8);
   printArray(arr4, m);

   //size of array
   int v[] = {13,44,66,78,999,900,32} ;
   int size = sizeof(v)/ sizeof(int);
   cout<<"size = "<<size<<endl; 

   //Multidimensional array
   //declaration and initialization
   int star[3][3] = {{12,23,44},{12,55,76},{65,43,53}};
   int star1[3][3] = {1,2,3,4,5,6,7,8,9};
   //printing multiimensional array
   cout<<star[0][0]<<" ";
   cout<<star[1][0]<<" ";
   cout<<star[2][2]<<" ";
   cout<<endl;

   //using for loop
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout<<star1[i][j]<<" ";
      }
      cout<<endl;
      
   }
   


   

   return 0;
}