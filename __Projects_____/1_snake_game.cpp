#include<iostream>
using namespace std;
bool gameOver;
const int width = 20; //width of playing area
const int height = 20; //length of playing area
int x, y, fruitX, fruitY, score, i;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;
void setup(){
    gameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}
void draw(){
    system("clear");
    for(i = 0; i< width; i++)
        cout<<"#";
    cout <<endl;

    for(i = 0; i<height; i++)
    {
        for (int j = 0; j<width+2; j++)
        {
            if(j == 0)
                cout<< "#";
            else
                cout<<" ";

            if(j == width-1)
                cout<<"#";
        }
        cout<<endl; 
    }

    for(i = 0; i< width+2; i++)
        cout<<"#";
    cout <<endl;

}
void input(){

}
void logic(){

}
int main(){
    setup();
    while(!gameOver){
        draw();
        input();
        logic();
        //sleep(10); sleep(10);

    }
    return 0;
}