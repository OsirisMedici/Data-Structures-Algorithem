#include<bits/stdc++.h>
using namespace std;

bool Palidrome(string str, int start, int end){
    //base case
    if(start > end){
        return true;
    }
    if(str[start] != str[end]){
        return false;
    }
    else {
        return Palidrome(str, start +1 , end -1);
    }

    
}

int main(){
    string name ;
    cout << "Enter a word to check it's pelidrome is or not: ";
    cin >> name;

    bool is_palidrome = Palidrome(name, 0, name.length()-1);

    if (is_palidrome){
        cout << "Yessss!! your word is a plaidrome. now go!"<< endl;
    }
    else{
        cout << " No it's not. Bharam hai G aapka" << endl;
    }
}