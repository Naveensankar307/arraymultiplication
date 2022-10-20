#include<iostream>
void readarray(int x[100][100],int r,int c);
void disparray(int x[100][100],int r,int c);
void matrixmultiplication(int a[100][100],int b[100][100], int g[100][100],int r,int c);
using namespace std;

main(){
    int a[100][100],b[100][100],g[100][100],r,c;
    cout<<"enter the number of rows : ";
    cin>>r;
    cout<<"enter the number of columns : ";
    cin>>c;
    readarray(a,r,c);
    readarray(b,r,c);
    matrixmultiplication(a,b,g,r,c);
    cout<<"Resultant matrix is : "<<"\n";
    disparray(g,r,c);
}

void readarray(int x[100][100],int r,int c){
    int i,j;
    for (i = 0;i<r;i++){
        for (j = 0;j<c;j++){
            cout<<"enter element : ";
            cin>>x[i][j];
        }
    }
}

void disparray(int x[100][100],int r,int c){
    int i,j;
    for (i = 0;i<r;i++){
        for (j = 0;j<c;j++){
            cout<<x[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void matrixmultiplication(int a[100][100],int b[100][100], int g[100][100],int r,int c){
    int i,j,k;
    for (i=0;i<r;i++){
        for(j=0;j<r;j++){
            for(k=0;k<c;k++){
                g[i][j]+=a[i][k]*b[k][j];            
            }
        }
    }
}