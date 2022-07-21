void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    vector<int> rangeApples, rangeOranges;
    int temp;
    for(int apple: apples){
        temp = apple+a;
        if(temp >= s && temp <= t)
            rangeApples.push_back(temp);
    }
    for(int orange: oranges){
        temp = orange + b;
        if(temp >= s && temp <= t)
            rangeOranges.push_back(temp);
    }
    cout << rangeApples.size() << endl;
    cout << rangeOranges.size() << endl;
}
