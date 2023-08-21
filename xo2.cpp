#include<iostream>
using namespace std;

bool ketqua(int s[][100], int hang ,int cot, int thang)
{
    int kq=0;
    if(thang ==3)
    {
        for(int i=0;i<hang;i++)
        {
            for(int j=0;j<cot;j++)
            {
                if(s[i][j]==s[i][j+1] && s[i][j]==s[i][j+2] ) kq++;
                if(s[i][j]==s[i+1][j] && s[i][j]==s[i+2][j] ) kq++;
                if(s[i][j]==s[i+1][j+1] && s[i][j]==s[i+2][j+2] ) kq++;
                if(s[i][j]==s[i+1][j-1] && s[i][j]==s[i+2][j-2] ) kq++;
            }
        }
    }
    if(thang ==4 )
    {
        for(int i=0;i<hang;i++)
        {
            for(int j=0;j<cot;j++)
            {
                if(s[i][j]==s[i][j+1] && s[i][j]==s[i][j+2] &&s[i][j]==s[i][j+3]  ) kq++;
                if(s[i][j]==s[i+1][j] && s[i][j]==s[i+2][j] &&s[i][j]==s[i+3][j]  ) kq++;
                if(s[i][j]==s[i+1][j+1] && s[i][j]==s[i+2][j+2] &&s[i][j]==s[i+3][j+3] ) kq++;
                if(s[i][j]==s[i+1][j-1] && s[i][j]==s[i+2][j-2] &&s[i][j]==s[i+3][j-3] ) kq++;
            }
        }
    }
    if(thang ==5 )
    {
        for(int i=0;i<hang;i++)
        {
            for(int j=0;j<cot;j++)
            {
                if(s[i][j]==s[i][j+1] && s[i][j]==s[i][j+2] &&s[i][j]==s[i][j+3] &&s[i][j]==s[i][j+4] ) kq++;
                if(s[i][j]==s[i+1][j] && s[i][j]==s[i+2][j] &&s[i][j]==s[i+3][j] &&s[i][j]==s[i+4][j] ) kq++;
                if(s[i][j]==s[i+1][j+1] && s[i][j]==s[i+2][j+2] &&s[i][j]==s[i+3][j+3] &&s[i][j]==s[i+4][j+4]) kq++;
                if(s[i][j]==s[i+1][j-1] && s[i][j]==s[i+2][j-2] &&s[i][j]==s[i+3][j-3] &&s[i][j]==s[i+4][j-4]) kq++;
            }
        }
    }
    if(thang ==6 )
    {
        for(int i=0;i<hang;i++)
        {
            for(int j=0;j<cot;j++)
            {
                if(s[i][j]==s[i][j+1] && s[i][j]==s[i][j+2] &&s[i][j]==s[i][j+3] &&s[i][j]==s[i][j+4] &&s[i][j]==s[i][j+5]) kq++;
                if(s[i][j]==s[i+1][j] && s[i][j]==s[i+2][j] &&s[i][j]==s[i+3][j] &&s[i][j]==s[i+4][j] &&s[i][j]==s[i+5][j]) kq++;
                if(s[i][j]==s[i+1][j+1] && s[i][j]==s[i+2][j+2] &&s[i][j]==s[i+3][j+3] &&s[i][j]==s[i+4][j+4] &&s[i][j]==s[i+5][j+5]) kq++;
                if(s[i][j]==s[i+1][j-1] && s[i][j]==s[i+2][j-2] &&s[i][j]==s[i+3][j-3] &&s[i][j]==s[i+4][j-4] &&s[i][j]==s[i+5][j-5]) kq++;
            }
        }
    }
    if(thang ==7 )
    {
        for(int i=0;i<hang;i++)
        {
            for(int j=0;j<cot;j++)
            {
                if(s[i][j]==s[i][j+1] && s[i][j]==s[i][j+2] &&s[i][j]==s[i][j+3] &&s[i][j]==s[i][j+4] &&s[i][j]==s[i][j+5] &&s[i][j]==s[i][j+6]) kq++;
                if(s[i][j]==s[i+1][j] && s[i][j]==s[i+2][j] &&s[i][j]==s[i+3][j] &&s[i][j]==s[i+4][j] &&s[i][j]==s[i+5][j] &&s[i][j]==s[i+6][j]) kq++;
                if(s[i][j]==s[i+1][j+1] && s[i][j]==s[i+2][j+2] &&s[i][j]==s[i+3][j+3] &&s[i][j]==s[i+4][j+4] &&s[i][j]==s[i+5][j+5] &&s[i][j]==s[i+6][j+6]) kq++;
                if(s[i][j]==s[i+1][j-1] && s[i][j]==s[i+2][j-2] &&s[i][j]==s[i+3][j-3] &&s[i][j]==s[i+4][j-4] &&s[i][j]==s[i+5][j-5] &&s[i][j]==s[i+6][j-6]) kq++;
            }
        }
    }
    if(thang ==8 )
    {
        for(int i=0;i<hang;i++)
        {
            for(int j=0;j<cot;j++)
            {
                if(s[i][j]==s[i][j+1] && s[i][j]==s[i][j+2] &&s[i][j]==s[i][j+3] &&s[i][j]==s[i][j+4] &&s[i][j]==s[i][j+5] &&s[i][j]==s[i][j+6] &&s[i][j]==s[i][j+7]) kq++;
                if(s[i][j]==s[i+1][j] && s[i][j]==s[i+2][j] &&s[i][j]==s[i+3][j] &&s[i][j]==s[i+4][j] &&s[i][j]==s[i+5][j] &&s[i][j]==s[i+6][j] &&s[i][j]==s[i+7][j]) kq++;
                if(s[i][j]==s[i+1][j+1] && s[i][j]==s[i+2][j+2] &&s[i][j]==s[i+3][j+3] &&s[i][j]==s[i+4][j+4] &&s[i][j]==s[i+5][j+5] &&s[i][j]==s[i+6][j+6] &&s[i][j]==s[i+7][j+7]) kq++;
                if(s[i][j]==s[i+1][j-1] && s[i][j]==s[i+2][j-2] &&s[i][j]==s[i+3][j-3] &&s[i][j]==s[i+4][j-4] &&s[i][j]==s[i+5][j-5] &&s[i][j]==s[i+6][j-6] &&s[i][j]==s[i+7][j-7]) kq++;
            }
        }
    }
    if(kq==0) return false;
    else return true;
}

