#include "sortic.h"

int main()
{
    string p;
    getline(cin, p);
    p = p + " ";
    int l = itc_len(p);
    int i = 0;
    string pus = "";
    string g;
    g = p[i];
    vector <string> a_string;
    while(i != l){
        g = p[i];
        if((g == "1") || (g == "2") || (g == "3") || (g == "4") || (g == "5") || (g == "6") || (g == "7") || (g == "8") || (g == "9") || (g == "0"))
        {
            pus += g;
            i++;
        }
        else{
            a_string.push_back(pus);
            pus = "";
            i++;

        }
    }
    vector <int> a;
    for (int i = 0; i < a_string.size(); i++)
    {
        string j = a_string[i];
        int k = trans(j);
        a.push_back(k);
    }
    vector <int> b;
    string f = "start";
    print(a, b, f);
    int c;
    int z;
    int n = 0;
    while(a.size() != 1){
        while(c != a.size())
        {
            ra(a);
            f = "ra";
            print(a, b, f);
            z = a[n];
            c = 0;
            for (int k = 0; k < a.size(); k++)
            {
                if(z >= a[k])
                    c += 1;
            }

        }
        pb(a, b);
        int pop = b.size() - 1;
        while(pop > 0)
        {
            ra(a);
            pop -= 1;
        }
        f = "pb";
        print(a, b, f);}
    while(b.size() != 0)
    {
        while(c != b.size())
        {
            ra(b);
            f = "rb";
            print(a, b, f);
            z = b[n];
            c = 0;
            for (int k = 0; k < b.size(); k++)
            {
                if(z <= b[k])
                    c += 1;
            }

        }
        pa(a, b);
        int pop = a.size() - 1;
        while(pop > 0)
        {
            ra(a);
            pop -= 1;
        }
        f = "pa";
        print(a, b, f);}

    return 0;
    }
