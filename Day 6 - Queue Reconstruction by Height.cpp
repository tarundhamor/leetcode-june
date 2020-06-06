class Solution {
public:
     vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {    
    
        sort(people.begin(), people.end(), 
             [](auto &lhs, auto &rhs){ 
                 return lhs[0] > rhs[0] || (lhs[0] == rhs[0] && lhs[1] < rhs[1]); 
             }); 
        
   
        for(int i = 0; i < people.size(); i++)
        { 
            int pos = people[i][1];        
            vector person = people[i];
            for(int j = i; j >=pos+1 ; j--)
                people[j] = people[j-1]; 
            people[pos] = person; 
        }
        return people; 
    }
};