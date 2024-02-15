#include<iostream>
using namespace std;
// int main(){


//     int age;
//     cin>>age;

     //the try block contain the code which can be executed and also have some possiblity to throw the error


    //  try{   
//         if(age>=24){
//             cout<<"you can drink"<<endl;

//         }
//         else{
//             throw(age);

//         }
//      }

// ctach is used to the throw the error which we return in throw parameters 

//      catch(int age){
//         cout<<"you cannnot drink"<<endl;
//         cout<<"your age is"<<age;



//      }


//      return 0;

  
// }

int main(){
    int num;
    int denum;

    // Prompting the user to enter the numerator and denominator
    cout << "Enter the numerator and denominator: ";
    cin >> num >> denum;

    int output;

    try{
        // Checking if the denominator is zero
        if(denum == 0){
            // If the denominator is zero, throwing an exception
            throw denum;
        }
        else{
            // If the denominator is not zero, performing the division
            output = num / denum;
        }
    }
    catch(int d){
        // Catching the exception if the denominator is zero
        cout << "Denominator cannot be zero" << endl;
        // Exiting the program as denominator is zero
        return 1;
    }

    // Outputting the result of the division
    cout << "Answer of the division is: " << output;
    return 0;
}