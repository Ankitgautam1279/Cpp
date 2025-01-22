#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<cstdlib>
#include<fstream>
using namespace std;

vector<string> loadword(){
    vector<string> words;
    string line;
    ifstream fn("word_list.txt");
    while(getline(fn,line)){
        if(line.length()>0)
            words.push_back(line);
    }
    return words;
}

string choose_word(){
    vector<string> word_list = loadword();
    srand(time(0));
    int random_index = rand()%word_list.size();
    return word_list[random_index];
}
bool display_word(string word,const vector<char> &guessed_letter){
    bool win_status = true;
    for(char c:word){
        if(find(guessed_letter.begin(), guessed_letter.end(), c)!= guessed_letter.end()){
            cout<<c<<" ";
        }
            
        else{
            cout<<" _ ";
            win_status = false;
        }
    }
    cout<<endl;
    return win_status;
}

int main(){

    string word_to_guess = choose_word();
    bool win_status = false;
    int lives = 3;
    vector <char> guessed_letter;
   
   cout<<"Welcome to hangman"<<endl;

   while (lives >0)
   {
    cout<<"Remaining Lives : "<<lives<<endl;
    win_status = display_word(word_to_guess, guessed_letter);

    if(win_status){
        cout<<"Congratulation ! You won \t"<<word_to_guess<<endl;
        break;
    }
    char guess;
    cout<<"Guess a letter ";
    cin>>guess;
    guessed_letter.push_back(guess);

    if(word_to_guess.find(guess) != string::npos){
        cout<<"Correct guess ! "<<endl;
    }
    else{
        cout<<"Incorrect guess"<<endl;
        lives--;
    }
   }
   if(lives ==0){
    cout<<"You Lost!, The word was : "<<word_to_guess<<endl;
   }

   return 0;
}