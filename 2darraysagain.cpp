//int b[][]; first column wil signifies the number of rows and second column will signifies the number of column
//example int b[3][4]; isme agr humein koi index pr value place krni hog toh hum uska rows and column dono ki inforation denge
/* int   b[100][100];
or uske bad mein hum user se rows input kra lenge or coulumn bhi input kra lenge
rows - m=3
col- n=2


user kasie valuefill krega iss tarike se
b[0][o],b[0][1],b[1][0],b[1][1],b[2][1],b[2][2]
toh iss tarikes e humein apne array  mein

*/
#include<iostream>
using namespace std;
int main(){
    int a[100][100];
    int m,n;
    cin>>m>>n;
//taking input
    for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
    }
    //print array row wise
    cout<<"row wise :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"coulumn wise : "<<endl;
    for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
// thsin code is workin fine for the 2d arrays.