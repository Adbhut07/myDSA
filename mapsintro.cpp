#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    //creation
    unordered_map<string, int>m;

    //insertion

    // way 1
    pair<string, int> p = make_pair("adbhut", 3);
    m.insert(p);

    //way 2
    pair<string, int> pair2("satsangi", 2);
    m.insert(pair2);

    //way 3
    m["adbhut"] = 1;

    cout<< m["adbhut"]<<endl;   // this creates a entry of element 
    cout<< m.at("satsangi")<<endl;

    // cout<< m.at("unknownkwy")<<endl;  //it will give key not found 
    cout<< m["unknownkey"]<<endl;  //if element is not present then m[] will crate a null entry which will give 0
    //cout<< m.at("unknownkwy")<<endl; //after doing m[] it will also give 0

    //size
    cout<<m.size()<<endl;

    //to check presence
    cout<< m.count("adbhut")<<endl;   //if we check for unknown key then it will give 0

    //erase
    m.erase("unknownkey");
    cout<<m.size()<<endl;

    // printing the map
    cout<<"printing ............"<<endl;
    //way 1
    for(auto i:m){
        cout<< i.first <<" "<< i.second<< endl;
    }

    //way 2  (by using iterator)
    unordered_map<string, int> :: iterator it = m.begin();
    cout<<"............"<<endl;;
    while (it != m.end())
    {
        cout<< it->first <<" "<< it->second <<endl;
        it++;
    }
    


    return 0;
}