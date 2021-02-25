#include <iostream>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    int MX , MY , PX , PY ;
    vector<string> result ;

    //getting the m and p position
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j  < n ; j++){
            if(grid[i][j] == *"m"){
                MX = i ;
                MY = j ;
            } else if (grid[i][j] == *"p"){
                PX = i ;
                PY = j ;
            }
        }
      }

        if(MX == PX){
            //This means bot and princess is in the same line
            
        } else if(MX < PX){
          ////This means bot is on the top grid line
          int l = PX - MX ;
          for(int k = 0 ; k  < l ; k++){
            result.push_back("DOWN");
          }
        } else if(MX > PX){
          ////This means bot is on the bottom grid line
          int q = MX - PX ;
          for(int k = 0 ; k  < q ; k++){
            result.push_back("UP");
          }
        }
        if(MY == PY){
            //This means bot and princess is in the same line
            
        } else if(MY < PY){
          ////This means bot is on the Left grid line
          int l = PY - MY ;
          for(int k = 0 ; k  < l ; k++){
            result.push_back("RIGHT");
          }
        } else if(MY > PY){
          ////This means bot is on the right grid line
          int q = MY - PY ;
          for(int k = 0 ; k  < q ; k++){
            result.push_back("LEFT");
          }
        }
    int steps = result.size();
    for(int i = 0 ; i < steps ; i++){
      cout << result[i] << endl ;
    }


}

int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
