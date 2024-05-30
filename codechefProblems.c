String mirror - Double strings
1) Write a program in the IDE which does the following

Accepts the count of test cases - t - in the 1st line
First line of each test case consists of a string S
You need to perform the following operation
Create a variable X which contains the string S concatenated with the string S
Output X for each test case
Sample :
Input        Output
3            
ab            abab
bc            bcbc
cd            cdcd

// Solution as follows

#include <stdio.h>
#include <string.h>

#define MAX_LEN 1001 // maximum length of input string

int main() {
    int t;
    scanf("%d", &t);
    char S[MAX_LEN]; // declare a character array to store the input string
    for (int i = 0; i < t; i++) {
        scanf("%s", S); // read in the input string
        int len = strlen(S); // get the length of the input string
        char X[MAX_LEN * 2]; // declare a character array to store the concatenated string
        int j;
        for (j = 0; j < len; j++) {
            X[j] = S[j]; // copy S into X
        }
        int k;
        for (k = 0; k < len; k++) {
            X[j+k] = S[k]; // concatenate S with itself
        }
        X[j+k] = '\0'; // terminate the string
        printf("%s\n", X); // output the concatenated string
    }
    
}

2) Number mirror - Negative integer
Let us now solve some programming problems. Note that

In the IDE - the text after '//' is comments which doesn't affect the code and will give you hints about what you need to do
The Solution tab also has '//' - comments which give you helpful information
Task
Write a program in the IDE which does the following

Accepts the count of test cases - t - in the 1st line
The only line of each test case consists of an integer N
You need to generate the following output - Change the sign of N.
That is, if the input is 4, output -4. If the input is -5, output 5.
Sample :
Input       Output
5            -5
1            -1
2            -2
3            -3
-4            4
//solution
#include <stdio.h>

int main() {
    int t;
    int N;
    int i = 1;
    //accept the count of test cases given in the 1st line
    scanf("%d\n", &t);
    //run a loop to accept 't' inputs
    while (i <= t) {
        //accept 1 integer on the 1st line of each test case
        scanf("%d", &N);
        //output the negative integer - i.e. (-N)
        printf("%d\n", N * -1 );
        i = i + 1;
    }
}

3) Test cases with multiple types of input
In the previous problem, each testcase had 2 lines of input - each consisting of integers.
Test cases can also contain a combination of integers and strings.

Task
Lets write a program in the IDE which performs the following:

The 1st line of input contains t - the count of testcases.
Each testcase consists of the following 2 lines of input:
The 1st line of the testcase contains 2 integers - accept them as variables A and B.
The 2nd line of the testcase contains 1 string - accept it as a variable S.
For each test case, output on a single line the 2 integers followed by the string.
Sample :
Input        Output
2           1 2 abcde
1 2         34 567 A1B2C3 
abcde
34 567
A1B2C3

Explanation:
Test case 1:
1 2
abcde

Output for test case 1: 1 2 abcde

Test case 2:
34 567
A1B2C3

Output for test case 2: 34 567 A1B2C3
//solution
#include <stdio.h>

int main() {
    int t;
    int A, B;
    char C[30];
    int i = 1;
    scanf("%d", &t);
    while (i <= t) {
        scanf("%d %d", &A, &B);
        scanf("%s", &C);
        printf("%d %d %s ", A, B, C);
        i = i+1;
    }
}

4) Coding problem - 1
N candidates (numbered from 11 to 𝑁) join Chefs firm.
The first 5 candidates join on the first day, and then, on every subsequent day, the next 
5 candidates join in.
For example, if there are 
12 candidates, candidates numbered 
1 to 
5 will join on day 
1, candidates numbered 
6 to 
10 on day 
2 and the remaining 
2 candidates will join on day 
3. Candidate numbered 
K (𝐾≤𝑁) decided to turn down his offer and thus, Chef adjusts the position by shifting up all the higher numbered candidates.
This leads to a change in the joining day of some of the candidates.
Help Chef determine the number of candidates who will join on a different day than expected.

