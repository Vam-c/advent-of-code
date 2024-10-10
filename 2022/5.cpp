#include <iostream>
#include <vector>
#include <regex>
using namespace std;

string input = R"END(    [S] [C]         [Z]            
[F] [J] [P]         [T]     [N]    
[G] [H] [G] [Q]     [G]     [D]    
[V] [V] [D] [G] [F] [D]     [V]    
[R] [B] [F] [N] [N] [Q] [L] [S]    
[J] [M] [M] [P] [H] [V] [B] [B] [D]
[L] [P] [H] [D] [L] [F] [D] [J] [L]
[D] [T] [V] [M] [J] [N] [F] [M] [G]
 1   2   3   4   5   6   7   8   9 

move 3 from 4 to 6
move 1 from 5 to 8
move 3 from 7 to 3
move 4 from 5 to 7
move 1 from 7 to 8
move 3 from 9 to 4
move 2 from 8 to 2
move 4 from 4 to 5
move 2 from 5 to 1
move 2 from 5 to 6
move 7 from 8 to 1
move 9 from 3 to 9
move 11 from 6 to 5
move 2 from 6 to 7
move 12 from 1 to 4
move 10 from 2 to 9
move 2 from 3 to 9
move 1 from 7 to 5
move 4 from 7 to 6
move 2 from 6 to 1
move 5 from 1 to 6
move 10 from 9 to 1
move 9 from 9 to 8
move 13 from 4 to 3
move 7 from 6 to 2
move 2 from 8 to 5
move 9 from 3 to 9
move 8 from 9 to 8
move 4 from 8 to 4
move 1 from 7 to 5
move 3 from 9 to 1
move 7 from 2 to 1
move 1 from 3 to 1
move 1 from 3 to 6
move 1 from 6 to 1
move 2 from 3 to 6
move 5 from 4 to 1
move 1 from 6 to 1
move 3 from 8 to 7
move 8 from 8 to 4
move 3 from 5 to 4
move 1 from 6 to 7
move 1 from 5 to 8
move 4 from 5 to 2
move 7 from 5 to 8
move 3 from 2 to 7
move 7 from 4 to 8
move 11 from 8 to 4
move 15 from 4 to 1
move 25 from 1 to 6
move 4 from 8 to 7
move 1 from 2 to 4
move 11 from 6 to 4
move 12 from 6 to 3
move 1 from 1 to 9
move 1 from 9 to 8
move 16 from 1 to 3
move 1 from 8 to 7
move 12 from 4 to 6
move 9 from 6 to 5
move 3 from 6 to 5
move 6 from 7 to 5
move 3 from 3 to 5
move 2 from 6 to 3
move 11 from 5 to 8
move 2 from 8 to 3
move 2 from 1 to 4
move 7 from 3 to 1
move 2 from 4 to 6
move 2 from 6 to 2
move 5 from 7 to 3
move 1 from 1 to 6
move 1 from 1 to 8
move 2 from 2 to 5
move 1 from 7 to 4
move 1 from 1 to 2
move 10 from 3 to 5
move 11 from 3 to 6
move 1 from 4 to 9
move 1 from 9 to 4
move 1 from 4 to 2
move 2 from 5 to 9
move 2 from 2 to 8
move 2 from 1 to 6
move 2 from 1 to 2
move 2 from 3 to 6
move 3 from 8 to 1
move 3 from 1 to 4
move 7 from 8 to 3
move 2 from 9 to 5
move 2 from 4 to 9
move 7 from 5 to 6
move 2 from 8 to 6
move 1 from 4 to 8
move 2 from 2 to 4
move 21 from 6 to 3
move 10 from 5 to 7
move 7 from 7 to 6
move 1 from 9 to 3
move 1 from 4 to 9
move 1 from 9 to 4
move 1 from 8 to 4
move 8 from 6 to 4
move 1 from 4 to 5
move 1 from 5 to 8
move 4 from 3 to 6
move 1 from 8 to 2
move 1 from 4 to 2
move 2 from 7 to 3
move 2 from 2 to 7
move 22 from 3 to 5
move 4 from 6 to 2
move 2 from 6 to 9
move 7 from 3 to 9
move 6 from 9 to 1
move 18 from 5 to 3
move 2 from 5 to 4
move 20 from 3 to 5
move 3 from 7 to 3
move 5 from 1 to 2
move 11 from 5 to 7
move 1 from 1 to 7
move 3 from 9 to 3
move 16 from 5 to 8
move 7 from 8 to 7
move 1 from 9 to 2
move 8 from 2 to 3
move 2 from 2 to 4
move 3 from 3 to 1
move 9 from 3 to 8
move 1 from 6 to 3
move 9 from 7 to 3
move 3 from 1 to 8
move 1 from 7 to 9
move 1 from 9 to 4
move 1 from 7 to 5
move 10 from 4 to 5
move 2 from 4 to 2
move 19 from 8 to 5
move 1 from 8 to 3
move 4 from 3 to 5
move 2 from 4 to 8
move 4 from 7 to 8
move 4 from 3 to 9
move 4 from 7 to 6
move 2 from 2 to 5
move 2 from 3 to 2
move 6 from 8 to 7
move 1 from 8 to 4
move 2 from 6 to 4
move 3 from 4 to 8
move 3 from 9 to 2
move 4 from 7 to 8
move 28 from 5 to 8
move 16 from 8 to 4
move 11 from 8 to 4
move 3 from 3 to 4
move 7 from 5 to 8
move 13 from 8 to 7
move 1 from 5 to 6
move 1 from 6 to 7
move 1 from 9 to 2
move 2 from 6 to 2
move 12 from 4 to 9
move 4 from 4 to 1
move 2 from 9 to 8
move 4 from 8 to 3
move 3 from 4 to 5
move 4 from 4 to 1
move 4 from 4 to 7
move 3 from 7 to 9
move 5 from 9 to 7
move 7 from 2 to 3
move 1 from 5 to 7
move 8 from 1 to 5
move 1 from 2 to 4
move 11 from 3 to 1
move 10 from 5 to 3
move 3 from 9 to 1
move 3 from 9 to 6
move 5 from 1 to 6
move 7 from 6 to 9
move 8 from 9 to 7
move 9 from 3 to 4
move 1 from 6 to 9
move 8 from 7 to 1
move 9 from 4 to 2
move 2 from 1 to 6
move 3 from 2 to 6
move 4 from 4 to 6
move 2 from 9 to 8
move 2 from 1 to 2
move 1 from 3 to 8
move 2 from 8 to 4
move 1 from 6 to 8
move 11 from 1 to 6
move 1 from 1 to 5
move 3 from 2 to 9
move 2 from 9 to 3
move 1 from 1 to 7
move 2 from 4 to 9
move 4 from 2 to 9
move 2 from 8 to 5
move 10 from 6 to 1
move 2 from 5 to 6
move 5 from 9 to 8
move 5 from 8 to 7
move 1 from 2 to 1
move 7 from 1 to 2
move 2 from 9 to 4
move 1 from 3 to 5
move 15 from 7 to 2
move 8 from 6 to 3
move 2 from 4 to 3
move 2 from 6 to 4
move 4 from 7 to 1
move 4 from 7 to 5
move 1 from 6 to 4
move 3 from 1 to 7
move 5 from 7 to 6
move 4 from 7 to 5
move 18 from 2 to 4
move 5 from 6 to 4
move 4 from 1 to 2
move 8 from 3 to 8
move 2 from 8 to 4
move 2 from 3 to 7
move 1 from 5 to 7
move 3 from 8 to 4
move 2 from 7 to 2
move 1 from 3 to 8
move 9 from 2 to 6
move 2 from 8 to 6
move 1 from 7 to 3
move 1 from 3 to 5
move 3 from 6 to 8
move 1 from 8 to 5
move 1 from 5 to 9
move 1 from 1 to 2
move 5 from 4 to 6
move 10 from 6 to 2
move 5 from 2 to 6
move 5 from 6 to 4
move 1 from 6 to 3
move 6 from 4 to 6
move 3 from 2 to 6
move 2 from 2 to 3
move 11 from 4 to 6
move 1 from 9 to 5
move 4 from 6 to 7
move 1 from 4 to 3
move 12 from 4 to 3
move 1 from 8 to 6
move 9 from 5 to 7
move 1 from 5 to 2
move 1 from 8 to 5
move 1 from 4 to 9
move 9 from 7 to 9
move 1 from 3 to 4
move 2 from 3 to 6
move 2 from 5 to 6
move 2 from 8 to 5
move 11 from 3 to 4
move 2 from 3 to 1
move 1 from 2 to 3
move 1 from 3 to 8
move 3 from 7 to 9
move 5 from 4 to 2
move 2 from 5 to 8
move 6 from 4 to 2
move 1 from 1 to 3
move 12 from 9 to 1
move 6 from 1 to 6
move 1 from 8 to 4
move 1 from 8 to 3
move 5 from 2 to 7
move 2 from 3 to 9
move 5 from 7 to 1
move 1 from 7 to 5
move 2 from 9 to 1
move 14 from 1 to 7
move 2 from 4 to 7
move 7 from 2 to 4
move 1 from 2 to 1
move 1 from 1 to 3
move 1 from 5 to 4
move 1 from 9 to 6
move 16 from 6 to 5
move 2 from 5 to 4
move 12 from 6 to 8
move 10 from 4 to 8
move 9 from 7 to 3
move 4 from 7 to 6
move 11 from 5 to 8
move 2 from 5 to 2
move 14 from 8 to 9
move 1 from 5 to 1
move 3 from 9 to 4
move 2 from 2 to 1
move 7 from 8 to 3
move 6 from 3 to 5
move 8 from 9 to 8
move 1 from 6 to 1
move 1 from 4 to 2
move 4 from 3 to 8
move 1 from 7 to 2
move 3 from 1 to 5
move 2 from 5 to 7
move 3 from 9 to 2
move 1 from 1 to 8
move 5 from 5 to 4
move 2 from 7 to 8
move 4 from 2 to 5
move 1 from 2 to 4
move 2 from 7 to 8
move 4 from 6 to 2
move 6 from 5 to 3
move 1 from 6 to 5
move 1 from 5 to 3
move 1 from 3 to 8
move 8 from 8 to 3
move 9 from 8 to 5
move 9 from 8 to 2
move 2 from 8 to 9
move 2 from 3 to 8
move 5 from 5 to 8
move 1 from 3 to 7
move 2 from 9 to 5
move 7 from 2 to 4
move 14 from 4 to 6
move 2 from 2 to 7
move 1 from 7 to 3
move 1 from 7 to 9
move 3 from 5 to 2
move 1 from 7 to 1
move 3 from 2 to 4
move 7 from 8 to 2
move 3 from 6 to 1
move 17 from 3 to 1
move 2 from 8 to 3
move 6 from 2 to 7
move 2 from 7 to 9
move 3 from 6 to 8
move 2 from 8 to 6
move 4 from 2 to 1
move 3 from 4 to 7
move 1 from 8 to 7
move 1 from 8 to 9
move 1 from 4 to 2
move 3 from 5 to 7
move 2 from 3 to 1
move 2 from 3 to 5
move 5 from 7 to 4
move 5 from 7 to 3
move 1 from 4 to 8
move 3 from 3 to 1
move 6 from 1 to 3
move 1 from 7 to 5
move 2 from 9 to 2
move 3 from 5 to 8
move 1 from 8 to 1
move 8 from 3 to 5
move 1 from 4 to 9
move 3 from 6 to 5
move 3 from 6 to 3
move 2 from 3 to 7
move 1 from 4 to 7
move 3 from 6 to 4
move 2 from 7 to 2
move 1 from 7 to 8
move 2 from 5 to 4
move 1 from 6 to 1
move 7 from 4 to 7
move 7 from 5 to 2
move 10 from 2 to 3
move 3 from 2 to 6
move 3 from 8 to 1
move 1 from 8 to 7
move 2 from 6 to 3
move 1 from 6 to 9
move 4 from 7 to 5
move 16 from 1 to 5
move 1 from 9 to 7
move 3 from 7 to 6
move 11 from 5 to 6
move 2 from 7 to 9
move 12 from 6 to 4
move 2 from 6 to 9
move 6 from 3 to 2
move 1 from 5 to 7
move 5 from 9 to 5
move 1 from 9 to 6
move 4 from 3 to 7
move 1 from 4 to 2
move 7 from 2 to 5
move 3 from 5 to 2
move 6 from 5 to 6
move 3 from 2 to 6
move 9 from 6 to 8
move 5 from 5 to 9
move 5 from 7 to 1
move 4 from 1 to 9
move 2 from 9 to 4
move 1 from 6 to 7
move 9 from 4 to 1
move 7 from 5 to 9
move 18 from 1 to 3
move 9 from 9 to 5
move 8 from 8 to 2
move 1 from 2 to 5
move 4 from 2 to 3
move 4 from 9 to 6
move 1 from 4 to 8
move 2 from 5 to 7
move 2 from 9 to 2
move 10 from 3 to 9
move 5 from 5 to 9
move 1 from 7 to 2
move 2 from 8 to 7
move 2 from 3 to 5
move 2 from 9 to 1
move 2 from 7 to 3
move 1 from 2 to 1
move 5 from 5 to 8
move 1 from 2 to 1
move 15 from 3 to 6
move 1 from 7 to 6
move 10 from 6 to 5
move 1 from 7 to 8
move 4 from 1 to 6
move 1 from 8 to 3
move 2 from 1 to 5
move 3 from 8 to 1
move 1 from 4 to 6
move 1 from 4 to 2
move 4 from 9 to 7
move 6 from 5 to 7
move 3 from 1 to 9
move 10 from 6 to 8
move 2 from 1 to 3
move 8 from 7 to 9
move 1 from 9 to 6
move 2 from 7 to 9
move 3 from 3 to 5
move 1 from 2 to 6
move 2 from 6 to 5
move 5 from 9 to 4
move 4 from 8 to 2
move 1 from 1 to 3
move 4 from 5 to 9
move 3 from 6 to 1
move 2 from 1 to 5
move 3 from 5 to 2
move 8 from 8 to 3
move 11 from 9 to 4
move 13 from 4 to 8
move 2 from 9 to 2
move 2 from 3 to 1
move 1 from 4 to 1
move 1 from 3 to 8
move 2 from 6 to 9
move 7 from 8 to 1
move 3 from 2 to 5
move 7 from 2 to 5
move 3 from 4 to 6
move 4 from 9 to 2
move 2 from 3 to 5
move 9 from 5 to 6
move 5 from 2 to 7
move 2 from 9 to 2
move 2 from 9 to 7
move 12 from 6 to 8
move 5 from 5 to 7
move 1 from 9 to 8
move 3 from 1 to 6
move 5 from 5 to 8
move 6 from 1 to 9
move 2 from 1 to 5
move 1 from 6 to 9
move 5 from 9 to 7
move 2 from 5 to 8
move 11 from 7 to 6
move 20 from 8 to 1
move 2 from 9 to 8
move 4 from 7 to 6
move 6 from 8 to 3
move 13 from 6 to 9
move 4 from 3 to 2
move 4 from 6 to 3
move 2 from 3 to 6
move 5 from 9 to 8
move 2 from 7 to 1
move 2 from 6 to 9
move 6 from 8 to 3
move 6 from 3 to 6
move 5 from 2 to 9
move 22 from 1 to 3
move 3 from 2 to 1
move 5 from 9 to 3
move 1 from 1 to 6
move 3 from 6 to 2
move 1 from 2 to 4
move 33 from 3 to 5
move 1 from 8 to 7

)END";

