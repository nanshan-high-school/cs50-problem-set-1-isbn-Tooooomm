#include <iostream>
using namespace std;
int main(){
    int save = 0, div2 = 1000000000, count = 9, time = 0, check;
    long long div = 10000000000, isbn;
    do{
        cout << "請輸入欲檢查之ISBN碼：";
        cin >> isbn;
        if(isbn > 9999999999 or isbn < 1000000000){
            cout << "輸入錯誤。請重新輸入。\n";
        }
        else{
            while(count > 0){
                if(time < 9){
                    time++;
                    save = save + (isbn % div / div2) * time;
                    div /= 10;
                    div2 /= 10;
                    count--;
                }
            }
            check = isbn % 10;
            if(check == save % 11){
                cout << "您的ISBN碼符合規定。";
            }
            else{
                cout << "您的ISBN碼不符合規定。該碼應為：" << (isbn - isbn % 10) / 10;
                if(save % 11 == 10){
                    cout << "X。";
                }
                else{
                    cout << save % 11 << "。";
                }
            }
        }
    } while(isbn > 9999999999 or isbn < 1000000000);
}
// 恩恩看不懂沒關係喔我其實也有點看不懂我在寫三
