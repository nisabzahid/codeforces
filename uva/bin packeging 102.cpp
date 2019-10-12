

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long b1,g1,c1,b2,g2,c2,b3,g3,c3;
    while   (cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
        long long bcg=0,bgc=0,cbg=0,cgb=0,gbc=0,gcb=0;
        bcg=b2+b3+c1+c3+g1+g2;
        bgc=b2+b3+g1+g3+c1+c2;
        cbg=c2+c3+b1+b3+g1+g2;
        cgb=c2+c3+g1+g3+b1+b2;
        gbc=g2+g3+b1+b3+c1+c2;
        gcb=g2+g3+c1+c3+b1+b2;

        long long m=(min(min(min(min(bgc,bcg),cbg),cgb),gbc),gcb);
         if(bcg==m)        cout<<"BCG "<<bcg;

        else if(m==bgc)    cout<<"BGC "<<bgc;

        else if(cbg==m)    cout<<"CBG "<<cbg;

        else if(cgb==m)    cout<<"CGB "<<cgb;

        else if(gbc==m)    cout<<"GBC "<<gbc;

        else if(gcb==m)    cout<<"GCB "<<gcb;
printf("\n");
    }
    return 0;
}

