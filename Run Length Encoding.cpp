string encode(string src)
{     
  //Your code here 
  string ans="";
  int c=1;
  int ch=src[0];
  for(int i=1;i<src.length();i++)
  {
      if(src[i]==ch)
      c++;
      else
      {
          ans+=ch;
          ans+=to_string(c);
          ch=src[i];
          c=1;
      }
  }
  ans+=ch;
  ans+=to_string(c);
  return ans;
}     
