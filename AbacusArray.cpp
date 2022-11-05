#include <iostream>
using namespace std;

int array_max_and_min() {
    //Sets variables for the function to use
    int arrayZero[10], i, min, max;


    //Informs the user what function is being called
    cout << "Calling Function: array_max_and_min()" << endl;


    //User enters 10 int values and program puts them into an array
    for (i = 0; i < 10; i++) {
        cout << "Please enter number " << i + 1 << " of 10 numbers: ";
        cin >> arrayZero[i];
    }


    //Program determines min and max of array
    min = arrayZero[0];
    for (i = 0; i < 10; i++) {
        if (min > arrayZero[i]) {
            min = arrayZero[i];
        }
    }
    max = arrayZero[0];
    for (i = 0; i < 10; i++) {
        if (max < arrayZero[i]) {
            max = arrayZero[i];
        }
    }


    //Program prints all numbers to screen, and then the min and max values
    for (i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << " is: " << arrayZero[i] << endl;
    }
    cout << "The minimum number is: " << min << endl;
    cout << "The maximum number is: " << max << endl;
    return 0;
}

int array_product_sum() {
    //Sets variable and arrays for the function to use
    int arrayOne[10], arrayTwo[10], arrayThree[10], arrayFour[10], i;


    //Informs the user what function is being called
    cout << "Calling Function: array_product_and_sum()" << endl;


    //User enters 20 int values and program puts the first half into the first array and the second half into the second array
    for (i = 0; i < 10; i++) {
        cout << "Please enter number " << i + 1 << " of 20 numbers: ";
        cin >> arrayOne[i];
    }
    for (i = 0; i < 10; i++) {
        cout << "Please enter number " << i + 11 << " of 20 numbers: ";
        cin >> arrayTwo[i];
    }


    //Program adds each corresponding number in the first 2 arrays and puts the sum in the 3rd array
    for (i = 0; i < 10; i++) {
        arrayThree[i] = arrayOne[i] + arrayTwo[i];
    }


    //Program multiplies each corresponding number in the first 2 arrays and puts the product in the 4th array
    for (i = 0; i < 10; i++) {
        arrayFour[i] = arrayOne[i] * arrayTwo[i];
    }


    //Prints the numbers in 1st array
    cout << "The first array has the following numbers: " << endl;
    for (i = 0; i < 10; i++) {
        cout << arrayOne[i] << endl;
    }


    //Prints the numbers in 2nd array
    cout << "The second array has the following numbers: " << endl;
    for (i = 0; i < 10; i++) {
        cout << arrayTwo[i] << endl;
    }


    //Prints the numbers in 3rd array
    cout << "The sum array has the following numbers: " << endl;
    for (i = 0; i < 10; i++) {
        cout << arrayThree[i] << endl;
    }

    
    //Prints the numbers in 4th array
    cout << "The product array has the following numbers: " << endl;
    for (i = 0; i < 10; i++) {
        cout << arrayFour[i] << endl;
    }
    
    return 0;
}

int main() {
    array_max_and_min();
    array_product_sum();
}
