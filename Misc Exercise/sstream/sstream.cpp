vector<int> ParseLine(string s){
  istringstream my_vector (s);
  int in;
  char ch;
  vector<int> vect;
  while (my_vector >> in >> ch) {
  	vect.push_back(in);
    cout << "a integer inserted into vector vect" << "\n";
  }
  cout << "no more item left" << "\n";
  return vect;
}