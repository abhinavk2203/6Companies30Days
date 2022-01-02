string encode(string src)
{     
  string s = "";
  s = s + src[0];
  char c = src[0];
  int count = 1, i=1;
  while(i<src.length()){
      char ch = src[i];
      if(ch == c) count++,i++;
      else{
          s = s + to_string(count);
          count = 1, c = ch, s = s + c, i++;
      }
  }
  s = s + to_string(count);
  return s;
}