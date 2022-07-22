vector<int> gradingStudents(vector<int> grades) {
  for(auto& grade: grades) {
    if(grade >= 38) {
      int round_of = ((4+grade)/5) * 5;
      if( (round_of - grade) < 3) {
        grade = round_of;
      }
    } else { continue; }
  }
  return grades;
}
