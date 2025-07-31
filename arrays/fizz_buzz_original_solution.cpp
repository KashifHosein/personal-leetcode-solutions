Class solution{
  public:
    vector<string> fizzBuzz(const int &n){
    vector<string> v = {};
    const int max = pow(10,4);
    
    if (n < 1 || n > max)
     return v;
    
    for(int i = 1; i <= n; i+=1){
      bool fizzOrBuzz = false;
      bool fizzAndBuzz = false;
      string x = to_string(i);
      //cout << x << ' ';
      if(i % 3 == 0 && i % 5 == 0){
          v.push_back("FizzBuzz");
          fizzAndBuzz = true;
      } 
      
      if(i % 3 == 0 && !fizzAndBuzz){
          v.push_back("Fizz");
          fizzOrBuzz = true;
      }
      if(i % 5 == 0 && !fizzAndBuzz){
          v.push_back("Buzz");
          fizzOrBuzz = true;
      }
    
      if(!fizzOrBuzz && !fizzAndBuzz){
          v.push_back(x);
      }    
    }
    //cout << endl;
    return v;
    }
};
