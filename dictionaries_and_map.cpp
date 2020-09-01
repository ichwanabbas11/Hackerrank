#include <iostream>
#include <map>
using namespace std;
int main(){	
	map<string, unsigned int> contact;
	string name;
	unsigned int x,number;
	cin >> x;
	for (unsigned int i = 0; i < x; ++i)
	{
		cin >> name >> number;
		contact[name] = number;
	}	
	map<string, unsigned int>:: iterator it_;

	while(cin >> name)
	{		
		it_ = contact.find(name);
		if (it_ != contact.end())
		{
			cout << name << "=" << it_->second << endl;
		}
		else{
			cout << "Not found" << endl;
		}
		
	}
    return 0;
}

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>

using namespace std;
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    string name;
    long num;
    cin >> n;
    cin.ignore();
    map <string,long> pbook;
    for (int i=0;i<n;i++)
    {
        cin >> name;
        cin >> num;
        pbook[name] = num;
    }
    while(cin>>name) 
    {
        if (pbook.find(name)!=pbook.end())
            cout<<name<<"="<<pbook.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
} 