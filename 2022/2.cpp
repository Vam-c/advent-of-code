#include<iostream>
#include<vector>

using namespace std;

int main() {
    string input = R"END(A Y
B Y
B Z
B Z
B X
B Z
C Y
A Z
C X
C X
B Z
B Z
B Z
A X
B Z
B Z
A Y
B Z
A Z
B X
B Z
A X
A X
B Z
A Y
A Z
B Z
A Y
A Z
B Z
A Z
B Z
B Z
C Y
B Z
B Z
A X
C X
B Z
A X
B Z
C X
A X
B Z
A X
A X
C X
B Z
B Z
B Z
C Y
C Y
A X
B Z
C X
B Z
A X
A Y
B Z
B Z
B Z
B Z
B Z
B X
B Z
B Z
B Z
B X
A X
A X
B Z
A Y
C Y
C Y
A Y
A X
B Z
A Y
A Z
A X
A X
A Y
C Y
B Z
B Z
C X
B Z
A Y
A X
B Z
B Z
A X
A X
A X
B Z
A Y
B Z
A Z
C Y
B Z
B Z
B Z
C Y
A Y
C Y
B Z
A X
B Z
A X
B Z
C Y
B Z
B Z
B Z
C X
B Z
A X
B Z
B Z
B Z
A X
A X
B X
C Y
B Z
B Z
B Z
A X
B Z
A X
B Z
A X
A Z
A X
B Z
A X
C Y
A X
B Z
A X
C Y
B Z
B Z
A X
A X
B Z
C Y
B Y
B Z
B Z
B Z
B X
B Z
B Z
B Z
A X
B Z
C Y
C Y
A Z
A X
B Z
B Z
B Y
B Z
B Z
C Y
B Z
B Y
B Z
C Y
B Z
B Z
C X
C X
C X
B Z
A Z
A X
C Y
A Z
B Z
B Z
B Z
B Z
A X
A X
B Z
B Z
A Z
A X
A X
B Z
C Y
A X
A Z
A Y
A Y
A X
B Z
A X
A Z
B Z
C X
B Z
C X
C Y
B Z
B Z
B Z
B Z
B Z
C Y
A X
C Y
A X
B Y
B Y
A X
A X
B Z
B Z
C X
A Z
C Y
A X
A X
A Y
A X
A X
B Z
A Z
B Z
B Z
B Z
A Z
A X
B Z
B Z
C Y
B Z
B Z
B Z
A X
A X
B Z
B Z
B Z
B Z
B Z
B Z
A X
C X
A X
A X
C Y
A X
B Z
C Y
B Z
B Z
B Z
A X
B Z
C Y
B Z
A X
A X
B Z
A X
A X
B Z
A Z
B X
A X
A X
B Z
C Y
A Y
A X
C X
B Z
A X
B Z
B Z
A X
B Z
A Z
C Y
B Z
B Z
A X
A X
B X
A X
B Z
B Z
C X
A X
C X
A X
B Z
B Z
A X
A Z
B Z
B X
A X
A Y
B Z
B Z
B Z
C X
C Y
B Z
B Z
C Z
B X
C Y
C Z
B Z
B Z
A X
B Z
C X
B Z
B Z
A Z
A X
C X
B Z
B Z
A X
C Y
A X
B X
C Z
B Z
B Z
A X
B Z
A Y
B Z
B Z
A X
B Z
C Y
C Y
A X
C Y
C X
C X
A X
B Z
C Y
B Z
C X
B Z
A Z
B Z
A Z
B X
B Z
A Z
A X
B Z
B Z
B Z
A X
A X
A X
B Z
A X
B Z
B X
A Y
B Z
A X
B Z
B Z
B Z
A X
B Z
C X
A Y
A X
A Z
C Y
C Y
A X
C Y
B Z
A X
B Z
C Y
B X
A Z
B Z
B Z
B X
B Z
B Z
B Z
A Y
A Y
C Y
A Z
A X
B Z
B Z
A X
A X
A X
B Z
A X
B Z
B Y
A X
A X
A X
B Z
B Z
B Z
C Y
A X
A X
A X
A X
A X
A X
C Y
A Z
C X
B Z
B Z
C Z
A X
A X
B Z
A X
B X
B Z
B Z
C X
B Z
A Z
A X
B Z
A Z
B Z
B Y
A X
C Y
A X
B Z
B Z
B Z
A Z
C Y
C Z
A X
B Z
B Z
B X
A X
B Z
A X
B Z
B Z
C Z
B Z
A X
C Y
C X
A Z
C X
A X
A X
A X
B Z
B Y
C Y
B Z
B Z
C Y
B Z
A X
B Z
A Z
A X
B Z
A Y
A X
A X
B X
B Z
B Z
B Z
B Z
C Z
B Y
A X
A X
B Z
B Z
B Z
C Z
B Z
B Z
A Y
A Z
B Z
A X
C Y
B Z
A Z
C Z
B Z
C X
B Z
B Z
A X
B Z
A X
B Z
C Y
A X
B Z
A Z
B Z
C Y
A X
C X
A X
A X
B Z
B Z
B X
B Z
C X
C Y
A Z
B Z
C Y
B Z
C Y
B Y
A Y
B Z
A X
B Z
A Z
B Z
A X
C X
B Z
B X
C Y
A Z
A X
B Z
B Z
B Z
A Z
C Y
C Y
B Z
A Y
A X
A X
A Y
C Y
A Y
B Z
B Z
B Z
A Z
B Z
A Z
B Z
A X
A Z
B Z
C Y
B Z
A X
A X
A X
A Z
A Z
B Z
C Y
B Z
A X
B Z
B Z
A Z
B Z
B Z
A X
B Z
B Z
B X
A X
B Z
B Z
A Z
A X
B X
A X
B Z
A X
B Z
A X
B Z
C Y
B Z
C Z
C X
B Z
B Z
B Z
C Y
C X
B Z
B Z
B Z
B Z
A Y
A Y
C Y
A X
C X
B X
A X
C X
A Y
B X
A X
A Z
B Z
B X
B Y
B Z
B Z
B X
B Z
C Y
B Z
A X
A X
A X
B Z
A X
B Z
A X
B Z
B Z
B Z
B Z
A X
C Y
A X
B Z
B Z
B Z
A X
B Z
B Z
C Z
A X
A Z
B Z
C Y
B Z
B Z
B Z
B Z
A Z
B Z
B Z
B Z
C Y
A X
B X
C Y
A X
C Z
B Z
C Y
C Y
B Z
A X
B Z
C Z
A X
A Z
B Z
A Z
B Z
B X
B Z
A Z
B Z
C Y
C Z
B Z
A X
B Z
A X
A X
B Z
B Z
B Z
B Z
A X
A Z
A X
B X
B Z
A Y
A Y
B Z
A X
B Z
B Z
A Y
C X
B Z
B Z
B Z
C X
B Z
C X
A X
B Z
C Y
A X
A X
A X
C Z
A X
A X
A Y
B Z
B Z
B Z
B Z
B Z
C X
C Y
B Z
B Z
C X
B Z
B Z
B Z
C Y
C Y
A Z
A X
B Z
A X
B X
B Z
B Z
C Y
B Z
A X
B X
A Z
A Z
B Z
A X
C X
A X
B Z
B Z
B Z
A X
A Z
C X
B Z
A X
A Z
A Z
A Z
A Z
C Y
B X
B X
C Z
B X
C Z
A X
A Y
B Z
B X
A Y
A Z
B X
A X
A X
C Z
A Z
B Z
C X
B Z
B Z
C X
B Z
C X
A X
A Y
A X
B Z
A X
B Z
C Y
B Z
B Z
B Z
B Z
B Z
B Z
B Z
B Z
B Z
A X
B Z
A X
B Z
A Y
B Z
A X
A Z
B Z
C Y
A Z
A X
A Z
C X
B Z
B Z
B Z
A X
C X
C Y
B Z
A Z
A Z
C X
B Z
C Y
A Z
A Z
A Y
B Z
A Z
B Z
B Y
C Y
B Z
B Z
A Z
A X
B Z
C Y
B Z
B Z
B Z
B Z
B Z
A X
C Y
B X
C X
B Z
A Z
B Z
A X
B Z
B Z
A X
C Y
A X
A X
A X
C X
A X
A X
B Z
A Y
A X
B Z
C X
A X
C Z
A X
B Z
C X
A X
A X
A X
B Z
C X
B Z
B Z
A X
A X
A X
A X
B Z
A X
A X
B Z
B X
A Y
A X
C X
A X
C X
A X
B Z
B Z
B Z
B Z
B Z
A X
A X
B X
C Y
A Y
C X
C X
C X
B Z
B Z
B X
B Z
B Z
C X
B Z
B Z
A X
B Z
B Z
B X
A X
A X
C Y
C X
A X
C Y
A Y
C X
B Z
A X
A Z
B Z
B Z
B X
B Z
B Z
B Z
C Y
B X
A X
B Z
A X
B Z
A X
A Z
A Y
C Y
B Z
C Y
A Z
A Z
B Z
A X
A X
C Y
C Y
A X
B Z
A X
C X
C Z
A X
A Y
A X
A X
A X
B Z
B Z
B Z
C Y
B Z
B Z
C Z
A X
B Z
B Z
A X
A X
B Z
B Z
B Z
A Y
B X
A Z
A Z
B Z
A X
B Z
B Y
A Y
A X
C Y
A Z
B Z
C X
C X
A X
B Z
A X
A X
A Z
B Z
A Z
A Z
B Z
B Z
A Y
B Z
C Y
C X
B Z
A X
A X
B Z
B Z
A X
A X
C Y
B Z
A Z
A X
B Z
C Y
B Z
A X
A X
B X
A X
B Z
C Y
B Z
A Y
B Z
B Z
B Z
B X
A X
B Z
C Y
B Z
B Z
B Z
A Z
C Y
C Y
C Y
A X
A Z
A X
B Z
A X
B Z
A X
C Y
B Z
B Z
A X
B Z
A X
A X
B Z
B Z
A X
A X
C X
B Z
A Y
A X
A X
B Z
C Y
C X
C X
B Y
A Z
B Z
A Z
A X
B Z
C Y
B Z
A X
A Z
B Z
A X
A Y
A X
B Z
B Z
B Y
B Z
A X
B Z
B Z
B Z
C Y
A X
B Z
B Z
A X
A X
A X
B Z
A Y
B Z
A Z
A X
B Z
C X
B Z
A X
A Z
A Z
B Z
A X
B Z
B Z
B Z
B Z
C Y
A Y
A Z
A X
A Y
B Z
B Z
B Z
C Y
C Y
B Z
A Y
A Z
A X
B Z
A Z
B Z
A X
C Y
B Z
B Z
B Z
B Z
B Z
C X
A Z
B Z
A Z
B Z
A X
B Z
A X
A Y
B Z
B X
B Z
A Y
B Z
A Z
B Z
B Z
A X
A Z
A Z
B X
B Z
A X
B X
A X
A Z
A X
C X
B Z
C X
A X
C X
A X
A X
A Z
A Z
B Z
A Z
B X
B Z
B Z
A X
B Z
B Z
A X
B Z
B Z
B Z
B Z
B Z
C X
A X
C Y
B Z
B Z
A Y
B X
B Z
A Z
B Z
B Z
C Y
B Z
A X
A Z
B Z
A Z
B Z
B Z
A X
B Z
A Z
A Z
A Z
C X
A Z
B Z
C Y
B Z
A Z
B Z
A X
A X
A X
A Z
A X
B Z
B Z
B Z
B Z
A Y
A X
C Y
C Z
B Z
A Z
A X
B Z
B X
B Z
A X
B Z
B Z
C Y
A X
B Z
B Z
C X
C X
B Z
B Y
A Y
A X
C Y
A X
A X
B Z
B Z
B Z
B Z
A Z
C X
A X
A X
A X
A X
A Y
A Z
A Y
A Y
B Z
A X
A Y
A X
A Z
A Z
A X
B Z
B Z
C Y
A X
B Z
C Y
B Z
B Z
A X
B Z
B X
A X
B Z
A Y
A Y
B X
B Z
B Z
C X
A X
B Z
A X
B X
B Z
A X
B Z
A X
B X
A X
A X
C X
A X
A X
B Z
A X
A X
A Y
B Z
B Z
C Y
B Z
A X
B Z
B Z
A Z
A X
B Z
A Y
B Z
C Y
A Z
A X
A Y
C Y
A X
A Y
C X
B Z
A X
A Y
A X
B Z
A Z
B Z
B Z
C Y
A X
C Y
A Z
B Z
B Z
A X
A X
B X
B Z
C Y
B Z
B Y
A X
B Z
A X
C X
B Z
A Y
A X
B Z
C Y
A Z
B Z
A X
A X
A Y
A Z
C X
B Z
B Z
B Z
A Z
B Z
C Y
B Z
B Z
B Z
B Z
B X
B Z
A X
B Z
B Z
A X
C X
C Y
B Z
B Z
A X
B Z
A X
A X
A Y
B Z
A Z
B Z
C Y
B Z
A X
A Y
C Y
B Y
A Y
A X
C Y
A X
A Z
A X
B Z
A Z
B Z
A X
B Z
C Y
A X
B Z
B X
B Z
A X
A X
A X
B Z
A Z
A Z
B Z
A X
B Z
B Z
A X
A X
B Z
B Z
A X
B Z
B X
B Z
C Y
A Z
B X
A X
B Z
B Z
A X
B Z
A X
B Z
B X
B X
A X
B Z
B Z
B Z
B Z
A Y
B Z
B Z
A X
C X
B Z
B Z
B Z
B Z
B Z
A X
C X
A Y
A X
A X
B Z
C Y
C X
B Z
A X
A Y
B Z
A X
B Z
C Y
B Z
A X
B Z
A Y
B X
A X
B Z
A X
B Z
A X
B Z
A X
C X
C X
A X
B Z
A Y
B Z
B Z
A X
A X
B Z
B Z
B Z
A X
A X
A X
C Y
A Y
B Z
B Z
B Z
B Z
A X
A X
B Z
B Z
C Y
A X
A X
B Z
A X
A Y
A X
B Z
B Z
B Z
A X
B Z
A X
B Z
A X
A X
B Z
A Y
A Z
B Y
A X
A Z
B Z
B Z
A Z
A X
A X
B Z
A X
B Z
A X
C X
A Z
A X
B Z
B Z
A X
A Z
C X
B Z
B Z
A X
B Z
B Z
A X
B Z
B Z
B Z
A Y
A Z
B Z
B Z
A X
B Z
B Z
B X
C X
B Z
B Z
B Z
A X
A X
A Z
B Z
C X
B Y
A Y
B Z
B Z
A X
A X
A Z
B Z
B Z
B Z
A X
A Z
A X
B Z
B Z
A Z
B Z
A Y
A Z
C Y
B Z
B Z
B Z
B Z
A Z
A Z
A Y
B Z
A X
A X
B Z
A Z
B Z
B Z
B X
C Y
B Z
C Y
B Z
A X
C Z
B Z
A X
A X
B Z
A Z
A X
B Z
A Z
A X
C Z
C X
B Z
B Z
B Z
B Z
B Z
C Y
A X
B Z
C Y
A X
B Z
B Z
A Z
A Z
B Z
C Y
A X
C X
B Z
B Z
B Z
B Z
A X
B Z
A X
B Z
A Y
B Z
B Z
B Z
B Z
B Z
C Y
B Z
B Z
A X
A X
A X
A Z
B Z
A Y
C Z
A Z
B Z
B Z
B Z
A X
B X
C Y
C X
C Y
B Z
B Z
B Z
B Z
A Y
B Z
A X
C X
A X
B X
C X
B Z
B Z
A X
A X
C Y
C Y
A X
B Z
C Y
A Y
A Z
A Y
B Z
B Z
B Z
A Y
B Z
A Z
A X
B Z
C X
A Z
B Z
A X
C X
A X
C Y
B X
B Z
B Z
A X
C Y
A X
B Z
C X
A Z
A Y
B Z
A Z
B Z
B Z
B Z
B Z
A X
A X
B Z
A Z
C Y
A Y
A X
A X
B Z
C Z
B Z
A Z
B X
C X
B Z
B Z
A X
A Z
A X
A Z
A X
B Z
B Z
C Y
B Z
B Z
B Z
B Z
A Z
B Z
B X
B Z
B Z
B Z
B Z
C X
C X
A X
B Z
B Z
B Z
B Z
B Z
B Z
A X
C X
B Z
B Z
A Y
B Z
A X
C Y
B Z
C Y
B Z
A Y
B Z
B Z
B Z
A X
A X
A X
B Z
C Y
B Z
A Z
A Y
A Z
A Y
B Z
A X
B X
B Z
A X
B Z
A Y
A X
B Z
A X
A X
A Y
A Y
A X
A X
A X
B Z
B Z
B Z
A X
B Z
A X
B Z
A X
B Y
B Y
A X
B Z
C X
A Z
C Y
A X
B Z
B Z
B Z
C Y
B X
C Y
B Z
B Z
B Z
A Z
B Z
B Z
B Z
C Y
B Z
B Z
A X
A Z
A Y
C Y
B Z
B Z
A X
B Z
B Z
A X
A X
B Z
B Y
B Z
B Z
A Z
B Z
B Z
A X
B Z
A X
C X
C X
A X
C Y
B Z
B Z
B Z
A X
C Y
B Z
B Z
B Z
B Z
B Z
B Z
B Z
B Z
B Z
B Z
C Y
C X
B Z
B Z
B Z
C Y
A Y
C Y
A X
B X
B Z
A X
C X
B Z
A Z
C X
C X
B Z
B Z
A Z
B Z
B X
B Z
B Z
B Z
A X
C X
B Z
A X
C Y
B Z
B Z
C X
B X
A X
B Z
C X
C X
B Z
B X
A X
B Z
A Y
B Z
A Z
A X
B Z
A X
A X
B Z
B Z
A X
B Z
A X
A X
C Y
B Z
A X
C Y
B Z
B Z
A X
A Y
C Y
B Z
A X
B Z
A X
A X
B Z
B Z
C Y
B Z
A X
A X
A X
A X
A Z
B Z
B Z
C X
C X
B Z
B Z
C Y
B Z
A Y
B Z
A X
C X
A Z
B Z
B Z
B Z
C Y
A X
B Z
B Z
C Y
B Z
C Y
B Z
A Z
B Z
A X
B Z
C Y
C Y
A X
A X
A Z
B Z
C Y
C Y
A X
B Z
B Z
A X
B Z
B Z
B Z
B Z
B X
B Y
A X
B Z
B Z
B Z
C Y
A X
A Y
B Z
A Z
A Z
B X
A X
C Y
B Z
B Z
A Z
B Z
C X
C X
A Z
B Z
A X
B Z
A X
B Z
B Z
B X
A X
A Z
B X
A X
B Z
A X
A X
A Z
A Y
B Z
A Y
C Y
C X
B Z
B Z
A X
A X
B Z
B Z
B Z
A Z
C X
A X
B Z
B Z
A X
B Z
B Z
B Z
A X
A Z
B Z
A X
B Z
A X
B Z
B Z
A X
C Y
A X
C X
A Z
B X
A Y
A Y
B Z
B Z
B Z
A X
A X
A X
A Y
B Z
B Z
B Z
B Z
B Z
B Z
B Z
B Z
C Y
B Z
B Z
B Z
C Y
A X
A Z
B Z
C Y
B Z
A Z
A X
B Z
A Y
B Z
B Z
A Z
B Z
A X
A Z
A Z
B Z
B Z
B Z
B Z
A X
A Z
B Z
B Z
B Z
B Z
A Z
B Z
C X
B Z
B Y
A X
B Z
B Z
A X
B Z
A X
A X
A X
A X
B X
B Z
C X
B Z
B Z
B Z
A X
B Z
C X
B Z
A Z
A X
A X
B Z
B Z
B Z
B Z
C X
A X
B Z
B Z
C Y
B Z
C Y
B Z
B Z
A X
B Z
A X
A Y
B Z
A Z
B Z
B Z
A Y
B Z
B Z
C Y
A X
A X
A X
A X
B Z
B Z
A Y
B Z
A Z
A X
A X
B Z
A Y
B Z
B Z
B X
A Y
A X
A X
C Y
C X
A X
B Z
B Z
B Z
A Y
B Z
C X
C X
C X
B Z
B Z
B Z
B Z
B Z
A X
B Z
A Y
B Z
A Y
C X
B X
B Z
B Z
A X
B X
B Z
B Z
B Z
B Z
B Z
A X
B Z
C X
B X
A X
A X
A X
A X
A X
B Z
C X
C Y
A X
B Z
C X
A Z
B Z
B Z
C Y
A X
A Z
B Z
B Z
B Z
B Z
B Z
B Z
A X
A X
B X
A X
B Z
A X
B Z
B Z
A Z
B Z
B Z
B Z
B Z
C X
B Z
A Z
B Z
B Z
A Z
A X
C X
B X
C X
A X
B Z
A Z
B X
B X
A Z
B Z
B Z
B X
B Z
B Z
C X
A Y
A X
A Z
B Z
A X
B Z
B Z
B Z
B Z
A X
A X
C Y
B Z
B Z
B Z
A Z
C X
C Y
B Y
B Z
B Z
A X
C Y
A Z
B Z
B Z
B Z
B Z
B Z
C X
B Z
A X
C X
A X
A Z
C Y
C X
B Z
B Z
A Y
A Z
A Z
A X
A Z
A Z
C Y
B Z
B Z
B Z
B Z
A Z
A X
A Y
C X
A X
B Z
B Z
B Z
A X
B Z
B Z
A Z
B Z
A X
B Z
A X
A Y
B Z
A X
A Z
B Z
A X
B Z
C X
B Z
B Z
C X
A Y
B Z
A Z
C X
C Z
C X
B Z
B Z
B Z
A X
B Z
C X
A X
A Y
A X
A Z
C Y
A X
B Z
B Z
C Z
A X
B Z
B Z
A X
A Z
B Z
A Y
B Z
C X
A X
A X
B Z
B Z
B Z
B X
C X
B Z
B Z
A X
A X
A Z
B Z
B Z
A Z
C Y
C Z
B Z
A X
A X
A X
C Y
A X
A X
A X
A Z
B Z
A Y
B Z
C X
B Z
A X
C X
B Z
A Y
A X
B Z
B Z
B Z
A X
A Y
B Z
A X
B Z
B Z
B Z
B Z
A X
A X
B Z
C X
B X
A Z
B Z
B Z
B Z
B Z
B Z
)END";
    int score = 0;
    int startIndex = 0;
    int difference = 0;
    int roundScore = 0;
    while(startIndex < input.length()) {
        // Extract round.
        string game = input.substr(startIndex, 3);
        
        // game[0] contains the move played by opponent, game[2] is my move. 
        // X % X -> 0 
        // Y % X -> 1
        // Z % X -> 2 
        
        // Translate game[0] to XYZ.
        switch(game[0]) {
            case 'A': game[0] = 'X'; break;
            case 'B': game[0] = 'Y'; break;
            case 'C': game[0] = 'Z'; break;
        } 
        
        // ----------------Part One-----------------
        // Compute First hand - Second hand.
        // Difference = -1 or 2 -> second hand wins.
        // Difference = 1 or -2 -> first hand wins.
        // Difference = 0 -> draw.
        // difference = game[0] - game[2];
        
        // if(difference == -1 || difference == 2)
        //     roundScore = 6;
        // else if(difference == 1 || difference == -2)
        //     roundScore = 0;
        // else
        //     roundScore = 3;
            
        // score += (game[2] % 'W') + roundScore;
        
        // ----------------Part Two-----------------
        // game[2] denotes the outcome of the round.
        if(game[2] == 'X')
            // We should lose, i.e. opponent + 2 symbol.
            // The game has only 3 moves which rotate.
            score += ((game[0] % 'X' + 2) % 3 + 1) + 0;
            
        else if(game[2] == 'Y')
            // We should draw, i.e. same move as opponent. 
            score += game[0] % 'W' + 3;
            
        else
            // We should win, i.e. opponent + 1 symbol.
            score += ((game[0] % 'X' + 1) % 3 + 1) + 6;
            
        
        startIndex += 4;
    }
    cout<<score; 
    return 0;
}