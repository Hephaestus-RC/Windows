#if 0
class Solution {
public:
	vector<int> replaceElements(vector<int>& arr) {
		int max = arr[arr.size()-1];
		arr[arr.size() - 1] = -1;
		for (int i = arr.size() - 2; i >= 0; --i)
		{
			if (arr[i] > max)
				swap(arr[i], max);
			else
				arr[i] = max;
		}
		return arr;
	}
};
#endif