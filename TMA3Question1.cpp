//Regan Setter
//Student ID 3505894
//Computer Science 206
//February 25th, 2021

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

//Write a program in which you create a const whose value is determined at runtime by reading the time when the program starts (hint: use the <ctime> standard header). In a separate function, have the program create two arrays of 10,000 doubles. Initialize the first array with sequential integral values starting with 100, and initialize the second array with the same numbers, but in reverse order (i.e., the first array would contain 100, 101, 102b& while the second array contains 10,099, 10,098, 10,097b&). Loop through both arrays using a single loop, and multiply the corresponding array elements from each array together and display the result. Read the time when the program completes the multiplication, and compute and display the elapsed time. Do not use inline functions in this program.
//Would have preferred to use time.h in this instance but used ctime as per the instructions of the assignment

//Tests: 1. Created a program with a const whose value is determined at runtime by reading the time when the program starts - used ctime here as instructed but I think time.h makes more sense
//2. Ran the program, time elapsed = 0 after the functions computed/ran 
//3. Used standard functions and no inlines as directed 
//4. Input different numbers for int a, b, c = correct ones used, anything else provided a negative total (of course) 
//5. Sum of the product is equal to 176816052 = correct and the time elapsed is 0 because of the function used here

using namespace std;

int main ()
{
  const time_t start_time = time (NULL);  //start time function, time = null to return current time
  double arr1[10000], arr2[10000];  //double arrays, array1 and array2 set to 10000
  for (int a = 100, b = 0, c = 9999; a < 10100; a++, b++, c--)
    {
      arr1[b] = a;	//array1
      arr2[c] = a;	//array2
    }
  int sum = 0;
  for (int a = 0; a < 10000; a++)
    {
      sum += arr1[a] * arr2[a];	//sum of array1 + array2 multiplied together
    }
  cout << "The Sum Of The Product: " << sum << endl;	//displays The Sum Of The Product
  int time_elapsed = time (NULL) - start_time;
  cout << "The Time Elaspsed is: " << time_elapsed << endl;	//displays the Time Elapsed 
}
