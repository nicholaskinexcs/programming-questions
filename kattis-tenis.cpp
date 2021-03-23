/*
After Borko’s second plan of taking over the village fell through (because Mirko’s brother Stanko drank all the water), 
young Zvonko decided to relax with sports. For this purpose he stocked up on carrot juice and peanuts, and dived onto 
the couch, ready to watch the next tennis match on television.

While the two players are warming up, their statistics pop up on the screen. Zvonko noticed that the match history of 
the players contained invalid results. He had a brilliant idea where you write him a program that checks the validity 
of results, which he will then sell to the record keepers and enjoy a leisurely life.

A tennis match consists of sets, each set consisting of games. The following rules apply:

A player wins a set if he has 6 or more games and at least two games more than his opponent.

Additionally, if the result is 6:6 in the first or second set (but not the third set), a single final game is 
played to determine the winner of the set (the tie-break game).

The match ends when either player has won 2 sets. That player is the winner.

A match result is valid if a match could have been played by the above rules and ended in the result. Additionally, 
if one of the players is Roger Federer (designated as “federer” in the input), then a result in which he has lost 
a set can’t be valid (Zvonko knows Federer is from outer space).

Write a program that checks the validity of all matches between two players.

Input
The first line of input contains the names of the two players separated by a single space. Both names will be strings 
of at most 20 lowercase letters of the English alphabet. The names will be different. The second line contains an 
integer 𝑁 (1≤𝑁≤50), how many matches the two players have played.

Each of the following 𝑁 lines contains the result of a single match, composed of the results of a number of sets 
separated by single spaces. Each match result will contain between 1 and 5 sets. A set is given in the format “𝐴:𝐵”, 
where 𝐴 and 𝐵 are games won by each player. These numbers are integers between 0 and 99 (inclusive).
*/

/*
sampras agassi
6
6:2 6:4
3:6 7:5 2:6
6:5 7:4
7:6 7:6
6:2 3:6
6:2 1:6 6:8

da
da
ne
da
ne
da
*/

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;


bool isValid(string line){
    vector <string> tokens;
    
    return true;
}

int main() {
    string a,b,_;
    vector<string> output;
    int n;
    cin >> a;
    cin >> b;
    getline(cin,_);
    cin >> n;
    while (n){
        string line;
        getline(cin,line);
        if (isValid(line)){
            output.push_back("da");
        } else {
            output.push_back("ne");
        }
        n -= 1;
    }
    for (int i = 0; i < output.size(); i ++){
        cout << output[i] << '\n';
    }
}