Input Format
First line will contain 𝑇
T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two space-separated integers 
N and 𝐾
K denoting the number of candidates and the candidate who turned down the offer.
Output Format
For each test case, output a single integer denoting the number of candidates whose joining day will be changed.
Sample 1:
Input          Output 
4               1
7 3             0
6 6             0
2 1             2
14 2

Explanation:
Test case 
1: The original joining day of each candidate is given as [1, 1, 1, 1, 1, 2, 2] but as candidate 
3 turns down his offer, the new joining days are now [1, 1, NA, 1, 1, 1, 2]. Candidate numbered 
6 is the only one to have his joining day changed.

Test case 
2: The original joining day of each candidate is given as [1, 1, 1, 1, 1, 2] but as candidate 
6 turns down his offer, the new joining days are now [1, 1, 1, 1, 1, NA]. No candidate got his joining day changed.

Test case 
3: The original joining day of each candidate is given as [1, 1] but as candidate 
1 turns down his offer, the new joining days are now [NA, 1]. No candidate got his joining day changed.

Test case 
4: The original joining day of each candidate is given as [1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3] but as candidate 
2 turns down his offer, the new joining days are now [1, NA, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3]. Candidate numbered 6 and 
11 are the only ones to have their joining days changed. 
// Solution as follows

#include <stdio.h>
#include <math.h>

int main() {
    int t, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &a, &b);
        // inside ceil division was to be done not multiplication
        printf("%d\n", (int)ceil(a/5.0) - (int)ceil(b/5.0));
    }
    return 0;
}
/* Explanation:

(int)ceil(n/5.0): Calculates the expected joining day for candidate.

(int)ceil(k/5.0): Calculates the expected joining day for candidate k.

The difference between the expected joining day and the actual joining day after adjustment gives the number of candidates 
   who will join on a different day than expected.
*/
5) Print Numbers 5 - 20
Task
You have to print numbers from 5 to 20 in separate lines using a while loop.

When using a loop you have to think about three things - initialisation, condition and update statement.
So think about what we initialise the variable with? i.e., Where does the sequence start form?
Think about what the condition will be? i.e., Till where is the sequence going?
Also think about how the variable will be updating after every iteration How the terms in the sequence are changing?
Expected Output
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20

#include <stdio.h>

int main() {
    int i = 5; // Initialization
    
    while (i<=20) {
        printf("%d\n", i);
        i = i+1; // Update statement
    }
    
    return 0;
}

6) Data Types
Lets look at some common data types found in programming problems for beginners

Integers
Integers are whole numbers that can be negative, zero or positive. Examples - 15, 0, -5
Float
A float will have a decimal place. Examples - 4.5, -2.778
Note that 4.0, -2.0 are also floats
Strings
Strings are a group of characters. Examples - abcde, CodeChef, START69
Note that C does not contain a string datatype we can declare a string using a char array.
Arrays
Arrays are used to store multiple variables or input types. 
Examples of arrays
Array containing 6 integers - [1 , 5, 7, 10, 15, 2]
Array containing 4 strings - ["abcd", "d", "ccc", "c123"]
NOTE - Array containing a combination of string and integers - ["abcd", 4, "ccc", 25] is not possible in C
Note that the strings in the array were denoted as "abcd" - we will come to this at a later stage
Bool
Bools are available under the header stdbool.h
They are used to obtain true or false output from the code
// solution 
#include <stdio.h>
#include <stdbool.h>

int main() {
    
    // Integer
    int a = -5;
    printf("%d\n", a);
   
    // Float
    float b = 4.0;
    printf("%f\n", b);
  
    // Character
    char c = 'a';
    printf("%c\n", c);

    // String, ie, character array
    char string[] = "1234abc";
    printf("%s\n", string);
  
    // Integer array 
    int array[] = {1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
        printf("%d ", array[i]);
    printf("\n");
 
    // Boolean 
    // Note: bools can be represented with the %d format specifier
    bool boolean = true;
    printf("%d\n", boolean);
  
    return 0;
}
7)Pointers - Debug this code
The code is trying to use the concept of pointers - however, it is incorrect.
Debug the code to solve this problem.
Sample :
Input     Output
5          6
#include <stdio.h>

