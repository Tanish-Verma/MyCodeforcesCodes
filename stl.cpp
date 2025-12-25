#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair <int ,int> v;
    v = {1,2};
    cout<< v.first;
    cout << " " << v.second << endl;
    v.operator=(make_pair(10, 20)); 
    cout << v.first << " " << v.second << endl;
    pair <int,pair <int,int>> p ={34,{1,3}};
    cout<< p.first<<endl;
}

void explainVector(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector <pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(10,20);

    vector <int> v(5,100);
    vector <int> v(5);
    vector <int> v1(5,20);
    vector <int> v2(v1);

    vector <int>::iterator it =v.begin(); // pointers only 
    vector <int>::iterator it =v.end(); // pointers only 
    vector <int>::reverse_iterator it =v.rbegin(); // pointers only 
    vector <int>::reverse_iterator it =v.rend(); // pointers only 

    for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
    {
        cout<<*(i)<<endl;
    }
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout<<*(i)<<endl;
    }
    v.erase(v.begin()+1);
    v.erase(v.begin()+2,v.begin()+4);

    vector<int> v(2,100);
    v.insert(v.begin(),(300));
    v.insert(v.begin()+1,2,10);
    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());

    cout << v.size();
    v.pop_back();
    v1.swap(v2);
    v.clear();
    cout << v.empty();   
}

void explainList(){
    list <int> ls;

    ls.push_back(1);
    ls.emplace_back(2);
    ls.push_front(3);
    ls.emplace_front(4);
}

void explainDeque(){
    deque<int>dq;
    //push back emplace back , push front , emplace front  ,pop back , pop front , back, front rest same as vector;
}
void explainPQ(){
    priority_queue <int>pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);
    cout<<pq.top();
    //size swap empty functions same as others

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout<< pq.top();
}

void explainSet(){
    //stores sorted and unique elements only 
    set <int> s;
    s.insert(1);
    s.insert(2);
    s.emplace(1);
    s.insert(4);
    s.insert(3);
    s.insert(5);
    
    auto it =s.find(3);
    auto it =s.find(6); //returns set.end() 
    
    s.erase(5);
    s.insert(5);
    auto it =s.find(2);
    s.erase(it);
    s.insert(2);

    auto f1 = s.find(1);
    auto f2 = s.find(4);
    s.erase(f1,f2); //erases [first,last)
}

void explainMultiset(){
    multiset <int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);//erases all 1s

    int cnt = ms.count(1);

    //to erase only 1

    ms.erase(ms.find(1));
    
    ms.erase(ms.find(1),next(ms.find(1), 2));

    //rest functions same as set
}

void explainUorderedSet(){
    unordered_set <int> Us;
    //lower bound and upper bound functions do not work
    //rest all functions are same as above 
    //it does not store in an particular order ,it has a better complexity than 
    //set in most cases , except some where collisions happen
}

void explainMap(){
    map <int,int> mpp;
    // map <int,pair<int,int>> mpp;
    // map <pair<int,int>,int> mpp;
    mpp[1] = 2;
    mpp.emplace(std::make_pair(3,1));
    mpp.insert(std::make_pair(3,1));

    //mpp[{3,5}] =10;

    for(auto i:mpp){
        cout<<i.first<<""<<i.second<<endl;
    }
    cout<<mpp[1];
    cout<<mpp[6]; //prints 0 or null;
    //use find for ptr;
    //O(log(n))
}

void explainMultiMap(){
    //can store duplicate keys
    //same as maps, //sorted
    //only mpp[key] cannot be used 
}
void explainUnorderedMap(){
    //same  as set and unordered set difference
    //unique keys not sorted
    //O(1) 
    //worst case O(n);
}

void explainExtra(){
    //sort(ptrstart,ptrend) [start,end)
    //sort(ptrstart,ptrend,greater<int>) descending order
    //sort(ptrstart,ptrend,comp) comp self made comparotor. It must be a bool;
    int num =7;
    int cnt = __builtin_popcount(num); //number of ones in binary representation

    long num = 1257868716;
    int cnt = __builtin_popcountll(num); //for large numbers use ll

    string s ="123";
    do
    {
        cout<<s<<endl;
    } while (next_permutation(s.begin(),s.end()));
    // int maxi = *max_element(a,a+n)
    
}

int main(){
    explainPair();
    return 0;
}