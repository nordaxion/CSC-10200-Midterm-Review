# CSC-10200-Midterm-Review

1. Write a function that takes a string parameter, and returns a Boolean value indicating whether or not all vowels (a,e,i,o,u) are present somewhere in the string. For example, if the input is "hello world", the return value should be false, and on input " programming is super fun!" the answer should be true.
2. Write a function that takes a vector of integers V, returns void , and has the effect of reversing the order of all the odd integers in V, while keeping the even ones in-place. For example, if V = [8,8,8,8,1,12,9,4,7,3,6,6,6,6], then after calling your function on V, its new contents should be V = [8,8,8,8,3,12,7,4,9,1,6,6,6,6]. 
3. Write a function that takes 2 vectors of sorted integers, and merges them into a third sorted vector which you can assume is initially empty. The prototype should look like this:
Void merge(const vector<int>& V1, const vector<int>& V2, vector<int>& result);
As an example, if the first two vectors contain [2,4,5,9] and [1,3,7,8,12,15,20] respectively, then the result vector should contain [1 2 3 4 5 7 8 9 12 15 20]. Note: do not use a sort function. You’ll not receive any credit for doing the problem this way.
