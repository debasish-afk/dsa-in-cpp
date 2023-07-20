#include <iostream>
using namespace std;

// rectangle
int main() {
//   for(int i=0;i<3;i++){
//     for(int j=0;j<5;j++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }

  // hollow rectangle
    // for(int row=0;row<3;row++){
    //   for(int j=0;j<5;j++){
    //     if((row==1 &&j==0) || (row==1 &&j==4)){
    //       cout<<"* ";
    //     }else if(row==0 || row==2){
    //       cout<<"* ";
    //     }else{
    //       cout<<"  ";
    //     }
    //   }
    //   cout<<endl;
    // }

  //Big hollow rectangle
  for(int row=0;row<6;row++){
    for(int column=0;column<6;column++){
      if(row==1 || row==5){
        cout<<"* ";
      }else if((row!=0 && row!=5 && column==0) || (row!=5 && row!=0 && 
            column==5)){
        cout<<"* ";
      }else{
        cout<<"  ";
      }
    }
    cout<<endl;
  }
}