int main() {
    int index = 1;
    int lengthOfLine = 0;
    
    
    // Find length of line. This is used to 
    // calculate number of stacks.
    while(input[++lengthOfLine] != '\n');
    lengthOfLine++;
    
    // Intialize stacks with empty vectors.
    vector<vector<char>> stacks;   
    for(int i = 0; i < lengthOfLine/4; i++) {
        vector<char> stack = {};
        stacks.insert(stacks.begin(), stack);
    }
    
    while(input[index] != '1') {
        // If current character is ' ', skip 4 characters.
        // this will take the pointer to next stack.
        if(input[index] == ' ') {
            index += 4;
            continue;
        }
        
        // Extract crate and store it in appropriate stack.
        char crate = input[index];
        int stackNumber = (index % lengthOfLine) / 4; 
        stacks[stackNumber].insert(stacks[stackNumber].begin(), crate);
        
        index += 4;
    }
    
    // Go to the beginning of procedure steps.
    while(input[++index] != 'm');
    
    int startIndex = index;
    int endIndex = index;
    
    while(input[startIndex] != '\n') {
        
        // Extract one instruction.
        while(input[++endIndex] != '\n');
        string instruction = input.substr(startIndex, endIndex++ - startIndex);
        startIndex = endIndex;
        
        // Extract three numeric sections.
        regex regexp("(\\d+)[\\D ]+(\\d+)[\\D ]+(\\d+)");
        smatch numbers;
        
        regex_search(instruction, numbers, regexp);
        int numberOfCrates = stoi(numbers[1]);
        int fromStack = stoi(numbers[2]);
        int toStack = stoi(numbers[3]);
        
        // Perform the rearrangement procedure.
        // It is to be performed as many times as the numberOfCrates.
        for(int i = 0; i < numberOfCrates; i++) {
            // Extract top crate.
            char crate = stacks[fromStack - 1].back();
            
            // pop the crate. We use 1-indexing. 
            stacks[fromStack - 1].pop_back();
            
            // push it onto the new stack. 1-indexed again.
            stacks[toStack - 1].push_back(crate);

        }

        // -------------------Part two---------------------------
        // // Perform the rearrangement procedure.
        // // Now, the number of crates should be removed continuously,
        // // pushing the latest crate first.
        // vector<char> tempCrates;
        // for(int i = 0; i < numberOfCrates; i++) {
        //     // Extract top crate.
        //     char crate = stacks[fromStack - 1].back();
            
        //     // pop the crate. We use 1-indexing. 
        //     stacks[fromStack - 1].pop_back();
            
        //     tempCrates.push_back(crate);
        // }
        
        // // Push each crate to new stack.
        // while(tempCrates.size() != 0) {
        //     // Extract top crate from tempCrates.
        //     char crate = tempCrates.back();
        //     tempCrates.pop_back();
            
        //     // push it onto the new stack. 1-indexed again.
        //     stacks[toStack - 1].push_back(crate);
        // } 
    }
    
    // Print the top crate of each stack. 
    for(int i = 0; i<stacks.size(); i++) {
        cout<<stacks[i].back();
    }
    return 0;
}
