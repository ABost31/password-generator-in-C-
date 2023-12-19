/* create a password generator*/
#include<iostream>
#include<random>
#include<ctime>



using namespace std;

int main(){
    int number = 0;
    srand(time(0));

    cout<<"I will now generate a password it must be at minimum 12 digits long."<<endl;
    cin>>number;
    cout<<"--------------------Generating Password--------------------"<<endl;
    if (number<12 || number>18)
    {
        cout<<"the password must be between 12 and 18 digits long."<<endl;
        exit;
    }
    else{
        for(int i =1; i<=number; i++){

            char ch = rand()% (126-33 +1)+ 33;
            cout<<ch;
            }
    }
    cout<<"\n-----------------------------------------------------------";
    return 0;
}