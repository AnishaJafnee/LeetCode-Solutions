class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double fah=(celsius * 9/5) + 32;
        double kel=celsius+273.15;
        vector<double> ans;
        ans.push_back(kel);
        ans.push_back(fah);
        return ans;
    }
};