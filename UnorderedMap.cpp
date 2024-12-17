#include <iostream>
#include <unordered_map>

using namespace std;
int main(){
unordered_map<string,int>up;
up.insert({"Amit",478});
up.insert({"Piyush",47});
up.insert({"Anurag",48});
up.insert({"Yashvin",500});
up.insert({"Yashvin",600});

  for(auto p :up){
    cout<<p.first<<"\t"<<p.second<<"\n";
  }

 auto p = up.find("Piyush");
 if(p!=up.end()){
    cout<<p->first<<"\t"<<p->second<<"\n";
 }else{
 cout<<"Not found";
 }

 up.erase("Anurag");
 cout<<"After deletion Anurag\n";
 for(auto p :up){
    cout<<p.first<<"\t"<<p.second<<"\n";
  }

}
