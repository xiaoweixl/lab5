/******************************
 * Xiaowei Li
 * CPSC 1021, Lab-3, F19
 * xiaowe2@clemson.edu
 * Nushrat Humaira;Alex Myers;
 * Lab5 First C++
 * ****************************/
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>


int main()
{
    std::vector<int> vector;
    vector.reserve(10000);
    // When you are finished, you should print this number to the terminal. 
    int avg = 0;
    int sum =0;
    //call in functions ifstream to read the numbers.txt file
    std::ifstream input;
    input.open("numbers.txt");
    
    int c;
    int count=0;
    //call functions
    while( input >>c)
    {
        vector.emplace_back(c);
        count ++;
    }
    for (int i: vector)
    {
        sum = sum + i;
    }

    avg = sum/vector.size();
    std::cout << avg << std::endl;
    // Below is an example how you populate a vector in c++. 
    // When you are comfortable parsing through the txt file, push all the numbers
    // into our vector using the .emplace_back method. 
    // When you are preparing to fill your vector, remove the line of code below. 

    


    //When a vector does not have pointers inside of it, we clear the vector calling
    // the .clear() method. 
    vector.clear();

    

    return 0;
}