// Function to increment a number using a pointer
void incrementByOne(int numPtr) {
    (&numPtr)++; // Increment the value pointed to by numPtr
}

int main() {
    int number;
    scanf("%d", number);

    // Call the increment function and pass the address of 'number'
    incrementByOne(&number);

    printf("%d\n", number);

    return 0;
}
///---solution as follows
#include <stdio.h>

// Function to increment a number using a pointer
void incrementByOne(int *numPtr) {
    (*numPtr)++; // Increment the value pointed to by numPtr
}

int main() {
    int number;
    scanf("%d",&number);

    // Call the increment function and pass the address of 'number'
    incrementByOne(&number);

    printf("%d\n", number);

    return 0;
}

8) Pointer Declaration and Initialization
Pointer Declaration While variables store the actual value, pointers store the addresses.
The syntax for declaring a pointer is as follows:
data_type *pointer_name;
Pointer Initialization After declaring a pointer, you typically initialize it with the memory address of another variable. 
This allows the pointer to "point" to that variable.
You can use the address-of operator (&) to obtain the memory address of a variable.

int main() {
    int num = 42;  // Declare and initialize an integer variable
    int *ptr;      // Declare a pointer to an integer
    ptr = &num;    // Initialize the pointer with the address of 'num'
    return 0;
}
Sample :
Input       Output
5 7         7 5
//solution as follows:

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp = *a;  // Store the value at address 'a' in a temporary variable 'temp'
    *a = *b;        // Set the value at address 'a' to the value at address 'b'
    *b = temp;      // Set the value at address 'b' to the value stored in 'temp'
}

int main() {
    int num1, num2;

    // Read the first number from the user and store it in 'num1'
    scanf("%d", &num1);

    // Read the second number from the user and store it in 'num2'
    scanf("%d", &num2);

    // Call the swap function with the addresses of 'num1' and 'num2'
    swap(&num1, &num2);

    // Print the swapped numbers
    printf("%d %d\n", num1, num2);

    return 0;
}

9) Function within a function
In C, you can call functions within other functions. These functions can call other functions at any level of nesting or independently.

Check the sample code given below:

#include <stdio.h>

// Function to calculate the square of a number
int square(int a) {
    return a * a;
}

// Function to calcuate (a + b) ^ 2
int aPlusBSquare(int a, int b) {
    // Calling square() function from this function
    return square(a) + 2 * a * b + square(b);
}

int main() {
    int result = aPlusBSquare(1, 2);

    printf("Result: %d\n", result);
}

// Output
// Result: 9
Task
You are given a code in the IDE. Complete the aMinusBSquare function by calling the square function inside it.

The formula for finding 
(𝑎−𝑏)2=𝑎2−2𝑎𝑏+𝑏2
//solution as follows
#include <stdio.h>

// Function to calculate the square of a number
int square(int a) {
    return a * a;
}

// Function to calcuate (a - b) ^ 2
int aMinusBSquare(int a, int b) {
    // Update your code here
    return square(a)-2*a*b+square(b);
    
}

int main() {
    int result = aMinusBSquare(2, 1);
    printf("Result: %d\n", result);
}

10) Coding problem -
The last challenge of the while loop.
Chef wants to write a code which checks if a given number is prime.
You are given an integer N
You need to output 'Yes' or 'No' depending on whether the number is prime or not.
Sample 1:
Input          Output
14635           No
Sample 2:
Input          Output
13               Yes
#include <stdio.h>

int main() {
    // Solution as follows
    int N;
    scanf("%d", &N);
    int isPrime = 1;  // Assume N is prime
    if (N < 2)
        isPrime = 0;  // N is not a prime number
    else {
        int i = 2;
        while (i * i <= N) {
            // Update your code below this line
            if(N % i == 0) {
                isPrime=0;
            }
            i++;
        }
    }
    if (isPrime)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
