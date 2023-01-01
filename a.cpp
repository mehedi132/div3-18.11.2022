#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,z,i,p;
    string s;
    cin>>t;
    while(t)
    {
        p=1;
        cin>>s;
        
         z=s.size();
         if(s[0]=='Y')
         {
            for(i=1;i<z;i++)
            {
                if(p==1 && s[i]=='e')
                {
                    p=2;
                    continue;
                }
                else if( p==2 && s[i]=='s')
                { p=3;
                    continue;

                }
                else if( p==3 && s[i]=='Y')
                { p=1;
                    continue;

                }
                else
                {
                    p=0;
                    break;
                }


            }


         }
        else if(s[0]=='e')
         {
            for(i=1;i<z;i++)
            {
                if(p==1 && s[i]=='s')
                {
                    p=2;
                    continue;
                }
                else if( p==2 && s[i]=='Y')
                { p=3;
                
                    continue;

                }
                else if( p==3 && s[i]=='e')
                { p=1;
                    continue;

                }
                else
                {
                    p=0;
                    break;
                }
               


            }


         }

         else if(s[0]=='s')
         {
             
            for(i=1;i<z;i++)
            {
                if(p==1 && s[i]=='Y')
                {
                    p=2;                    
                    continue;
                }
                else if( p==2 && s[i]=='e')
                { p=3;
               
                    continue;

                }
                else if( p==3 && s[i]=='s')
                { p=1;
                    continue;

                }
                else
                {
                    p=0;
                    break;
                }


            }
           
           


         }
         else{
            p=0;
         }
         
             
         

         if(p)
         {
            cout<<"YES"<<endl;
         }
         else{
          cout<<"NO"<<endl;      
         }
        



        
         

        t--;
    }
   
}