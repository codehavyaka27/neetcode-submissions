class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {

        vector<pair<int,int>> p;
        int fleet=1;
        for(int i=0;i<speed.size();i++){
            p.push_back({position[i],speed[i]});
        }
        sort(p.begin(),p.end());
      double time=(double)((target-p.back().first))/p.back().second;
              for(int i=p.size()-2;i>=0;i--){
            double fleet_time=(double)(target-p[i].first)/p[i].second;
            if(fleet_time>time){
                fleet+=1;
                time=fleet_time;
            }else{
                continue;
            }
            

        }
        return fleet;

        
    }
};
