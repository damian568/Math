#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    string triangle;
    string rectangle;
    string cube;
    string parallel;
    string rhombus;

    //Триъгълник
    cout<<"Enter Figure:";
    cin>>triangle;

    if(triangle=="triangle"){

    int space, rows;
    int a,b,c;
    int l,o;

    cout <<"Enter number:";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(space = 1; space <= rows-i; ++space)
        {
            cout <<"  ";
        }
        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    cout<<"P=a+b+c"<<endl;
    cout<<"S=(a.b):2 or S=(c.hc):2"<<endl;
    cout<<endl;

    cout<<"Enter 3 sides:";
    cin>>a>>b>>c;

    int P=a+b+c;
    cout<<"P="<<P<<endl;
    if(P<0){
        cout<<"Wrong!"<<endl;
    }
    cout<<endl;

    cout<<"Enter 2 sides:";
    cin>>l>>o;

    int S=(l*o)/2;
    cout<<"S="<<S<<endl;
    if(S%2==0){
        cout<<"This can't divided into two!";
    }
    }else{
        cout<<"No such Figure!";
    }
    cout<<endl;
    cout<<endl;

    //Правоъгълник
    cout<<"Enter Figure:";
    cin>>rectangle;
    if(rectangle=="rectangle"){

    int n;
    int t,v;
    int r,y;

    cout<<"Enter number:";
    cin>>n;
    cout<<"*";

    for(int i=0; i<n-2; i++){
        cout<<"*";
    }
    cout<<"*"<<endl;

    for(int r=0; r<n-2; r++){
        cout<<"*";
        for(int c=0; c<n-2; c++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }

    cout<<"*";
    for(int i=0; i<n-2; i++){
        cout<<"*";
    }
    cout<<"*"<<endl;

    cout<<"P=2(a+b)"<<endl;
    cout<<"S=a.b"<<endl;
    cout<<endl;

    cout<<"Enter 2 sides:";
    cin>>t>>v;

    int P=(t+v)*2;
    cout<<"P="<<P<<endl;
    if(P<0){
        cout<<"Wrong!"<<endl;
    }
    cout<<endl;

    cout<<"Enter 2 sides:";
    cin>>r>>y;

    int S=r*y;
    cout<<"S="<<S<<endl;
    if(S<0){
        cout<<"Wrong!";
    }
    }else{
        cout<<"No such Figure!";
    }
    cout<<endl;
    cout<<endl;

    //Квадрат
    int p;
    int u,h;

    cout<<"Enter Figure:";
    cin>>cube;

    if(cube=="cube"){
    cout<<"Enter number:";
    cin>>p;
    for(int i=1; i<=p; i++){
        for(int j=1; j<=5; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<"P=a+a+a+a or P=4.a"<<endl;
    cout<<"S=a.a"<<endl;
    cout<<endl;

    cout<<"Enter side:";
    cin>>u;

    int P=u+u+u+u;
    cout<<"P="<<P<<endl;
    if(P<0){
        cout<<"Wrong!";
    }
    cout<<endl;

    cout<<"Enter side:";
    cin>>h;

    int S=h*h;
    cout<<"S="<<S<<endl;
    if(S<0){
        cout<<"Wrong!";
    }
    }else{
        cout<<"No such Figure!";
    }
    cout<<endl;
    cout<<endl;

    //Успоредник
    cout<<"Enter Figure:";
    cin>>parallel;
    if(parallel=="parallel"){
    int o;
    int nm,pl;

    printf("Enter number:");
    scanf("%d",&o);

    for(int i=o;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=o;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    cout<<"P=2.a+2.b"<<endl;

    cout<<"Enter two sides:";
    cin>>nm>>pl;

    int P=2*nm+2*pl;
    cout<<"P="<<P<<endl;
    if(P<0){
        cout<<"Wrong!";
    }
    }else{
        cout<<"No such Figure!";
    }
    cout<<endl;
    cout<<endl;

    //Ромб
    cout<<"Enter Figure:";
    cin>>rhombus;
    if(rhombus=="rhombus"){
    int ok;
    int vb,kl,ho;
    printf("Enter number:");
    scanf("%d",&ok);
    int spaces=ok-1;
    int stars=1;
    for(int i=1;i<=ok;i++)
    {
      for(int j=1;j<=spaces;j++)
      {
        printf(" ");
      }
      for(int k=1;k<=stars;k++)
      {
        printf("*");
      }
      if(spaces>i)
      {
        spaces=spaces-1;
        stars=stars+2;
      }
      if(spaces<i)
      {
        spaces=spaces+1;
        stars=stars-2;
      }
      printf("\n");
    }
    cout<<"P=4.a or P=a+a+a+a"<<endl;
    cout<<"S=a.h"<<endl;

    cout<<"Enter side:";
    cin>>vb;

    int P=vb+vb+vb+vb;
    cout<<"P="<<P<<endl;

    if(P<0){
        cout<<"Wrong!";
    }

    cout<<"Enter side and width:";
    cin>>kl>>ho;

    int S=kl*ho;
    cout<<"S="<<S<<endl;

    if(S<0){
        cout<<"Wrong!";
    }
    }else{
        cout<<"No such Figure!";
    }
}
