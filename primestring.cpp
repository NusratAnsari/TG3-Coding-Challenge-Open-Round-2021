#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
int main()
{
	int ns,odd=0,even=0;
	string str;
	cin>>ns;
	for(int i=0;i<ns;i++){
		cin>>str;
		char chr[str.length() + 1];
        strcpy(chr, str.c_str());
        int k = 0;

        for (char c : chr) {
            if (k % 2 == 0) even += c;
            else odd += c;
            k += 1;
        }
        int diff = labs(odd - even);
        if (diff % 3 == 0 || diff % 5 == 0 || diff % 7 == 0) 
            cout << "Prime String" << endl;
        else cout << "Casual String" << endl;
	}
}
