# Connect-Four

This ReadMe file explains how to build and run the code for connect four. Afterwards the rules will be explained. 

# Build and run the program 
Clone the repository to your own directory using:
git clone https://github.com/dscheeren622/Connect-Four 

Open the directory with Visual Studio Code (this has not been tested for other IDE’s)

At the top with “Select CMakeLists.txt” choose 
${workspaceFolder}/Connect-Four/CMakeLists.txt

Build the project
If a warning: “#pragma once in main file pops up”, this can be ignored.

Set the Connect-Four/Executable/CMakeLists.txt as executable and run the program.
To run the unit tests, you can either set the executable to “Tests” or run the tests in the testing tab

# Playing the game
When the game is started, you should get the figure shown below. 
In this game, O means that the position on the field is empty and a disc can still be put there. R means that a red disc is present and likewise Y is a yellow disc. 

  
You as the player are playing as red and should get four R’s in a row. The opponent is a randomized CPU that puts a yellow disc in one of the positions each round and wins if there are four Y’s in a row. 
 
If you put in an invalid integer, the game assigns a random value between 1 and 7, so make sure not to use an invalid input, or it might lose you the game!
The game ends when any player has obtained four of their discs in a row, or when the maximum number of rounds has passed and the field is full of discs without having four of the same color in a row. 

