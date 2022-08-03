vector<int> breakingRecords(vector<int> scores) {
    vector<int> result;
    int min = scores[0], max = scores[0];
    int minCount = 0, maxCount = 0;
    for(int score: scores){
        if(min > score){
            min = score;
            minCount++;
        }
        if(max < score){
            max = score;
            maxCount++;
        }
    }
    cout << maxCount << " " << minCount;
    result.push_back(maxCount);
    result.push_back(minCount);
    return result;
}
