// There will be two arrays of integers. Determine all integers that satisfy the following two conditions:

// The elements of the first array are all factors of the integer being considered
// The integer being considered is a factor of all elements of the second array
// These numbers are referred to as being between the two arrays. Determine how many such numbers exist.

int getTotalX(vector<int> a, vector<int> b) {
    int count = 0;
    for(int i = 1; i <= 100; i++){
        bool continu = false;
        for(int aValue: a){
            if(i % aValue > 0){
                continu = true;
                break;
            }  
        }
        if(continu) continue;
        for(int bValue: b){
            if(bValue % i > 0){
                continu = true;
                break;
            }
                
        }
        if(continu) continue;
        count++;
    }
    return count;
}
