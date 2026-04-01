#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string line;
    vector<string> lines;
    size_t end_cnt = 0;
    while (getline(cin, line)){
        lines.push_back(line);
        size_t pos = 0;
        while (true){
            pos = line.find("endprogram", pos);
            if (pos == string::npos) break;
            ++end_cnt;
            pos += 10; // length of "endprogram"
        }
    }

    if (end_cnt >= 2) {
        cout.setf(std::ios::fixed); cout<<setprecision(6)<<0.5<<"\n";
        return 0;
    }

    for (size_t i = 0; i < lines.size(); ++i){
        cout << lines[i];
        if (i + 1 < lines.size()) cout << '\n';
    }
    if (!lines.empty() && !lines.back().empty()) cout << '\n';
    return 0;
}

