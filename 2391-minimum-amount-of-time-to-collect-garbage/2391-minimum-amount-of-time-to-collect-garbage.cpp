class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        
       int pickP=0;
        int pickM=0;
        int pickG=0;
         
        int travelP=0;
        int travelM=0;
        int travelG=0;
        
        int lastP=0;
         int lastM=0;
         int lastG=0;
        
        // calculate pick time 
        
        for(int j=0; j<garbage.size(); j++){
            string curr=garbage[j];
            
            
            for(int i=0; i<curr.length(); i++){
                char a=curr[i];
                if(a=='P'){
                    pickP++;
                    lastP=j;
                    
                }
                else if(a=='G'){
                    pickG++;
                          lastG=j;
                    
                }
                else{
                    pickM++;
                          lastM=j;
                }
            }
            
            
        }
        
        // calculate travel time
        
        for(int i=0; i<lastP; i++){
            travelP+=travel[i];
        }
        
          
        for(int i=0; i<lastG; i++){
                travelG+=travel[i];         

        }
        
          
        for(int i=0; i<lastM; i++){
             travelM+=travel[i];
            
        }
        
        return (pickP+pickG+pickM) +(travelP+travelG+travelM);
    }
};