#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> m;
	vector<int> result(2, -1);

	for (int k = 0; k < nums.size(); k++) {

		int another = target - nums[k];

		if (m.count(another) > 0) {
			result[0] = m[another];
			result[1] = k;
			return result;
		}
		m[nums[k]] = k;
	}

	return result;
}