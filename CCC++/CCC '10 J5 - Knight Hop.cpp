#include <bits/stdc++.h>
#define init_loop(x,n) for(int x = 0; x < n; x++) for(int y = 0; y < n; y++)
using namespace std;
int game_board[8][8];
int FINISHx, FINISHy, STARTx,STARTy;

bool valid(int num, int numn){
	return (num > 0 && num < 9) && (numn > 0 && numn < 9);		
}

int dfs(int x, int y, int distance){
    if(distance < game_board[x][y]){
        game_board[x][y] = distance;
        
        if(x==FINISHy && y == FINISHx){
			return 0;
		}
		
CCC '10 J5 - Knight Hop
		distance++;
        if(valid(x+2, y+1)){
			dfs(x+2,y+1,distance);
			}
        if(valid(x+1,y+2)){
			dfs(x+1,y+2,distance);
			}
        if(valid(x-1,y+2)){
			dfs(x-1,y+2,distance);
			}
        if(valid(x-2,y+1)){
			dfs(x-2,y+1,distance);
			}
        if(valid(x-2,y-1)){
			dfs(x-2,y-1,distance);
			}
        if(valid(x-1,y-2)){
			dfs(x-1,y-2,distance);
			}
        if(valid(x+1,y-2)){
			dfs(x+1,y-2,distance);
			}
        if(valid(x+2,y-1)){
			dfs(x+2,y-1,distance);
		}
    }
    return 0;
}
int main(){
  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
   init_loop(x, 9){
	   game_board[x][y] = INT_MAX;
   }
   
    cin >> STARTx >> STARTy >> FINISHx >> FINISHy;
    dfs(STARTy,STARTx,0);
    
    cout << game_board[FINISHy][FINISHx];
    return 0;
}