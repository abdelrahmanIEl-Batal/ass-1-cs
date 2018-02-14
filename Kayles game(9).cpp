#include <iostream>

using namespace std;

void printnum(int x,int num[]){
    cout<<"Numbers are : ";
for(int i=0; i<x; ++i){
    cout<<num[i]<<" ";
}
}
int main()
{
   cout<<"Enter arbitrary number"<<endl;
   int x;
   cin>>x;
   int num[x];
   int z=1;
   for(int i=0;  i<=x; ++i){
        num[i]=z%10;
        z++;
   }
  printnum(x,num);
  int player=1;
  while (true){
  cout<<"Player"<<" "<<player<<" "<<"How many numbers to remove 1 or 2? "<<endl;

  int n;
  while(true){
  cin>>n;
  if(n==1 || n==2){
     break;
  }
  else{
    cout<<"Numbers should be 1 or 2"<<endl;
  }
  }

  if(n==1){
    cout<<"Player"<<player<<" : "<<endl;
    int p1;
    cin>>p1;
    num[p1-1]=-1;
    printnum(x,num);
  }
  else if (n==2){
    cout<<"Player"<<player<<" : "<<endl;
    int n1;
    int n2;
    while (true){
        cin>>n1;
        cin>>n2;
        if(n1-n2==1 || n1-n2==-1){
            break;
        }
        else{
            cout<<"Numbers are not adjacent"<<endl;
        }
    }
   num[n1-1]=-1;
   num[n2-1]=-1;
   printnum(x,num);
  }
  bool check=true;
  for(int i=0; i<x; ++i){
    if(num[i]==-1){
        check=true;
    }
    else{
        check=false;
    }
    }
        if (check==true){
        cout<<"Player"<<player<<"wins!"<<endl;
        break;
  }
if(player==1){
    player=2;
}
else if(player==2){
    player=1;
}

}
  }




