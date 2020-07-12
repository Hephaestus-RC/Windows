class Solution {
public:
	bool canMakeArithmeticProgression(vector<int>& arr) {
		if (arr.size() == 0 || arr.size() == 1) return true;
		sort(arr.begin(), arr.end());
		int gap = arr[1] - arr[0];
		for (int i = 2; i < arr.size(); ++i)
			if (arr[i] - arr[i - 1] != gap)
				return false;
		return true;
	}
};