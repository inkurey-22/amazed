# A-MAZE-D

A-maze-d is an EPITECH project from the CPE-2 unit. laby_gen.pl gives you a text file that has to be parsed in order to create a graph representing a maze. In the file given by laby_gen, you can find a number of robots. Those robots have to go from #start to #end, going through different rooms linked to each others. The goal of the project is to make the robots reach their goal as fast as possible by finding the quickest path and making as much robot go through the maze as possible, knowing that a room can only contain ONE and only ONE robot.

## Contributors

This project has been made by 3 people :

- [Yanis Monte](https://github.com/YanisMonte)
- [Martin Bonte](https://github.com/MartinB-E)
- And me ([Théophile Riffé](https://github.com/inkurey-22))

## Steps

- **Parsing**: Analyzing the text file.
- **Graph creation**: With the information given by the parsing, creating an orientated graph.
                      An orientated graph means that room A is linked to room B but the opposite isn't true.
- **The "Walk"**: Making the robot go through the maze, following the orientated graph passed as argument
- **Optimization**: Making the program run as smoothly as possible in order to be quick with **BIG** test files
- **Error handling**: Finalizing error handling to avoid crashes if the test file isn't valid

## Requirements

- Makefile and GCC: Make sure you have GCC and Makefile installed in order to compile the program

## Installation

1. Clone the repository:
    ```
    git clone https://github.com/inkurey-22/epitech-amazed.git
    ```
   Or download it as zip

    
2. Compile the source code using make:
    ```
    make
    ```
    
3. Create the maze:
    ```
    chmod +x laby_gen.pl
    ./laby_gen.pl [int x][int y][int z] > maze.txt
    ```
    - x: the number of rooms
    - y: the number of pipes going from a room to others
    - z: the number of robots

4. Run the executable:
    ```
    ./amazed < maze.txt
    ```

## Disclaimer

a-maze-d is a project developed for educational purposes and is not affiliated with or endorsed by any entity mentioned.
