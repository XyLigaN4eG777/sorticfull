#include "sortic.h"

long itc_len(string str) {
    int i = 0;
    while (str[i] != '\0'){
        i += 1;
    }
    return i;
}

long long itc_abs(long long num){
    if (num >= 0) return num;
    return -num;
}

double itc_pow(long long num, long long n){
    if (n == 0) return 1;
    long long res = num;
    for (int i=1; i < itc_abs(n); i++){
        res *= num;
    }
    if (n >= 0) return res;
    return 1.0 / res;
}

void ra(vector <int> &mass) {
    if (mass.size() != 0){
        vector <int> mass2(mass.size());
        mass2[mass2.size() - 1] = mass[0];
        for (int i = 0; i < mass.size() - 1; i++)
            mass2[i] = mass[i + 1];
        mass = mass2;
    }
}

void pa(vector <int> &a, vector <int> &b) {
    int num = b[0];
    vector <int> newB;
    for (int i = 1; i < b.size(); i++) newB.push_back(b[i]); // 3
    b = newB;
    a.push_back(num);
    ra(a);
}


void pb(vector <int> &a, vector <int> &b) {
    int num = a[0];
    vector <int> newa;
    for (int i = 1; i < a.size(); i++) newa.push_back(a[i]);
    a = newa;
    b.push_back(num);
    ra(b);
}
int trans(string s) {
    int num = 0;
    for (int i = 0; i < itc_len(s); i++) {
        num += (int(s[i]) - 48) * itc_pow(10, itc_len(s) - i - 1);
    }
    return num;
}
void print(vector <int> &a, vector <int> &b, string f)
{
    for (int i = 0; i < 100; i++) cout << "~";
    cout << endl << f << endl;
    cout << "a:" << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << endl;
    cout << "b:" << endl;
    for (int i = 0; i < b.size(); i++)
        cout << b[i] << endl;
}
