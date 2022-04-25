#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#define DICT_LEN 3
#define MAX_TRIES 6

int main(){
    string dictionary[] = {"space", "wheel", "program"};
    srand(time(NULL));
    // 랜덤 단어
    string prob = dictionary[rand()%DICT_LEN];
    int length = prob.length();
    int tries = 0;
    // 맞춘 것
    string answer(length, '-');

    cout << "current state : " << answer << endl;
    // 단어 수가 맞을 때까지, 주어진 기회 전까지 시행
    while (tries < MAX_TRIES && answer != prob){
        char c;
        cout << "guess a letter : ";
        cin >> c;
        
        // 맞춘 문자를 다시 쓸 경우
        if(answer.find(c) != string::npos){
            cout << c << " is guessed previously. \n";
            continue;
        }
        
        // 쓴 문자가 있는지 확인
        int pos = prob.find(c);

        // 쓴 문자가 없는 경우
        if(pos == string::npos){
            cout << c << " is not in the target string. \n";
            tries++;
            continue;
        }
        
        // 맞춘 문자가 단어에 여러 개 있을 경우
        do {
            answer[pos] = c;
            pos = prob.find(c, pos +1);
        } while (pos != string::npos);
        
        // 현재 맞춘 문자 표시
        cout << "current state : " << answer << endl;
        
        // 답이 맞았을 경우
        if(answer == prob) {
            cout << "you WON!!\n";
            break;
        }
    }
    // 기회를 다 썼을 경우
    if (tries >= MAX_TRIES){
        cout << "You lost : the answer was " << prob << endl;
    }
} 