bool hetbang(int s[0][100],int hang , int cot)
{
    int dem=0;
    for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(s[i][j]==0 || s[i][j]==1) dem++;
        }
    }
    if(dem==hang*cot) return true;
    else return false;
}

int main()
{
    int dd=-1,ttc=1;
    int t=100,hang,cot,slxo,slnc;
    cout<<"so luong hang :";
    cin>>hang;
    cout<<"so luong cot :";
    cin>>cot;
    cout<<"so luong x,o thang hang can thiet de thang(chi dien tu 3 den 8) :";
    cin>>slxo;
    int a[100][100];
    for(int i=0;i<hang+1;i++)
            {
                for(int j=0;j<cot+1;j++)
                {
                    if(i==hang && j<10) cout<<j<<"  ";
                    else if(i==hang && j>=10) cout<<j<<" ";
                    else if(j==cot) cout<<i;
                    else cout<<"__|";
                }
                cout<<endl;
            }
    for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
            a[i][j]=t;
            t++;
        }
    }
    cout<<"so luong nguoi choi(tu 2 den 4 nguoi) :";
    cin>>slnc;
    if(slnc==2)
    {
            char s1,s2;
            cout<<"vui long chon ki hieu cua nguoi choi 1 :";
            cin>>s1;
            cout<<"vui long chon ki hieu cua nguoi choi 2 :";
            cin>>s2;

            do
            {
                int m,n;
                cin>>m>>n;
                if((0<=m && m<hang && 0<=n && n<cot) && a[m][n]!=0 &&a[m][n]!=1)
                    {
                        if(ttc%2==1) a[m][n]=1;
                        else a[m][n]=0;
                        for(int i=0;i<hang+1;i++)
                        {
                            for(int j=0;j<cot+1;j++)
                            {
                                if(i==hang && j<10) cout<<j<<"  ";
                                else if(i==hang && j>=10) cout<<j<<" ";
                                else if(j==cot) cout<<i;
                                else if(a[i][j]==1) cout<<" "<<s1<<"|";
                                else if(a[i][j]==0) cout<<" "<<s2<<"|";
                                else cout<<"__|";
                            }
                            cout<<endl;
                        }
                        ttc++;
                    }else cout<<"vui long nhap lai"<<endl;

                dd=a[m][n];
                if(a[m][n]==0) cout<<"den luot choi cua nguoi choi so 1"<<endl;
                else cout<<"den luot choi cua nguoi choi so 2"<<endl;
            }while (ketqua(a,hang,cot,slxo)==false && hetbang(a,hang,cot)==false);
            if(ketqua(a,hang,cot,slxo)==true)
            {
                if(dd==1) cout<<"nguoi choi so 1 thang";
                else cout<<"nguoi choi so 2 thang";
            }

            else cout<<"van dau hoa";
    }
    if(slnc==3)
    {
        char s1,s2,s3;
            cout<<"vui long chon ki hieu cua nguoi choi 1 :";
            cin>>s1;
            cout<<"vui long chon ki hieu cua nguoi choi 2 :";
            cin>>s2;
            cout<<"vui long chon ki hieu cua nguoi choi 3 :";
            cin>>s3;
            do
            {
                int m,n;
                cin>>m>>n;
                if((0<=m && m<hang && 0<=n && n<cot) && a[m][n]!=0 &&a[m][n]!=1 && a[m][n]!=2)
                    {
                        if(ttc%3==1) a[m][n]=1;
                        else if(ttc%3==0) a[m][n]=0;
                        else a[m][n]=2;
                        for(int i=0;i<hang+1;i++)
                        {
                            for(int j=0;j<cot+1;j++)
                            {
                                if(i==hang && j<10) cout<<j<<"  ";
                                else if(i==hang && j>=10) cout<<j<<" ";
                                else if(j==cot) cout<<i;
                                else if(a[i][j]==1) cout<<" "<<s1<<"|";
                                else if(a[i][j]==0) cout<<" "<<s2<<"|";
                                else if(a[i][j]==2) cout<<" "<<s3<<"|";
                                else cout<<"__|";
                            }
                            cout<<endl;
                        }
                        ttc++;
                    }else cout<<"vui long nhap lai"<<endl;

                dd=a[m][n];
                if(a[m][n]==0) cout<<"den luot choi cua nguoi choi so 1"<<endl;
                else if (a[m][n]==1) cout<<"den luot choi cua nguoi choi so 2"<<endl;
                else cout<<"den luot choi cua nguoi choi so 3"<<endl;
            }while (ketqua(a,hang,cot,slxo)==false && hetbang(a,hang,cot)==false);
            if(ketqua(a,hang,cot,slxo)==true)
            {
                if(dd==1) cout<<"nguoi choi so 1 thang";
                else if(dd==0) cout<<"nguoi choi so 2 thang";
                else cout<<"nguoi choi so 3 thang";
            }

            else cout<<"van dau hoa";
    }
    if(slnc==4)
    {
        char s1,s2,s3,s4;
            cout<<"vui long chon ki hieu cua nguoi choi 1 :";
            cin>>s1;
            cout<<"vui long chon ki hieu cua nguoi choi 2 :";
            cin>>s2;
            cout<<"vui long chon ki hieu cua nguoi choi 3 :";
            cin>>s3;
            cout<<"vui long chon ki hieu cua nguoi choi 4 :";
            cin>>s4;
            do
            {
                int m,n;
                cin>>m>>n;
                if((0<=m && m<hang && 0<=n && n<cot) && a[m][n]!=0 &&a[m][n]!=1 && a[m][n]!=2 && a[m][n]!=3)
                    {
                        if(ttc%4==1) a[m][n]=1;
                        else if(ttc%4==0) a[m][n]=0;
                        else if(ttc%4==2) a[m][n]=2;
                        else a[m][n]=3;
                        for(int i=0;i<hang+1;i++)
                        {
                            for(int j=0;j<cot+1;j++)
                            {
                                if(i==hang && j<10) cout<<j<<"  ";
                                else if(i==hang && j>=10) cout<<j<<" ";
                                else if(j==cot) cout<<i;
                                else if(a[i][j]==1) cout<<" "<<s1<<"|";
                                else if(a[i][j]==0) cout<<" "<<s2<<"|";
                                else if(a[i][j]==2) cout<<" "<<s3<<"|";
                                else if(a[i][j]==3) cout<<" "<<s4<<"|";
                                else cout<<"__|";
                            }
                            cout<<endl;
                        }
                        ttc++;
                    }else cout<<"vui long nhap lai"<<endl;

                dd=a[m][n];
                if(a[m][n]==0) cout<<"den luot choi cua nguoi choi so 1"<<endl;
                else if (a[m][n]==1) cout<<"den luot choi cua nguoi choi so 2"<<endl;
                else if (a[m][n]==2) cout<<"den luot choi cua nguoi choi so 3"<<endl;
                else cout<<"den luot choi cua nguoi choi so 4"<<endl;
            }while (ketqua(a,hang,cot,slxo)==false && hetbang(a,hang,cot)==false);
            if(ketqua(a,hang,cot,slxo)==true)
            {
                if(dd==1) cout<<"nguoi choi so 1 thang";
                else if(dd==0) cout<<"nguoi choi so 2 thang";
                else if(dd==2) cout<<"nguoi choi so 3 thang";
                else cout<<"nguoi choi so 4 thang";
            }

            else cout<<"van dau hoa";
    }
    return 0;
}
