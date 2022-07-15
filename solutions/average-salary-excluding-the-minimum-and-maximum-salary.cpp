//AVERAGE SALARY EXCLUDING THE MINIMUM AND MAXIMUM SALARY -> 04/19/2022 18:31
//https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/
class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        int i,size=salary.size(), c=0;
        double s;
        for(i=1; i<size-1; i++) {
            s+=salary[i];
            c++;
        }
        return s/c;
    }
};
