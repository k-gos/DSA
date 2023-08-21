class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        for(int i=0;i<timePoints.size();i++)
        {
            string ch=timePoints[i];
            int totalminutes=stoi(ch.substr(0,2))*60+stoi(ch.substr(3,2));
            minutes.push_back(totalminutes);
        }
         sort(minutes.begin(), minutes.end());
        int mini=INT_MAX;
        for(int i=0;i<minutes.size()-1;i++)
        {
            int diff=minutes[i+1]-minutes[i];
            mini=min(diff,mini);
        }
        int lastcomp=(minutes[0]+1440)-minutes[timePoints.size()-1];
        return min(mini,lastcomp);
    }
};