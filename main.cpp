#include <iostream>
#include <vector>
#include <algorithm>
// standard namespace
using namespace std;

int main(){
    vector<string>words;

    cout<<"input words to fill the dictionary\n";
    for (string word;cin>>word;) {

        words.push_back(word);//the new elements are read and stored in a vector
        cout<<"the number of words"<<words.size()<<endl;

        //sort the elements in the vector called words

        sort(words.begin(),words.end());

        for(int i=0;i<words.size();++i){
            if(i==0|| words[i-1]!=words[i])//is this a new word?
            {
                cout<<words[i]<<'\t';//display those elements
            }

        }
    }
}