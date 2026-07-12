class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        string hr="";
        string min="";
        string sec="";
        string sec2="";
        string hr2="";
        string min2="";
        hr.push_back(startTime[0]);
        hr.push_back(startTime[1]);
        min.push_back(startTime[3]);
        min.push_back(startTime[4]);
        sec.push_back(startTime[6]);
        sec.push_back(startTime[7]);

        hr2.push_back(endTime[0]);
        hr2.push_back(endTime[1]);
        min2.push_back(endTime[3]);
        min2.push_back(endTime[4]);
        sec2.push_back(endTime[6]);
        sec2.push_back(endTime[7]);
      
        long long hour=stoll(hr);
        long long hour1=stoll(hr2);
        long long final=(hour1-hour)*3600;
        long long ans=final;
        long long minu=stoll(min);
        long long minu2=stoll(min2);
        long long finalmin=(minu2-minu)*60;
        ans+=finalmin;
        long long seco=stoll(sec);
        long long seco2=stoll(sec2);
        long long finalsec=(seco2-seco);
        ans+=finalsec;

        return ans;




    }
};