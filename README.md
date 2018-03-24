# Programming-L1

Mentorship Repository for Programming Type = Level 1
> [www.twoleaps.com](www.twoleaps.com)

## Repository Navigation Guide
* Mentee needs to fork this repository.
* Mentor needs to join as a contributor.

This template is designed to assist Twoleaps mentorship program. The template consists of two 
major sections: Goals and Progress tracker. Mentors and mentee should add goals prior to start of 
mentorship. Goals should be such that both party agree on. Progress tracker is to be updated on week
by week basis with new tasks to complete the defined goals. For each week, a folder in the repository
has to be maintained which captures the work done. It can be a small essay of things learned or written
code etc.

## Providing Feedback

Regular feedback is highly encouraged. Feedbacks should inspire improvement. Mentors should summarize week by week progress in form of feedback whenever possible and add it to the weekly work folder in form of *week1/feedback.md*

## Timeline

<Add mentorship timeline here in weeks. Example: 8 weeks starting 1st February>


## Goals
The objectives of the mentorship should be listed down here. They can be customized over time by the mentor
or the mentee's preferences.

## Path

### Phase 1
- [x] Basics and first program 
    - [x] A bit about computers and C++ 
    - [x] Printing your first program
    - [x] Breaking down the first program
    - [x] Basic Arithmetic
    - [x] Basic decision making
    
### Phase 2
- [ ] Essentials for writing program
    - [x] Data types
    - [x] Logical Operators
    - [x] Control structures
    - [x] Using if .. else 
    - [ ] Using do .. while
    - [ ] Using Switch statement

### Phase 3 
- [ ] Writing Functions  
    - [ ] Introducing functions()
        - [ ] Defining Functions
        - [ ] Function Prototypes
        - [ ] Function Call Stack
        - [ ] Inline Functions
        - [ ] Function Templates
    - [ ] Math Functions
    - [ ] C++ Headers
    - [ ] Recursion
 
### Phase 4
- [ ] Array String and struct
   - [x] Arrays
   - [x] String
   - [ ] Struct
   
### Phase 5
- [ ] Introducing Pointers
    - [ ] Declare and Initialize
    - [ ] Pass by Reference
    - [ ] Relation b/w Array and pointers
    - [ ] Function Pointers
    
### Phase 6
- [ ] Classes in c++
    - [ ] What is a class?
    - [ ] Defining your first class
    - [ ] Defining Data Members and Member functions
    - [ ] Using Constructors
    - [ ] Using *get* and *set*
    - [ ] Interface and Implementation seperation
    
### Phase 7
- [ ] Standard Template Library (STL)
    - [ ] Introducing STL
        - [ ] What is  STL?
        - [ ] Containers
        - [ ] Iterators
    - [ ] Sequence Containers
        - [ ] vector
        - [ ] list
    - [ ] Associative Containers
        - [ ] set
        - [ ] map
    - [ ] Container Adapters
        - [ ] stack
        - [ ] queue
        - [ ] priority queue
    
 ### Phase 8
 - [ ] Data Structure Implementation
    - [ ] Implementing Singly Linked List
    - [ ] Implementing Doubly Linked List 
    - [ ] Implementing a stack
    - [ ] Implementing a queue
    - [ ] Implementing a binary tree
    - [ ] Implementing a Graph
    
## Progress Tracking

### Week 1
  - [x] Install linux on laptop
  - [x] Install C++ compiler on linux. ( if ubuntu use this [link](https://www.cyberciti.biz/faq/howto-compile-and-run-c-cplusplus-code-in-linux/) )
  - [x] Learn git and github
    - [x] Practice on [trygit](https://try.github.io/levels/1/challenges/1)
  - [x] Write first [Hello world](https://www.programiz.com/cpp-programming/examples/print-sentence) program in C++ and upload to Github.
  
### Week 2
  - [x] Things to learn
    - [x] Type of variables in C++.
    - [x] Using 'for' loop.
    - [x] Using 'if' statements.
  - [x] Programs to write.
    - [x] Write a program which takes two numbers from a user X and Y and prints sum, substraction, multiplication and division of those values.
    - [x] Write a program which takes one number X from user and prints all numbers from 0 to X. Example X=5 then, output= 1, 2, 3, 4, 5
    - [x] Write a program which takes one number X from user and print factorial of X. 
    - [x] Write a program which takes one number X from user and print reverse of X. Example X = 21 then, output = 12.
    - [ ] Write a program which asks user to enter his name N and prints all the vowels in the name. Example N=aditya, output = a i a
    - [x] Write a program which takes one number X from user and print "MAGIC" if the number is a multiple of 100. Means if i enter 100, 200, ... 100000 output should be "MAGIC".

### Week 3
  - [x] Things to learn
    - [x] Arrays
    - [x] Strings
  - [x] Programs to write
    - [x] WAP(Write a program) which takes a number N followed by N numbers entered by the user. Print all the numbers in reverse order. Example: I- 5 21 23 24 25 26 O- 26 25 24 23 21
    - [x] WAP which takes a number N followed by marks of N students and tells the highest and lowest marks. Example: I- 3 99 66 22 O- 99 22
    - [x] WAP which takes a number N followed by N names and prints all names starting with a vowel.
  - [ ] Other tasks
    - [ ] Make an account on codechef.com and try to solve 2 problems.
    - [ ] Make account on stackoverflow.com and follow c++ topic.
    - [ ] http://www.codeconquest.com/what-is-coding/how-does-coding-work/
    - [ ] https://cs.stackexchange.com/questions/47410/how-is-a-program-executed-at-the-cpu-level
    - [ ] https://www.freelancer.com/community/articles/how-c-works-understanding-compilation

### Week 4
  - [ ] Things to learn
    - [ ] Functions (https://www.programiz.com/cpp-programming/function)
    - [ ] Multi-dimension array
    - [ ] Sorting data
    - [ ] Searching data
  - [ ] Program to write
    - [ ] WAP to which takes a number N followed by N entries of name, age, company. Provide a way to user to search using any of the parameters and return all the rows that match the query. 
    ```
    Example Input:
    Enter N
    5
    Enter data
    anil 21 google
    rahul 23 facebook
    sachin 34 google
    abhi 19 amazon
    ayush 24 amazon
    
    Start search
    company google
    
    Output:
    anil 21 google
    sachin 24 google
    ```
    - [ ] WAP to take a number N and (a) print a matrix NxN with all 0, (b) print matrix with lower half triangle as 1.
    ```
    Example Input:
    3
    
    Output
    0 0 0
    0 0 0
    0 0 0
    
    1 0 0
    1 1 0
    1 1 1
    ```
    
    - [ ] WAP to enter N numbers and print them in ascending and descending order.
    ```
    Input: 
    5
    5 4 6 7 3
    
    Output:
    3 4 5 6 7
    7 6 5 4 3
    ```
    - [ ] WAP which contains a function isPrime(int n). Use this function to print all prime numbers from 1 to 1000
    - [ ] WAP which takes a date in the format DD-MM-YYYY and print how many days have passed from 01-01-YYYY.
    ```
    Input:
    10-01-2011
    Output:
    10
    
    Input:
    10-02-2011
    
    Output:
    31 + 10 = 41
    
    Take care of leap years and days in february.
    ```
    
