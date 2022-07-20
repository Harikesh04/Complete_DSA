#include<bits/stdc++.h>
using namespace std;
#define d 256
const int q= INT_MAX;

// avg case tc:O(n+m);
// worst case time complexity i.e when all the char in the pattern are same then have to traverse through all the window is same that was in nieve . O(nm);

void RBSearching(string txt,string ptn){
    int n= txt.size();
    int m= ptn.size();
    int i,j;
    int p=0,t=0;// hash value of pattern and text
    int h=1;

     // The value of h would be "pow(d, M-1)%q" 
     for (i = 0; i < m - 1; i++) 
        h = (h * d) % q; 
    
    
     // Calculate the hash value of pattern and first 
    // window of text 
    for ( i = 0; i < m; i++)
    {
       p=(d*p+ptn[i])% q;
       t=(d*t+txt[i])%q;
    }

      // Slide the pattern over text one by one 
      for (int i = 0; i < n-m+1; i++)
      {
       // Check the hash values of current window of text 
        // and pattern. If the hash values match then only 
        // check for characters one by one 
        if (p==t)
        {
             /* Check for characters one by one */
            for (j = 0; j < m; j++) 
            { 
                if (txt[i+j] != ptn[j])
                {
                  break;
                }
                    
                       
            } 
            if (j==m)
            {
                cout<<"pattern found at "<<i<<endl;
            }
            
        }
        // Calculate hash value for next window of text: Remove 
        // leading digit, add trailing digit 
        if ( i < n-m ) 
        { 
            t = (d*(t - txt[i]*h) + txt[i+m])%q; 
  
            // We might get negative value of t, converting it 
            // to positive 
            if (t < 0) 
            t = (t + q); 
        } 
        
      }
      
    


}

int main(int argc, char const *argv[])
{
    string txt,ptn;cin>>txt>>ptn;
    RBSearching(txt,ptn);
    return 0;
}
