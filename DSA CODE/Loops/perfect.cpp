#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int  sum = 0;

    for (int i = 0; i <= 500; i++)
    {
         for (int j = 0; j < i; j++)
         {
            if(i%j == 0){
                sum = sum + j;
            }

         }
         
        
    }
    
}