
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
           unordered_map<string, int> m;
           int i=0; 
           int n=0;
           while(i<arr.size()){
                string s = arr[i];
                m[s]++;               
                i++;
           }

           for(int i=0; i<arr.size(); i++){
                string s = arr[i];
                if(m[s]==1){               
                  n++;
                  if(n==k)                 
                    return s;
                }
           }

        return "";
    }
};
