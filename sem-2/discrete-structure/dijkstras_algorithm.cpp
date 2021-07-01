#include<iostream>
using namespace std;
#define infty 9999
#define max 10

void djkstra(int a[max][max],int n, int startnode);
int main(){
    int a[max][max],i,j,n,u;
    cout<<"Enter number of vertices : ";
    cin>>n;
    cout<<"Enter the cost adjacey matrix with entry 0 for nonadjacent vertices : "<<endl;
    for(i = 1; i<= n; i++){
        for(j =1; j<=n; j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the starting vertex : ";
    cin>>u;
    djkstra(a,n,u);

    return 0;
}

void djkstra(int a[max][max],int n,int startnode){
    int cost[max][max],distance[max],pred[max];
    int selected[max],count,mindistance,nextnode,i,j;


    //pred[] stores the predecessor of each node
    //count giver the number of nodes seen so far
    //create the cost matrix

    for(i =1; i<=n; i++){
        for(j = 1; j<=n; j++){
            if(a[i][j] == 0){
                cost[i][j] = infty;
            }else{
                cost[i][j] = a[i][j];
            }
        }
    }

    //initialize pred[],distance[] and selected[]
    for(i = 1; i<=n; i++){
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        selected[i] = 0;
    }

    distance[startnode] = 0;
    selected[startnode] = 1;
    count = 1;

    while(count <n-1){
        mindistance = infty;
        //next node giver the node at minimum distance
        for(i = 1; i<=n ;i++){
            if(distance[i]<mindistance && !selected[i]){
                mindistance = distance[i];
                nextnode = i;
            }
        }
        //check if a better path exists through next node 
        selected[nextnode] = 1;
        for(i = 1; i<=n; i++){
            if(!selected[i]){
                if(mindistance + cost[nextnode][i]<distance[i]){
                    distance[i] = mindistance+cost[nextnode][i];
                    pred[i] = nextnode;
                }
            }
        }
        count ++;
    }

    //print the path and distance of each node
    for(i = 1; i<=n ;i++){
        if(i  != startnode){
            cout<<"Distance of node "<<i<<" is : "<<distance[i]<<endl;
            j = i;
            do{
                j = pred[j];
                cout<<"Path : "<<j<<"->"<<i;
            }while(j != startnode);
        }
    }

}
