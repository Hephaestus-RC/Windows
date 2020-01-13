#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
	string defangIPaddr(string address) {
		string ret(address);
		string befor = ".";
		string after = "[.]";
		replace(ret.begin(), ret.end(),befor, after);
		return ret;
	}
};

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
	vector<int> myvector(myints, myints + 8);            // 10 20 30 30 20 10 10 20

	replace(myvector.begin(), myvector.end(), 20, 99); // 10 99 30 30 99 10 10 99

	cout << "myvector contains:";
	for (vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
		cout << " " << *it;

	cout << endl;

	return 0;
}