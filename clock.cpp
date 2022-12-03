#include <iostream>

using namespace std;

int main()
{
    int h, m, s;
    cout << "輸入24小時制的時/分/秒" << endl;
    cout << "時: ";
    cin >> h;
    while(h < 0 || h > 23){
        cout << "輸入錯誤，請重新輸入24小時制的時: ";
        cin >> h;
    }
   
    cout << "分: ";
    cin >> m;
    while(m < 0 || m > 59){
        cout << "輸入錯誤，請重新輸入24小時制的分: ";
        cin >> m;
    }
   
    cout << "秒: ";
    cin >> s;
    while(s < 0 || s > 59){
        cout << "輸入錯誤，請重新輸入24小時制的秒: ";
        cin >> s;
    }
    // cout << "初始時間" << h << ":" << m << ":" << s << endl;
   
    //開始計時
    int t = 0;
    while(true){
            for(int a = h ; a < 24;a++){
                for(int b = m; b < 60;b++){
                    for(int c = s; c < 60;c++){
                        t = 0;
                        while(t < 199999999){
                            t++;
                        }
                        cout << a <<":" << b << ":" << c << endl;
                       
                    }
                    s = 0;
                }
                m =0;
            }
            h = 0;
    }
   
   
    return 0;
}
