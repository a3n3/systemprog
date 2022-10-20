#include <iostream>
using namespace std;

void count_char(std::string str){

    int count;
    int x=1;
    char ch;
    for(int i = 0; i < str.size(); i++){
        count = 1;
        for(int j = i+1; j < str.size(); j++){
            if(str[i]==str[j] && str[i] != ' '){
                count++;
                str[j] = '1';
            }
        }
        if(count > x && str[i] != '1'){
            x = count;
            ch = str[i];
        }
    }
    cout << "'"<<ch << "' occurs " << x << " times in the string"<< endl;
}

int main(){
    std::string str ;
    cout << "Write a string: ";
    
    getline(cin, str);
    count_char(str);
}
