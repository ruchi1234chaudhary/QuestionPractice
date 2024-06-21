class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        int i=0;
        string m="", n="", o="", p="";
        
        while(str[i]!='/')
        {
            m=m+str[i];
            i++;
        }
        i=i+1; //due to "/" sign.
        
        while(str[i]!=',')
        {
            n=n+str[i];
            i++;
        }
        i=i+2; // due to comma and space.
        
        while(str[i]!='/')
        {
            o=o+str[i];
            i++;
        }
        i=i+1; // again due to "/"sign.
        
        while(i<str.length())
        {
            p=p+str[i];
            i++;
        }
        
       int a= stoi(m);
       int b= stoi(n);
       int c= stoi(o);
       int d= stoi(p);
       
       double fraction1= double(a)/b;
       double fraction2= double(c)/d;
       
      if(fraction1==fraction2)
      return "equal";
       
      else if(fraction1>fraction2)
      return (to_string(a) + "/" + to_string(b));
       
      else 
      return (to_string(c) + "/" + to_string(d));
    }
};
