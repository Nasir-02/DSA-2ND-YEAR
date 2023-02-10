
string multiply(string num1, string num2) {
    int m = num1.size(), n = num2.size();
    vector<int> ans(m+n, 0);
    
    for (int i = 0; i < m; ++i) {
        int mod = 0, t1 = 0, t2 = 0;
        for (int j = 0; j < n; ++j) {
            t1 = (num1[m-1-i] - '0') * (num2[n-1-j] - '0') + mod;
            if (t1 == 0) continue;
            t2 = ans[i+j] + t1; // the multiply result index i+j
            ans[i+j] = t2 % 10, mod = t2 / 10;
        }
        if (mod > 0) ans[i+n] = mod;
    }
    
    string str;
    bool flag = false;
    for(int i = ans.size() - 1; i >= 0; --i) {
        if (flag || ans[i] != 0) {
            flag = true;
            str.append(1, char(ans[i] + '0'));
        }
    }
    
    if (!flag) return "0";
    return str;
}
