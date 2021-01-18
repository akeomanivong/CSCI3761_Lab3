*******************************************************
*  Name      :  Asia Keomanivong
*  Student ID:  105202557
*  Class     :  CSCI 3761           
*  HW#       :  Lab 3
*  Due Date  :  May 10th, 2019
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program creates a minimum spanning tree that simulates
a LAN network with link-layer switches (bridges). It will
read in a file (I used input.txt for my testing) and build
an adjancency matrix out of it.  Using the matrix, it will
then create a minimum spanning tree, outputting the tree,
the time it took to calculate it and the minimum cost.

*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Everything is done in the main program.  This is the
   driver program that prompts the user to input a file
   name (again, input.txt is the name of the test file
   used) and then creates the MST. Uses a stopwatch
   algorithm to measure the time it takes to calculate.
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully.  
   
   The program was developed and tested on Clion.  It was 
   compiled, run, and tested on gcc csegrid.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [Lab3_Keomanivong]

   Now you should see a directory named homework with the files:
        main.cpp
        Makefile
        README.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [Lab3_Keomanivong] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[guess]

4. Delete the obj files, executables, and core dump by
   %./make clean
