#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
     string substr = s.substr(0,2);

     if(s.find("AM") != std::string::npos){
         if(substr != "12"){
             return s.replace(8,2,"");
         }else{
             s.replace(0,2,"00");
             return s.replace(8,2,"");
         }
     }else{
         if(substr == "12"){
             return s.replace(8,2,"");
         }else{
             int temp = stoi(substr) + 12;
             s.replace(0,2, to_string(temp));
             return s.replace(8,2,"");
         }
     }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
