class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        unordered_set<int> one, two, three;
        
        for (int x : nums) {
            one.insert(x);
            
            vector<int> a(one.begin(), one.end());
            for (int y : a)
                two.insert(y ^ x);

            vector<int> b(two.begin(), two.end());
            for (int y : b)
                three.insert(y ^ x);
        }

        return three.size();
    }
};