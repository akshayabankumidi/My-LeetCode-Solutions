class FoodRatings {
public:
    
   class comp{
       public:
       bool operator()(pair<int,string>&p1,pair<int,string>&p2){
           if(p1.first==p2.first) return p1.second>p2.second;
           return p1.first<p2.first;
       }
       
   };
    
    
    
    
    map<string,int>food1;
    map<string,string>foodtoc;
    map<string,priority_queue<pair<int,string>,vector<pair<int,string>>,comp>>c;
    map<pair<int,string>,int>track;
    
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
      
        for(int i=0;i<foods.size();i++){
           food1[foods[i]]=ratings[i];//foods -- ratings
           foodtoc[foods[i]]=cuisines[i];//foods-- cuisines
           c[cuisines[i]].push({ratings[i],foods[i]});//cusines--{ratings,foods}
        }
        //debug
        
        
        
    }
    
    void changeRating(string food, int newRating) {
     pair<int,string>temp={food1[food],food};//old data
     track[temp]=1;
     food1[food]=newRating;//modify
     c[foodtoc[food]].push({newRating,food});//pushing new data
        
        
    }
    
    string highestRated(string cuisine) {
        //return hightest 
//         cout<<cuisine<<"\n";
//         for(auto x:track){
            
//             cout<<x.first.first<<" "<<x.first.second;
//         }
        pair<int,string>p=c[cuisine].top();
        while(track[p]){
            
            c[cuisine].pop();
            track[p]=0;
            p=c[cuisine].top();
        }
        return p.second;
        
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */