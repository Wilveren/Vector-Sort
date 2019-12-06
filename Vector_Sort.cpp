//Author: William Everett McLean
//Intent: Users will first tell the program how many numbers will be contained in a vector, and will then feed that many numbers into the vector. A
//function will then be called which sorts the numbers in the vector from smallest to largest, then outputs them back to the user.

#include <iostream>
#include <vector>
using namespace std;

void SortVector(vector<int>& myVec){ //Funtion for sorting the numbers in the vector from lowest to highest using the Bubble Sort technique. Vector is passed by reference.
  int x; //Variable to temporarily hold the value of one of the digits in the array so they can be switched
  bool c = false; //Boolean used to determine whether sorting is complete.
  
  do{//Loop for sorting
     c=false; //Boolean is set to False at the start of the loop, and only becomes True if two digits were switched, which prompts the loop to run again
     for(unsigned int i=0;i<(myVec.size()-1);++i){ //For loop will run enough times to check each digit in the vector
        
        if(myVec.at(i)>myVec.at(i+1)){ //If the digit is larger than the next digit in the vector, they are switched
           x=myVec.at(i);
           myVec.at(i)=myVec.at(i+1);
           myVec.at(i+1)=x;
           c=true; //Since a switch occurred, the sorting loop will need to run again, so c is set to true
        }
     }
     }while (c==true);
        
     
  
  
 
return;
}
int main() {

   int x; //Initializes variable x, which will hold the value for the size of the vector.
   vector<int> myVec; //Initializes the vector for holding user values.
   
   cout << "How many numbers will be sorted?" << endl; //Asks for user input, sets variable x to this input, then sets size of the vector to x
   cin >> x;
   myVec.resize(x);
   
   for(unsigned int i=0;i<myVec.size();++i){//Loop will run enough time to fill the vector with numbers
	  cout << "Please enter number " << (i+1) << " of " << myVec.size() << "."<< endl;
      cin >> myVec.at(i);
   }
   
   SortVector(myVec);//Calls function to sort vector
   
   cout << "Your numbers have been sorted from smallest to largest: " << endl;
  for(unsigned int i=0;i<myVec.size();++i){//Loop will run enough times to print each number in the vector, now sorted from smallest to largest
     cout << myVec.at(i) << " ";
  }

   return 0;
}