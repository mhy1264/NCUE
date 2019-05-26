#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    while (cin >> a >> b >> c){
        bool found = false;
        if (a>0) a=1;
        if (b>0) b=1;
        if ((a&b) == c) {
            cout << "AND" <<endl;
            found = true;
        }
        if ((a|b) == c) {
            cout << "OR" <<endl;
            found = true;
        }
        if ((a^b) == c) {
            cout << "XOR" <<endl;
            found = true;
        }
        if (!found) {//­YAND OR XOR³£¨S¦³
            cout << "IMPOSSIBLE" <<endl;
        }
    }
}
