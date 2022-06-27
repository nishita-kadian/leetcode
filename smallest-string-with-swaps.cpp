//SMALLEST STRING WITH SWAPS -> 06/27/2022 23:15
//https://leetcode.com/problems/smallest-string-with-swaps/submissions/
class Solution {
public:
    int find(int &x,vector<int> &root){
        if(x==root[x])
            return x;
        return root[x] = find(root[x],root);
    }
    void union_(int &x,int &y,vector<int> &root,vector<int> &rank,int &comp){
       int rootX = find(x,root);
        int rootY = find(y,root);
        if(rootX!=rootY){
            if(rank[rootX]>rank[rootY])
                root[rootY] = rootX;
            else if(rank[rootX]<rank[rootY])
                root[rootX] = rootY;
            else{
                root[rootY] = rootX;
                rank[rootX] += 1;
            }
            comp--;
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        vector<int> root(s.length(),0);
        for(int i =0;i<s.length();i++){
            root[i] = i;
        }
        vector<int> rank(s.length(),1);
        int comp = s.length();
        for(int i= 0;i<pairs.size();i++){
            union_(pairs[i][0],pairs[i][1],root,rank,comp);
        }
        for(int i =0;i<root.size();i++){
            find(i,root);
        }
        unordered_map<int,string> m;
        unordered_map<int,vector<int>> t;
        for(int i= 0;i<root.size();i++){
            if(m.find(root[i])!=m.end()){
                m[root[i]]+=s[i];
                t[root[i]].push_back(i);
            }
            else{
                m[root[i]] = s[i];
                t[root[i]] = vector<int>(1,i);
            }
        }
        auto i = t.begin();
        for(auto it= m.begin();it!=m.end();it++,i++){
            string p = it->second;
            sort(p.begin(),p.end());
            for(int j = 0;j<i->second.size();j++){
                s[i->second[j]] = p[j];
            }
        }
        return s;
    }
};
